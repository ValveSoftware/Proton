/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_RequestUserStats( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_GetUserStat( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_GetUserStat_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_GetUserStat_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_GetUserStat_2( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_GetUserAchievement( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_SetUserStat( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_SetUserStat_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_SetUserStat_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserStat( params->steamIDUser, params->pchName, params->nData );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_SetUserStat_2( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserStat( params->steamIDUser, params->pchName, params->fData );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->UpdateUserAvgRateStat( params->steamIDUser, params->pchName, params->flCountThisSession, params->dSessionLength );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_SetUserAchievement( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserAchievement( params->steamIDUser, params->pchName );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->ClearUserAchievement( params->steamIDUser, params->pchName );
    return 0;
}

NTSTATUS ISteamGameServerStats_SteamGameServerStats001_StoreUserStats( void *args )
{
    struct ISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params *params = (struct ISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params *)args;
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->StoreUserStats( params->steamIDUser );
    return 0;
}

