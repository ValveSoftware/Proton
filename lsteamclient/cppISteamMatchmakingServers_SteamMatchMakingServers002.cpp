#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamMatchmakingServers_SteamMatchMakingServers002.h"
void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->RequestInternetServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->RequestLANServerList( (AppId_t)params->iApp, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->RequestFriendsServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->RequestFavoritesServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->RequestHistoryServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->RequestSpectatorServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->ReleaseRequest( (HServerListRequest)params->hServerListRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->GetServerDetails( (HServerListRequest)params->hRequest, (int)params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->CancelQuery( (HServerListRequest)params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RefreshQuery( (HServerListRequest)params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->IsRefreshing( (HServerListRequest)params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->GetServerCount( (HServerListRequest)params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RefreshServer( (HServerListRequest)params->hRequest, (int)params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->PingServer( (uint32)params->unIP, (uint16)params->usPort, (ISteamMatchmakingPingResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->PlayerDetails( (uint32)params->unIP, (uint16)params->usPort, (ISteamMatchmakingPlayersResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->ServerRules( (uint32)params->unIP, (uint16)params->usPort, (ISteamMatchmakingRulesResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->CancelServerQuery( (HServerQuery)params->hServerQuery );
}

#ifdef __cplusplus
}
#endif
