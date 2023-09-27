#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099x
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001.h"
void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumStats( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStatName( (CGameID)params->nGameID, (uint32)params->iStat );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStatType( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumAchievements( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementName( (CGameID)params->nGameID, (uint32)params->iAchievement );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumGroupAchievements( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGroupAchievementName( (CGameID)params->nGameID, (uint32)params->iAchievement );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestCurrentStats( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (CGameID)params->nGameID, (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (CGameID)params->nGameID, (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (CGameID)params->nGameID, (const char *)params->pchName, (int32)params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (CGameID)params->nGameID, (const char *)params->pchName, (float)params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UpdateAvgRateStat( (CGameID)params->nGameID, (const char *)params->pchName, (float)params->flCountThisSession, (double)params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievement( (CGameID)params->nGameID, (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGroupAchievement( (CGameID)params->nGameID, (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetAchievement( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetGroupAchievement( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->StoreStats( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ClearAchievement( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ClearGroupAchievement( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementIcon( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementDisplayAttribute( (CGameID)params->nGameID, (const char *)params->pchName, (const char *)params->pchKey );
}

#ifdef __cplusplus
}
#endif
