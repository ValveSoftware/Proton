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

struct cppISteamMatchmakingServers_SteamMatchMakingServers002
{
#ifdef __cplusplus
    virtual void * RequestInternetServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void * RequestLANServerList( uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void * RequestFriendsServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void * RequestFavoritesServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void * RequestHistoryServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void * RequestSpectatorServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void ReleaseRequest( void * ) = 0;
    virtual gameserveritem_t * GetServerDetails( void *, int32_t ) = 0;
    virtual void CancelQuery( void * ) = 0;
    virtual void RefreshQuery( void * ) = 0;
    virtual bool IsRefreshing( void * ) = 0;
    virtual int32_t GetServerCount( void * ) = 0;
    virtual void RefreshServer( void *, int32_t ) = 0;
    virtual int32_t PingServer( uint32_t, uint16_t, void /*ISteamMatchmakingPingResponse*/ * ) = 0;
    virtual int32_t PlayerDetails( uint32_t, uint16_t, void /*ISteamMatchmakingPlayersResponse*/ * ) = 0;
    virtual int32_t ServerRules( uint32_t, uint16_t, void /*ISteamMatchmakingRulesResponse*/ * ) = 0;
    virtual void CancelServerQuery( int32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->RequestInternetServerList( params->iApp, params->ppchFilters, params->nFilters, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->RequestLANServerList( params->iApp, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->RequestFriendsServerList( params->iApp, params->ppchFilters, params->nFilters, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->RequestFavoritesServerList( params->iApp, params->ppchFilters, params->nFilters, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->RequestHistoryServerList( params->iApp, params->ppchFilters, params->nFilters, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->RequestSpectatorServerList( params->iApp, params->ppchFilters, params->nFilters, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->ReleaseRequest( params->hServerListRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->GetServerDetails( params->hRequest, params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelQuery( params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->RefreshQuery( params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->IsRefreshing( params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->GetServerCount( params->hRequest );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->RefreshServer( params->hRequest, params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->PingServer( params->unIP, params->usPort, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    params->_ret = iface->ServerRules( params->unIP, params->usPort, params->pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
}

#ifdef __cplusplus
}
#endif
