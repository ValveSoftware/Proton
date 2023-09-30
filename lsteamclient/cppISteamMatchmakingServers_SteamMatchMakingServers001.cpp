/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    iface->RequestInternetServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    iface->RequestFriendsServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    iface->RequestFavoritesServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    iface->RequestHistoryServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    iface->RequestSpectatorServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

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

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001" );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
    return 0;
}

