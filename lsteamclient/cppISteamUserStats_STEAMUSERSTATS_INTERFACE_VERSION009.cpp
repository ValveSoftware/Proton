/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009.h"

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetAchievementAndUnlockTime( params->pchName, params->pbAchieved, params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetUserAchievementAndUnlockTime( params->steamIDUser, params->pchName, params->pbAchieved, params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntriesForUsers( params->hSteamLeaderboard, params->prgUsers, params->cUsers );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    u_LeaderboardEntry_t_111x u_pLeaderboardEntry = *params->pLeaderboardEntry;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, &u_pLeaderboardEntry, params->pDetails, params->cDetailsMax );
    *params->pLeaderboardEntry = u_pLeaderboardEntry;
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->eLeaderboardUploadScoreMethod, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->AttachLeaderboardUGC( params->hSteamLeaderboard, params->hUGC );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetNumberOfCurrentPlayers(  );
}

