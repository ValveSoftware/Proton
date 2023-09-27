#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_113/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_113
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009.h"
void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (const char *)params->pchName, (int32)params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (const char *)params->pchName, (float)params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UpdateAvgRateStat( (const char *)params->pchName, (float)params->flCountThisSession, (double)params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievement( (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetAchievement( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ClearAchievement( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementAndUnlockTime( (const char *)params->pchName, (bool *)params->pbAchieved, (uint32 *)params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementIcon( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementDisplayAttribute( (const char *)params->pchName, (const char *)params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->IndicateAchievementProgress( (const char *)params->pchName, (uint32)params->nCurProgress, (uint32)params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestUserStats( (CSteamID)params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserAchievement( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserAchievementAndUnlockTime( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved, (uint32 *)params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ResetAllStats( (bool)params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->FindOrCreateLeaderboard( (const char *)params->pchLeaderboardName, (ELeaderboardSortMethod)params->eLeaderboardSortMethod, (ELeaderboardDisplayType)params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->FindLeaderboard( (const char *)params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardName( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardEntryCount( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardSortMethod( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardDisplayType( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->DownloadLeaderboardEntries( (SteamLeaderboard_t)params->hSteamLeaderboard, (ELeaderboardDataRequest)params->eLeaderboardDataRequest, (int)params->nRangeStart, (int)params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->DownloadLeaderboardEntriesForUsers( (SteamLeaderboard_t)params->hSteamLeaderboard, (CSteamID *)params->prgUsers, (int)params->cUsers );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry_params *params )
{
    LeaderboardEntry_t lin_pLeaderboardEntry;
    win_to_lin_struct_LeaderboardEntry_t_113( params->pLeaderboardEntry, &lin_pLeaderboardEntry );
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetDownloadedLeaderboardEntry( (SteamLeaderboardEntries_t)params->hSteamLeaderboardEntries, (int)params->index, &lin_pLeaderboardEntry, (int32 *)params->pDetails, (int)params->cDetailsMax );
    lin_to_win_struct_LeaderboardEntry_t_113( &lin_pLeaderboardEntry, params->pLeaderboardEntry );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UploadLeaderboardScore( (SteamLeaderboard_t)params->hSteamLeaderboard, (ELeaderboardUploadScoreMethod)params->eLeaderboardUploadScoreMethod, (int32)params->nScore, (const int32 *)params->pScoreDetails, (int)params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->AttachLeaderboardUGC( (SteamLeaderboard_t)params->hSteamLeaderboard, (UGCHandle_t)params->hUGC );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumberOfCurrentPlayers(  );
}

#ifdef __cplusplus
}
#endif
