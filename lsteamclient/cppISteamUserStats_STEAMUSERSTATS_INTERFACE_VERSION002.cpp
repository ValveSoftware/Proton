#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002.h"
void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumStats( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStatName( (CGameID)params->nGameID, (uint32)params->iStat );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStatType( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumAchievements( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementName( (CGameID)params->nGameID, (uint32)params->iAchievement );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestCurrentStats( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (CGameID)params->nGameID, (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (CGameID)params->nGameID, (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (CGameID)params->nGameID, (const char *)params->pchName, (int32)params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (CGameID)params->nGameID, (const char *)params->pchName, (float)params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UpdateAvgRateStat( (CGameID)params->nGameID, (const char *)params->pchName, (float)params->flCountThisSession, (double)params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievement( (CGameID)params->nGameID, (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetAchievement( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ClearAchievement( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->StoreStats( (CGameID)params->nGameID );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementIcon( (CGameID)params->nGameID, (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementDisplayAttribute( (CGameID)params->nGameID, (const char *)params->pchName, (const char *)params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->IndicateAchievementProgress( (CGameID)params->nGameID, (const char *)params->pchName, (uint32)params->nCurProgress, (uint32)params->nMaxProgress );
}

#ifdef __cplusplus
}
#endif
