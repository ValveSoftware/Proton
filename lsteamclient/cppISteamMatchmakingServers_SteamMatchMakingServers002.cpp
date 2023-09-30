/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMatchmakingServers_SteamMatchMakingServers002.h"

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestInternetServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestFriendsServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestFavoritesServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestHistoryServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->RequestSpectatorServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->ReleaseRequest( params->hServerListRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->GetServerDetails( params->hRequest, params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelQuery( params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->RefreshQuery( params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->IsRefreshing( params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->GetServerCount( params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->RefreshServer( params->hRequest, params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers002" );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *params )
{
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
}

