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

struct cppISteamMatchmakingServers_SteamMatchMakingServers001
{
#ifdef __cplusplus
    virtual void RequestInternetServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void RequestLANServerList( uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void RequestFriendsServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void RequestFavoritesServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void RequestHistoryServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual void RequestSpectatorServerList( uint32_t, MatchMakingKeyValuePair_t **, uint32_t, void /*ISteamMatchmakingServerListResponse*/ * ) = 0;
    virtual gameserveritem_t * GetServerDetails( uint32_t, int32_t ) = 0;
    virtual void CancelQuery( uint32_t ) = 0;
    virtual void RefreshQuery( uint32_t ) = 0;
    virtual bool IsRefreshing( uint32_t ) = 0;
    virtual int32_t GetServerCount( uint32_t ) = 0;
    virtual void RefreshServer( uint32_t, int32_t ) = 0;
    virtual int32_t PingServer( uint32_t, uint16_t, void /*ISteamMatchmakingPingResponse*/ * ) = 0;
    virtual int32_t PlayerDetails( uint32_t, uint16_t, void /*ISteamMatchmakingPlayersResponse*/ * ) = 0;
    virtual int32_t ServerRules( uint32_t, uint16_t, void /*ISteamMatchmakingRulesResponse*/ * ) = 0;
    virtual void CancelServerQuery( int32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingServerListResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    iface->RequestInternetServerList( params->iApp, params->ppchFilters, params->nFilters, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingServerListResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    iface->RequestLANServerList( params->iApp, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingServerListResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    iface->RequestFriendsServerList( params->iApp, params->ppchFilters, params->nFilters, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingServerListResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    iface->RequestFavoritesServerList( params->iApp, params->ppchFilters, params->nFilters, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingServerListResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    iface->RequestHistoryServerList( params->iApp, params->ppchFilters, params->nFilters, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingServerListResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    iface->RequestSpectatorServerList( params->iApp, params->ppchFilters, params->nFilters, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    params->_ret = iface->GetServerDetails( params->eType, params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->CancelQuery( params->eType );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->RefreshQuery( params->eType );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    params->_ret = iface->IsRefreshing( params->eType );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    params->_ret = iface->GetServerCount( params->eType );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->RefreshServer( params->eType, params->iServer );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingPingResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    params->_ret = iface->PingServer( params->unIP, params->usPort, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingPlayersResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    void /*ISteamMatchmakingRulesResponse*/ *lin_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse(params->pRequestServersResponse, "ISteamMatchmakingServers_SteamMatchMakingServers001");
    params->_ret = iface->ServerRules( params->unIP, params->usPort, lin_pRequestServersResponse );
}

void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params *params )
{
    struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct cppISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    iface->CancelServerQuery( params->hServerQuery );
}

#ifdef __cplusplus
}
#endif
