/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, params->pLeaderboardEntry, params->pDetails, params->cDetailsMax );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
    return 0;
}

