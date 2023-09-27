#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_148a/steam_api.h"
#include "steamworks_sdk_148a/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_148a
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011.h"
void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (const char *)params->pchName, (int32)params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (const char *)params->pchName, (float)params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UpdateAvgRateStat( (const char *)params->pchName, (float)params->flCountThisSession, (double)params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievement( (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetAchievement( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ClearAchievement( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementAndUnlockTime( (const char *)params->pchName, (bool *)params->pbAchieved, (uint32 *)params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementIcon( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementDisplayAttribute( (const char *)params->pchName, (const char *)params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->IndicateAchievementProgress( (const char *)params->pchName, (uint32)params->nCurProgress, (uint32)params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumAchievements(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementName( (uint32)params->iAchievement );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestUserStats( (CSteamID)params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserAchievement( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserAchievementAndUnlockTime( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved, (uint32 *)params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ResetAllStats( (bool)params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->FindOrCreateLeaderboard( (const char *)params->pchLeaderboardName, (ELeaderboardSortMethod)params->eLeaderboardSortMethod, (ELeaderboardDisplayType)params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->FindLeaderboard( (const char *)params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardName( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardEntryCount( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardSortMethod( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardDisplayType( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->DownloadLeaderboardEntries( (SteamLeaderboard_t)params->hSteamLeaderboard, (ELeaderboardDataRequest)params->eLeaderboardDataRequest, (int)params->nRangeStart, (int)params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->DownloadLeaderboardEntriesForUsers( (SteamLeaderboard_t)params->hSteamLeaderboard, (CSteamID *)params->prgUsers, (int)params->cUsers );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry_params *params )
{
    LeaderboardEntry_t lin_pLeaderboardEntry;
    win_to_lin_struct_LeaderboardEntry_t_148a( params->pLeaderboardEntry, &lin_pLeaderboardEntry );
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetDownloadedLeaderboardEntry( (SteamLeaderboardEntries_t)params->hSteamLeaderboardEntries, (int)params->index, &lin_pLeaderboardEntry, (int32 *)params->pDetails, (int)params->cDetailsMax );
    lin_to_win_struct_LeaderboardEntry_t_148a( &lin_pLeaderboardEntry, params->pLeaderboardEntry );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UploadLeaderboardScore( (SteamLeaderboard_t)params->hSteamLeaderboard, (ELeaderboardUploadScoreMethod)params->eLeaderboardUploadScoreMethod, (int32)params->nScore, (const int32 *)params->pScoreDetails, (int)params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->AttachLeaderboardUGC( (SteamLeaderboard_t)params->hSteamLeaderboard, (UGCHandle_t)params->hUGC );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumberOfCurrentPlayers(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestGlobalAchievementPercentages(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetMostAchievedAchievementInfo( (char *)params->pchName, (uint32)params->unNameBufLen, (float *)params->pflPercent, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNextMostAchievedAchievementInfo( (int)params->iIteratorPrevious, (char *)params->pchName, (uint32)params->unNameBufLen, (float *)params->pflPercent, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementAchievedPercent( (const char *)params->pchName, (float *)params->pflPercent );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestGlobalStats( (int)params->nHistoryDays );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGlobalStat( (const char *)params->pchStatName, (int64 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGlobalStat( (const char *)params->pchStatName, (double *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGlobalStatHistory( (const char *)params->pchStatName, (int64 *)params->pData, (uint32)params->cubData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGlobalStatHistory( (const char *)params->pchStatName, (double *)params->pData, (uint32)params->cubData );
}

#ifdef __cplusplus
}
#endif
