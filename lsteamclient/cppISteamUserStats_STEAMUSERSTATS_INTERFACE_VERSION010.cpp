/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievementAndUnlockTime( params->pchName, params->pbAchieved, params->punUnlockTime );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserAchievementAndUnlockTime( params->steamIDUser, params->pchName, params->pbAchieved, params->punUnlockTime );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntriesForUsers( params->hSteamLeaderboard, params->prgUsers, params->cUsers );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    u_LeaderboardEntry_t_111x u_pLeaderboardEntry = *params->pLeaderboardEntry;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, &u_pLeaderboardEntry, params->pDetails, params->cDetailsMax );
    *params->pLeaderboardEntry = u_pLeaderboardEntry;
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->eLeaderboardUploadScoreMethod, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->AttachLeaderboardUGC( params->hSteamLeaderboard, params->hUGC );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetNumberOfCurrentPlayers(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->RequestGlobalAchievementPercentages(  );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetMostAchievedAchievementInfo( params->pchName, params->unNameBufLen, params->pflPercent, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetNextMostAchievedAchievementInfo( params->iIteratorPrevious, params->pchName, params->unNameBufLen, params->pflPercent, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievementAchievedPercent( params->pchName, params->pflPercent );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->RequestGlobalStats( params->nHistoryDays );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetGlobalStat( params->pchStatName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetGlobalStat( params->pchStatName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetGlobalStatHistory( params->pchStatName, params->pData, params->cubData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetGlobalStatHistory( params->pchStatName, params->pData, params->cubData );
    return 0;
}

