/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->ReleaseRequest( params->hServerListRequest );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->GetServerDetails( params->hRequest, params->iServer );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelQuery( params->hRequest );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->RefreshQuery( params->hRequest );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->IsRefreshing( params->hRequest );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->GetServerCount( params->hRequest );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->RefreshServer( params->hRequest, params->iServer );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
    return 0;
}

