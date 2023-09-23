/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamMatchmakingServers_SteamMatchMakingServers001.h"

typedef struct __winISteamMatchmakingServers_SteamMatchMakingServers001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmakingServers_SteamMatchMakingServers001;

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

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, AppId_t iApp, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList(_this->linux_side, iApp, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
}

gameserveritem_t * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, EMatchMakingType eType, int iServer)
{
    gameserveritem_t * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails(_this->linux_side, eType, iServer);
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, EMatchMakingType eType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery(_this->linux_side, eType);
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, EMatchMakingType eType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery(_this->linux_side, eType);
}

bool __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, EMatchMakingType eType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing(_this->linux_side, eType);
    return _ret;
}

int __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, EMatchMakingType eType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount(_this->linux_side, eType);
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, EMatchMakingType eType, int iServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer(_this->linux_side, eType, iServer);
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_PingServer(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPingResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer(_this->linux_side, unIP, usPort, create_LinuxISteamMatchmakingPingResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
    return _ret;
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPlayersResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails(_this->linux_side, unIP, usPort, create_LinuxISteamMatchmakingPlayersResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
    return _ret;
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingRulesResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules(_this->linux_side, unIP, usPort, create_LinuxISteamMatchmakingRulesResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers001"));
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery(winISteamMatchmakingServers_SteamMatchMakingServers001 *_this, HServerQuery hServerQuery)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery(_this->linux_side, hServerQuery);
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

winISteamMatchmakingServers_SteamMatchMakingServers001 *create_winISteamMatchmakingServers_SteamMatchMakingServers001(void *linux_side)
{
    winISteamMatchmakingServers_SteamMatchMakingServers001 *r = alloc_mem_for_iface(sizeof(winISteamMatchmakingServers_SteamMatchMakingServers001), "SteamMatchMakingServers001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmakingServers_SteamMatchMakingServers001_vtable, 16, "SteamMatchMakingServers001");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmakingServers_SteamMatchMakingServers002.h"

typedef struct __winISteamMatchmakingServers_SteamMatchMakingServers002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmakingServers_SteamMatchMakingServers002;

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

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, AppId_t iApp, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(_this->linux_side, iApp, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerListRequest __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(_this->linux_side, iApp, ppchFilters, nFilters, create_LinuxISteamMatchmakingServerListResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, HServerListRequest hServerListRequest)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest(_this->linux_side, hServerListRequest);
}

gameserveritem_t * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, HServerListRequest hRequest, int iServer)
{
    gameserveritem_t * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(_this->linux_side, hRequest, iServer);
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, HServerListRequest hRequest)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(_this->linux_side, hRequest);
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, HServerListRequest hRequest)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery(_this->linux_side, hRequest);
}

bool __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, HServerListRequest hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing(_this->linux_side, hRequest);
    return _ret;
}

int __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, HServerListRequest hRequest)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount(_this->linux_side, hRequest);
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, HServerListRequest hRequest, int iServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer(_this->linux_side, hRequest, iServer);
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_PingServer(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPingResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer(_this->linux_side, unIP, usPort, create_LinuxISteamMatchmakingPingResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPlayersResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails(_this->linux_side, unIP, usPort, create_LinuxISteamMatchmakingPlayersResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

HServerQuery __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingRulesResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules(_this->linux_side, unIP, usPort, create_LinuxISteamMatchmakingRulesResponse(pRequestServersResponse, "winISteamMatchmakingServers_SteamMatchMakingServers002"));
    return _ret;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery(winISteamMatchmakingServers_SteamMatchMakingServers002 *_this, HServerQuery hServerQuery)
{
    TRACE("%p\n", _this);
    cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery(_this->linux_side, hServerQuery);
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

winISteamMatchmakingServers_SteamMatchMakingServers002 *create_winISteamMatchmakingServers_SteamMatchMakingServers002(void *linux_side)
{
    winISteamMatchmakingServers_SteamMatchMakingServers002 *r = alloc_mem_for_iface(sizeof(winISteamMatchmakingServers_SteamMatchMakingServers002), "SteamMatchMakingServers002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmakingServers_SteamMatchMakingServers002_vtable, 17, "SteamMatchMakingServers002");
    r->linux_side = linux_side;
    return r;
}

