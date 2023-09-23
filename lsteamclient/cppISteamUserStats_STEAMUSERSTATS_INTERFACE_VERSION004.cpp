#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004.h"

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004
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
#endif /* __cplusplus */
};

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

#ifdef __cplusplus
}
#endif
