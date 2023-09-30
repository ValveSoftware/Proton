/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006.h"

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, params->pLeaderboardEntry, params->pDetails, params->cDetailsMax );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->eLeaderboardUploadScoreMethod, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetNumberOfCurrentPlayers(  );
}

