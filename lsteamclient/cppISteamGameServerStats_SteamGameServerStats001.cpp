#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamgameserverstats.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamGameServerStats_SteamGameServerStats001.h"

struct cppISteamGameServerStats_SteamGameServerStats001
{
#ifdef __cplusplus
    virtual uint64_t RequestUserStats( CSteamID ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, int32_t * ) = 0;
    virtual bool GetUserStat( CSteamID, const char *, float * ) = 0;
    virtual bool GetUserAchievement( CSteamID, const char *, bool * ) = 0;
    virtual bool SetUserStat( CSteamID, const char *, int32_t ) = 0;
    virtual bool SetUserStat( CSteamID, const char *, float ) = 0;
    virtual bool UpdateUserAvgRateStat( CSteamID, const char *, float, double ) = 0;
    virtual bool SetUserAchievement( CSteamID, const char * ) = 0;
    virtual bool ClearUserAchievement( CSteamID, const char * ) = 0;
    virtual uint64_t StoreUserStats( CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats( struct cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserStat( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserStat( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserStat( params->steamIDUser, params->pchName, params->nData );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserStat( params->steamIDUser, params->pchName, params->fData );
}

void cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat( struct cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->UpdateUserAvgRateStat( params->steamIDUser, params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserAchievement( params->steamIDUser, params->pchName );
}

void cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->ClearUserAchievement( params->steamIDUser, params->pchName );
}

void cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats( struct cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params *params )
{
    struct cppISteamGameServerStats_SteamGameServerStats001 *iface = (struct cppISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->StoreUserStats( params->steamIDUser );
}

#ifdef __cplusplus
}
#endif
