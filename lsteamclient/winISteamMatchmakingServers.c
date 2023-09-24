/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamMatchmakingServers_SteamMatchMakingServers001.h"

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

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList(struct w_steam_iface *_this, AppId_t iApp, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList(_this->u_iface, iApp, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

gameserveritem_t * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails(struct w_steam_iface *_this, EMatchMakingType eType, int iServer)
{
    gameserveritem_t * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails(_this->u_iface, eType, iServer);
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery(struct w_steam_iface *_this, EMatchMakingType eType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery(_this->u_iface, eType);
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery(struct w_steam_iface *_this, EMatchMakingType eType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery(_this->u_iface, eType);
}

bool __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing(struct w_steam_iface *_this, EMatchMakingType eType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing(_this->u_iface, eType);
    return _ret;
}

int __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount(struct w_steam_iface *_this, EMatchMakingType eType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount(_this->u_iface, eType);
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer(struct w_steam_iface *_this, EMatchMakingType eType, int iServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer(_this->u_iface, eType, iServer);
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_PingServer(struct w_steam_iface *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPingResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer(_this->u_iface, unIP, usPort, create_LinuxISteamMatchmakingPingResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
    return _ret;
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails(struct w_steam_iface *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPlayersResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails(_this->u_iface, unIP, usPort, create_LinuxISteamMatchmakingPlayersResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
    return _ret;
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules(struct w_steam_iface *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingRulesResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules(_this->u_iface, unIP, usPort, create_LinuxISteamMatchmakingRulesResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery(struct w_steam_iface *_this, HServerQuery hServerQuery)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery(_this->u_iface, hServerQuery);
}

extern vtable_ptr winISteamMatchmakingServers_SteamMatchMakingServers001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmakingServers_SteamMatchMakingServers001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMakingServers001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmakingServers_SteamMatchMakingServers001_vtable, 16, "SteamMatchMakingServers001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmakingServers_SteamMatchMakingServers002.h"

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

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(struct w_steam_iface *_this, AppId_t iApp, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(_this->u_iface, iApp, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(struct w_steam_iface *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(_this->u_iface, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest(struct w_steam_iface *_this, HServerListRequest hServerListRequest)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest(_this->u_iface, hServerListRequest);
}

gameserveritem_t * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(struct w_steam_iface *_this, HServerListRequest hRequest, int iServer)
{
    gameserveritem_t * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(_this->u_iface, hRequest, iServer);
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(struct w_steam_iface *_this, HServerListRequest hRequest)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(_this->u_iface, hRequest);
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery(struct w_steam_iface *_this, HServerListRequest hRequest)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery(_this->u_iface, hRequest);
}

bool __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing(struct w_steam_iface *_this, HServerListRequest hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing(_this->u_iface, hRequest);
    return _ret;
}

int __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount(struct w_steam_iface *_this, HServerListRequest hRequest)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount(_this->u_iface, hRequest);
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer(struct w_steam_iface *_this, HServerListRequest hRequest, int iServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer(_this->u_iface, hRequest, iServer);
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_PingServer(struct w_steam_iface *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPingResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer(_this->u_iface, unIP, usPort, create_LinuxISteamMatchmakingPingResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails(struct w_steam_iface *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPlayersResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails(_this->u_iface, unIP, usPort, create_LinuxISteamMatchmakingPlayersResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules(struct w_steam_iface *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingRulesResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules(_this->u_iface, unIP, usPort, create_LinuxISteamMatchmakingRulesResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery(struct w_steam_iface *_this, HServerQuery hServerQuery)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery(_this->u_iface, hServerQuery);
}

extern vtable_ptr winISteamMatchmakingServers_SteamMatchMakingServers002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmakingServers_SteamMatchMakingServers002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMakingServers002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmakingServers_SteamMatchMakingServers002_vtable, 17, "SteamMatchMakingServers002");
    r->u_iface = u_iface;
    return r;
}

