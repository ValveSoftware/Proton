#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003.h"

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003
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
#endif /* __cplusplus */
};

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress_params *params )
{
    struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

#ifdef __cplusplus
}
#endif
