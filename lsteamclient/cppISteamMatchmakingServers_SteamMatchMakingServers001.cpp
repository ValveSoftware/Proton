#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_105/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_105
#include "struct_converters.h"
#include "cppISteamMatchmakingServers_SteamMatchMakingServers001.h"
void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RequestInternetServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RequestLANServerList( (AppId_t)params->iApp, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RequestFriendsServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RequestFavoritesServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RequestHistoryServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RequestSpectatorServerList( (AppId_t)params->iApp, (MatchMakingKeyValuePair_t **)params->ppchFilters, (uint32)params->nFilters, (ISteamMatchmakingServerListResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->GetServerDetails( (EMatchMakingType)params->eType, (int)params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->CancelQuery( (EMatchMakingType)params->eType );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RefreshQuery( (EMatchMakingType)params->eType );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->IsRefreshing( (EMatchMakingType)params->eType );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->GetServerCount( (EMatchMakingType)params->eType );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->RefreshServer( (EMatchMakingType)params->eType, (int)params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->PingServer( (uint32)params->unIP, (uint16)params->usPort, (ISteamMatchmakingPingResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->PlayerDetails( (uint32)params->unIP, (uint16)params->usPort, (ISteamMatchmakingPlayersResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *params )
{
    params->_ret = ((ISteamMatchmakingServers*)params->linux_side)->ServerRules( (uint32)params->unIP, (uint16)params->usPort, (ISteamMatchmakingRulesResponse *)params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params *params )
{
    ((ISteamMatchmakingServers*)params->linux_side)->CancelServerQuery( (HServerQuery)params->hServerQuery );
}

#ifdef __cplusplus
}
#endif
