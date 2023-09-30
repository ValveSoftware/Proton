/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010.h"

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievementAndUnlockTime( params->pchName, params->pbAchieved, params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserAchievementAndUnlockTime( params->steamIDUser, params->pchName, params->pbAchieved, params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntriesForUsers( params->hSteamLeaderboard, params->prgUsers, params->cUsers );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    u_LeaderboardEntry_t_111x u_pLeaderboardEntry = *params->pLeaderboardEntry;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, &u_pLeaderboardEntry, params->pDetails, params->cDetailsMax );
    *params->pLeaderboardEntry = u_pLeaderboardEntry;
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->eLeaderboardUploadScoreMethod, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->AttachLeaderboardUGC( params->hSteamLeaderboard, params->hUGC );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetNumberOfCurrentPlayers(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->RequestGlobalAchievementPercentages(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetMostAchievedAchievementInfo( params->pchName, params->unNameBufLen, params->pflPercent, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetNextMostAchievedAchievementInfo( params->iIteratorPrevious, params->pchName, params->unNameBufLen, params->pflPercent, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetAchievementAchievedPercent( params->pchName, params->pflPercent );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->RequestGlobalStats( params->nHistoryDays );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetGlobalStat( params->pchStatName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetGlobalStat( params->pchStatName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetGlobalStatHistory( params->pchStatName, params->pData, params->cubData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetGlobalStatHistory( params->pchStatName, params->pData, params->cubData );
}

