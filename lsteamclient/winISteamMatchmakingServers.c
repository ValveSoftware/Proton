/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_PingServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery, 8)

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_099u *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList, &params );
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList(struct w_steam_iface *_this, uint32_t iApp, w_ISteamMatchmakingServerListResponse_099u *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList, &params );
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_099u *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList, &params );
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_099u *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList, &params );
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_099u *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList, &params );
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_099u *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList, &params );
}

gameserveritem_t_105 * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails(struct w_steam_iface *_this, uint32_t eType, int32_t iServer)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
        .iServer = iServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails, &params );
    return params._ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery(struct w_steam_iface *_this, uint32_t eType)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery, &params );
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery(struct w_steam_iface *_this, uint32_t eType)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery, &params );
}

int8_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing(struct w_steam_iface *_this, uint32_t eType)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount(struct w_steam_iface *_this, uint32_t eType)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount, &params );
    return params._ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer(struct w_steam_iface *_this, uint32_t eType, int32_t iServer)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
        .iServer = iServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer, &params );
}

int32_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_PingServer(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort, w_ISteamMatchmakingPingResponse *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort, w_ISteamMatchmakingPlayersResponse *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort, w_ISteamMatchmakingRulesResponse *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules, &params );
    return params._ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery(struct w_steam_iface *_this, int32_t hServerQuery)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params params =
    {
        .linux_side = _this->u_iface,
        .hServerQuery = hServerQuery,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery, &params );
}

extern vtable_ptr winISteamMatchmakingServers_SteamMatchMakingServers001_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmakingServers_SteamMatchMakingServers001, 0, ".?AVISteamMatchmakingServers@@")

__ASM_BLOCK_BEGIN(winISteamMatchmakingServers_SteamMatchMakingServers001_vtables)
    __ASM_VTABLE(winISteamMatchmakingServers_SteamMatchMakingServers001,
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_PingServer)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmakingServers_SteamMatchMakingServers001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMakingServers001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmakingServers_SteamMatchMakingServers001_vtable, 16, "SteamMatchMakingServers001");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_PingServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery, 8)

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList, &params );
    return params._ret;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(struct w_steam_iface *_this, uint32_t iApp, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList, &params );
    return params._ret;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList, &params );
    return params._ret;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList, &params );
    return params._ret;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList, &params );
    return params._ret;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(struct w_steam_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params params =
    {
        .linux_side = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList, &params );
    return params._ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest(struct w_steam_iface *_this, void *hServerListRequest)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hServerListRequest = hServerListRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest, &params );
}

gameserveritem_t_105 * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(struct w_steam_iface *_this, void *hRequest, int32_t iServer)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .iServer = iServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails, &params );
    return params._ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(struct w_steam_iface *_this, void *hRequest)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery, &params );
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery(struct w_steam_iface *_this, void *hRequest)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery, &params );
}

int8_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing(struct w_steam_iface *_this, void *hRequest)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount(struct w_steam_iface *_this, void *hRequest)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount, &params );
    return params._ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer(struct w_steam_iface *_this, void *hRequest, int32_t iServer)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .iServer = iServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer, &params );
}

int32_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_PingServer(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort, w_ISteamMatchmakingPingResponse *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort, w_ISteamMatchmakingPlayersResponse *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort, w_ISteamMatchmakingRulesResponse *pRequestServersResponse)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
        .pRequestServersResponse = pRequestServersResponse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules, &params );
    return params._ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery(struct w_steam_iface *_this, int32_t hServerQuery)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params params =
    {
        .linux_side = _this->u_iface,
        .hServerQuery = hServerQuery,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery, &params );
}

extern vtable_ptr winISteamMatchmakingServers_SteamMatchMakingServers002_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmakingServers_SteamMatchMakingServers002, 0, ".?AVISteamMatchmakingServers@@")

__ASM_BLOCK_BEGIN(winISteamMatchmakingServers_SteamMatchMakingServers002_vtables)
    __ASM_VTABLE(winISteamMatchmakingServers_SteamMatchMakingServers002,
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_PingServer)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules)
        VTABLE_ADD_FUNC(winISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmakingServers_SteamMatchMakingServers002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMakingServers002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmakingServers_SteamMatchMakingServers002_vtable, 17, "SteamMatchMakingServers002");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamMatchmakingServers_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamMatchmakingServers_SteamMatchMakingServers001_rtti( base );
    init_winISteamMatchmakingServers_SteamMatchMakingServers002_rtti( base );
#endif /* __x86_64__ */
}
