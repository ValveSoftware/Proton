/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetNumStats( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetStatName( params->nGameID, params->iStat );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetStatType( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetNumAchievements( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAchievementName( params->nGameID, params->iAchievement );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetNumGroupAchievements( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetGroupAchievementName( params->nGameID, params->iAchievement );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->RequestCurrentStats( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetStat( params->nGameID, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetStat( params->nGameID, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetStat( params->nGameID, params->pchName, params->nData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetStat( params->nGameID, params->pchName, params->fData );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->UpdateAvgRateStat( params->nGameID, params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAchievement( params->nGameID, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetGroupAchievement( params->nGameID, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetAchievement( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetGroupAchievement( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->StoreStats( params->nGameID );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ClearAchievement( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ClearGroupAchievement( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAchievementIcon( params->nGameID, params->pchName );
    return 0;
}

NTSTATUS ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute( void *args )
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute_params *params = (struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute_params *)args;
    struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *iface = (struct u_ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAchievementDisplayAttribute( params->nGameID, params->pchName, params->pchKey );
    return 0;
}

