/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004.h"

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

