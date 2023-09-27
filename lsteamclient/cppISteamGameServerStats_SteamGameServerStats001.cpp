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
void cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats( struct cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->RequestUserStats( (CSteamID)params->steamIDUser );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserStat( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (float *)params->pData );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->GetUserAchievement( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserStat( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->SetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (int32)params->nData );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->SetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (float)params->fData );
}

void cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat( struct cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->UpdateUserAvgRateStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (float)params->flCountThisSession, (double)params->dSessionLength );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->SetUserAchievement( (CSteamID)params->steamIDUser, (const char *)params->pchName );
}

void cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->ClearUserAchievement( (CSteamID)params->steamIDUser, (const char *)params->pchName );
}

void cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats( struct cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params *params )
{
    params->_ret = ((ISteamGameServerStats*)params->linux_side)->StoreUserStats( (CSteamID)params->steamIDUser );
}

#ifdef __cplusplus
}
#endif
