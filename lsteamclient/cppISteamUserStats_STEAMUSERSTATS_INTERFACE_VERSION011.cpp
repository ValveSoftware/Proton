/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetAchievementAndUnlockTime( params->pchName, params->pbAchieved, params->punUnlockTime );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetNumAchievements(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetAchievementName( params->iAchievement );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUserAchievementAndUnlockTime( params->steamIDUser, params->pchName, params->pbAchieved, params->punUnlockTime );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntriesForUsers( params->hSteamLeaderboard, params->prgUsers, params->cUsers );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    u_LeaderboardEntry_t_123 u_pLeaderboardEntry = *params->pLeaderboardEntry;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, &u_pLeaderboardEntry, params->pDetails, params->cDetailsMax );
    *params->pLeaderboardEntry = u_pLeaderboardEntry;
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->eLeaderboardUploadScoreMethod, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->AttachLeaderboardUGC( params->hSteamLeaderboard, params->hUGC );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetNumberOfCurrentPlayers(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->RequestGlobalAchievementPercentages(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetMostAchievedAchievementInfo( params->pchName, params->unNameBufLen, params->pflPercent, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetNextMostAchievedAchievementInfo( params->iIteratorPrevious, params->pchName, params->unNameBufLen, params->pflPercent, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetAchievementAchievedPercent( params->pchName, params->pflPercent );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->RequestGlobalStats( params->nHistoryDays );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetGlobalStat( params->pchStatName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetGlobalStat( params->pchStatName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetGlobalStatHistory( params->pchStatName, params->pData, params->cubData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetGlobalStatHistory( params->pchStatName, params->pData, params->cubData );
    return 0;
}

