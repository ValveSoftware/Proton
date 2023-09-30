/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestInternetServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestFriendsServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestFavoritesServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestHistoryServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestSpectatorServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

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

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
    return 0;
}

