#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_111/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_111
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007.h"
void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (const char *)params->pchName, (int32)params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (const char *)params->pchName, (float)params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UpdateAvgRateStat( (const char *)params->pchName, (float)params->flCountThisSession, (double)params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievement( (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetAchievement( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ClearAchievement( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementAndUnlockTime( (const char *)params->pchName, (bool *)params->pbAchieved, (uint32 *)params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementIcon( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementDisplayAttribute( (const char *)params->pchName, (const char *)params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->IndicateAchievementProgress( (const char *)params->pchName, (uint32)params->nCurProgress, (uint32)params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestUserStats( (CSteamID)params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserAchievement( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserAchievementAndUnlockTime( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved, (uint32 *)params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ResetAllStats( (bool)params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->FindOrCreateLeaderboard( (const char *)params->pchLeaderboardName, (ELeaderboardSortMethod)params->eLeaderboardSortMethod, (ELeaderboardDisplayType)params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->FindLeaderboard( (const char *)params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardName( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardEntryCount( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardSortMethod( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardDisplayType( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->DownloadLeaderboardEntries( (SteamLeaderboard_t)params->hSteamLeaderboard, (ELeaderboardDataRequest)params->eLeaderboardDataRequest, (int)params->nRangeStart, (int)params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetDownloadedLeaderboardEntry( (SteamLeaderboardEntries_t)params->hSteamLeaderboardEntries, (int)params->index, (LeaderboardEntry_t *)params->pLeaderboardEntry, (int32 *)params->pDetails, (int)params->cDetailsMax );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UploadLeaderboardScore( (SteamLeaderboard_t)params->hSteamLeaderboard, (ELeaderboardUploadScoreMethod)params->eLeaderboardUploadScoreMethod, (int32)params->nScore, (const int32 *)params->pScoreDetails, (int)params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumberOfCurrentPlayers(  );
}

#ifdef __cplusplus
}
#endif
