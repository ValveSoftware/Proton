/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007.h"

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAchievementAndUnlockTime( params->pchName, params->pbAchieved, params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetUserAchievementAndUnlockTime( params->steamIDUser, params->pchName, params->pbAchieved, params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, params->pLeaderboardEntry, params->pDetails, params->cDetailsMax );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->eLeaderboardUploadScoreMethod, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetNumberOfCurrentPlayers(  );
}

