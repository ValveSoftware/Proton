#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_104/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_104
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005.h"

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005
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
    virtual bool StoreStats(  ) = 0;
    virtual int32_t GetAchievementIcon( const char * ) = 0;
    virtual const char * GetAchievementDisplayAttribute( const char *, const char * ) = 0;
    virtual bool IndicateAchievementProgress( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool ResetAllStats( bool ) = 0;
    virtual uint64_t FindOrCreateLeaderboard( const char *, uint32_t, uint32_t ) = 0;
    virtual uint64_t FindLeaderboard( const char * ) = 0;
    virtual const char * GetLeaderboardName( uint64_t ) = 0;
    virtual int32_t GetLeaderboardEntryCount( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardSortMethod( uint64_t ) = 0;
    virtual uint32_t GetLeaderboardDisplayType( uint64_t ) = 0;
    virtual uint64_t DownloadLeaderboardEntries( uint64_t, uint32_t, int32_t, int32_t ) = 0;
    virtual bool GetDownloadedLeaderboardEntry( uint64_t, int32_t, LeaderboardEntry_t *, int32_t *, int32_t ) = 0;
    virtual uint64_t UploadLeaderboardScore( uint64_t, int32_t, int32_t *, int32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->ResetAllStats( params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FindOrCreateLeaderboard( params->pchLeaderboardName, params->eLeaderboardSortMethod, params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FindLeaderboard( params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetLeaderboardName( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetLeaderboardEntryCount( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetLeaderboardSortMethod( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetLeaderboardDisplayType( params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->DownloadLeaderboardEntries( params->hSteamLeaderboard, params->eLeaderboardDataRequest, params->nRangeStart, params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetDownloadedLeaderboardEntry( params->hSteamLeaderboardEntries, params->index, params->pLeaderboardEntry, params->pDetails, params->cDetailsMax );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UploadLeaderboardScore( params->hSteamLeaderboard, params->nScore, params->pScoreDetails, params->cScoreDetailsCount );
}

#ifdef __cplusplus
}
#endif
