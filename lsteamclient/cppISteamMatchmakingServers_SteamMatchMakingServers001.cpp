/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    params->_ret = iface->GetServerDetails( params->eType, params->iServer );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->CancelQuery( params->eType );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->RefreshQuery( params->eType );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    params->_ret = iface->IsRefreshing( params->eType );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    params->_ret = iface->GetServerCount( params->eType );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->RefreshServer( params->eType, params->iServer );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
    return 0;
}

