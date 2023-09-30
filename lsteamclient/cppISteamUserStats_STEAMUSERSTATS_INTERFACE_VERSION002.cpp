/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetNumStats( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetStatName( params->nGameID, params->iStat );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetStatType( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetNumAchievements( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAchievementName( params->nGameID, params->iAchievement );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetStat( params->nGameID, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetStat( params->nGameID, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetStat( params->nGameID, params->pchName, params->nData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetStat( params->nGameID, params->pchName, params->fData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->nGameID, params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->nGameID, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->StoreStats( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->nGameID, params->pchName, params->pchKey );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->IndicateAchievementProgress( params->nGameID, params->pchName, params->nCurProgress, params->nMaxProgress );
    return 0;
}

