/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012.h"

struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012
{
#ifdef __cplusplus
    virtual bool RequestCurrentStats(  ) = 0;
    virtual bool GetStat( const char *, int32_t * ) = 0;
    virtual bool GetStat( const char *, float * ) = 0;
    virtual bool SetStat( const char *, int32_t ) = 0;
    virtual bool SetStat( const char *, float ) = 0;
    virtual bool UpdateAvgRateStat( const char *, float, double ) = 0;
    virtual bool GetAchievement( const char *, bool * ) = 0;
    virtual bool SetAchievement( const char * ) = 0;
    virtual bool ClearAchievement( const char * ) = 0;
    virtual bool GetAchievementAndUnlockTime( const char *, bool *, uint32_t * ) = 0;
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetNumAchievements(  ) = 0;
    virtual const char * GetAchievementName( uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool GetUserAchievementAndUnlockTime( CSteamID, const char *, bool *, uint32_t * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntriesForUsers( uint64_t, CSteamID *, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, u_LeaderboardEntry_t_123 *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, uint32_t, int32_t, const int32_t *, int32_t ) = 0;
    virtual uint64_t AttachLeaderboardUGC( uint64_t, uint64_t ) = 0;
    virtual uint64_t GetNumberOfCurrentPlayers(  ) = 0;
    virtual uint64_t RequestGlobalAchievementPercentages(  ) = 0;
    virtual int32_t GetMostAchievedAchievementInfo( char *, uint32_t, float *, bool * ) = 0;
    virtual int32_t GetNextMostAchievedAchievementInfo( int32_t, char *, uint32_t, float *, bool * ) = 0;
    virtual bool GetAchievementAchievedPercent( const char *, float * ) = 0;
    virtual uint64_t RequestGlobalStats( int32_t ) = 0;
    virtual bool GetGlobalStat( const char *, int64_t * ) = 0;
    virtual bool GetGlobalStat( const char *, double * ) = 0;
    virtual int32_t GetGlobalStatHistory( const char *, int64_t *, uint32_t ) = 0;
    virtual int32_t GetGlobalStatHistory( const char *, double *, uint32_t ) = 0;
    virtual bool GetAchievementProgressLimits( const char *, int32_t *, int32_t * ) = 0;
    virtual bool GetAchievementProgressLimits( const char *, float *, float * ) = 0;
#endif /* __cplusplus */
};

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAchievementAndUnlockTime( params->pchName, params->pbAchieved, params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetNumAchievements(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAchievementName( params->iAchievement );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetUserAchievementAndUnlockTime( params->steamIDUser, params->pchName, params->pbAchieved, params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntriesForUsers( params->hSteamLeaderboard, params->prgUsers, params->cUsers );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    u_LeaderboardEntry_t_123 u_pLeaderboardEntry = *params->pLeaderboardEntry;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, &u_pLeaderboardEntry, params->pDetails, params->cDetailsMax );
    *params->pLeaderboardEntry = u_pLeaderboardEntry;
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->eLeaderboardUploadScoreMethod, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AttachLeaderboardUGC( params->hSteamLeaderboard, params->hUGC );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetNumberOfCurrentPlayers(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RequestGlobalAchievementPercentages(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetMostAchievedAchievementInfo( params->pchName, params->unNameBufLen, params->pflPercent, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetNextMostAchievedAchievementInfo( params->iIteratorPrevious, params->pchName, params->unNameBufLen, params->pflPercent, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAchievementAchievedPercent( params->pchName, params->pflPercent );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RequestGlobalStats( params->nHistoryDays );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetGlobalStat( params->pchStatName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetGlobalStat( params->pchStatName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetGlobalStatHistory( params->pchStatName, params->pData, params->cubData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetGlobalStatHistory( params->pchStatName, params->pData, params->cubData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAchievementProgressLimits( params->pchName, params->pnMinProgress, params->pnMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAchievementProgressLimits( params->pchName, params->pfMinProgress, params->pfMaxProgress );
}

