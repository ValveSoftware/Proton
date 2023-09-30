/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAchievementAndUnlockTime( params->pchName, params->pbAchieved, params->punUnlockTime );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetUserAchievementAndUnlockTime( params->steamIDUser, params->pchName, params->pbAchieved, params->punUnlockTime );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, params->pLeaderboardEntry, params->pDetails, params->cDetailsMax );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->eLeaderboardUploadScoreMethod, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetNumberOfCurrentPlayers(  );
    return 0;
}

