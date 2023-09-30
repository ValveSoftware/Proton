/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003.h"

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetStat( params->pchName, params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetStat( params->pchName, params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->pchName, params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->pchName, params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress_params *params )
{
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->pchName, params->nCurProgress, params->nMaxProgress );
}

