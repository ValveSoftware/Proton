/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamClient_SteamClient006.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_CreateGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_CreateLocalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetIVAC, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetUniverseName, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamBilling, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamContentServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamMasterServerUpdater, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetIPCCallCount, 4)

HSteamPipe __thiscall winISteamClient_SteamClient006_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient006_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient006_CreateGlobalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_CreateGlobalUser(_this->u_iface, phSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient006_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient006_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_CreateLocalUser(_this->u_iface, phSteamPipe);
    return _ret;
}

void __thiscall winISteamClient_SteamClient006_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient006_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient006_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient006_GetIVAC(struct w_steam_iface *_this, HSteamUser hSteamUser)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_GetIVAC(_this->u_iface, hSteamUser);
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient006_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient006_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient006_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

const char * __thiscall winISteamClient_SteamClient006_GetUniverseName(struct w_steam_iface *_this, EUniverse eUniverse)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_GetUniverseName(_this->u_iface, eUniverse);
    return _ret;
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient006_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient006_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient006_GetISteamBilling(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_GetISteamBilling(_this->u_iface, hSteamUser, hSteamPipe, pchVersion);
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient006_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient006_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamContentServer*/ * __thiscall winISteamClient_SteamClient006_GetISteamContentServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamContentServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamContentServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient006_GetISteamMasterServerUpdater(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMasterServerUpdater*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamMasterServerUpdater(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient006_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient006_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient006_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient006_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient006_GetIPCCallCount(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient006,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_CreateGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetIVAC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetUniverseName)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamBilling)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamContentServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamMasterServerUpdater)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient006_GetIPCCallCount)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient006_vtable, 21, "SteamClient006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient007.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_CreateLocalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamContentServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamMasterServerUpdater, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamRemoteStorage, 16)

HSteamPipe __thiscall winISteamClient_SteamClient007_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient007_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient007_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient007_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient007_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient007_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient007_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient007_CreateLocalUser(_this->u_iface, phSteamPipe);
    return _ret;
}

void __thiscall winISteamClient_SteamClient007_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient007_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient007_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient007_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient007_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient007_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient007_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient007_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient007_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamContentServer*/ * __thiscall winISteamClient_SteamClient007_GetISteamContentServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamContentServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamContentServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient007_GetISteamMasterServerUpdater(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMasterServerUpdater*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamMasterServerUpdater(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient007_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient007_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient007_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient007_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient007_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient007_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient007_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient007_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient007_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient007_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient007_SetWarningMessageHook(_this->u_iface, pFunction);
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient007_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient007,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamContentServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamMasterServerUpdater)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient007_GetISteamRemoteStorage)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient007_vtable, 22, "SteamClient007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient008.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamMasterServerUpdater, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_SetWarningMessageHook, 8)

HSteamPipe __thiscall winISteamClient_SteamClient008_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient008_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient008_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient008_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient008_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient008_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient008_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient008_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient008_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient008_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient008_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient008_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient008_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient008_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient008_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient008_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient008_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient008_GetISteamMasterServerUpdater(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMasterServerUpdater*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamMasterServerUpdater(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient008_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient008_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient008_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient008_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient008_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient008_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient008_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient008_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient008_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient008_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient008_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient008_SetWarningMessageHook(_this->u_iface, pFunction);
}

extern vtable_ptr winISteamClient_SteamClient008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient008,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamMasterServerUpdater)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient008_SetWarningMessageHook)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient008_vtable, 21, "SteamClient008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient009.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamMasterServerUpdater, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_SetWarningMessageHook, 8)

HSteamPipe __thiscall winISteamClient_SteamClient009_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient009_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient009_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient009_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient009_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient009_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient009_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient009_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient009_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient009_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient009_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient009_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient009_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient009_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient009_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient009_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient009_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient009_GetISteamMasterServerUpdater(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMasterServerUpdater*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamMasterServerUpdater(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient009_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient009_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient009_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient009_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient009_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient009_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient009_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient009_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient009_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient009_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient009_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient009_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient009_SetWarningMessageHook(_this->u_iface, pFunction);
}

extern vtable_ptr winISteamClient_SteamClient009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient009,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamMasterServerUpdater)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient009_SetWarningMessageHook)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient009_vtable, 22, "SteamClient009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient010.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamMasterServerUpdater, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamHTTP, 16)

HSteamPipe __thiscall winISteamClient_SteamClient010_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient010_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient010_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient010_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient010_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient010_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient010_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient010_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient010_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient010_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient010_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient010_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient010_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient010_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient010_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient010_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient010_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient010_GetISteamMasterServerUpdater(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMasterServerUpdater*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamMasterServerUpdater(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient010_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient010_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient010_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient010_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient010_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient010_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient010_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient010_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient010_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient010_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient010_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient010_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient010_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient010_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient010_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient010,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamMasterServerUpdater)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient010_GetISteamHTTP)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient010_vtable, 24, "SteamClient010");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient011.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamMasterServerUpdater, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamHTTP, 16)

HSteamPipe __thiscall winISteamClient_SteamClient011_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient011_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient011_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient011_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient011_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient011_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient011_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient011_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient011_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient011_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient011_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient011_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient011_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient011_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient011_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient011_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient011_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient011_GetISteamMasterServerUpdater(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMasterServerUpdater*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamMasterServerUpdater(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient011_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient011_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient011_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient011_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient011_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient011_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient011_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient011_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient011_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient011_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient011_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient011_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient011_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient011_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient011_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient011_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient011,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamMasterServerUpdater)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient011_GetISteamHTTP)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient011_vtable, 25, "SteamClient011");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient012.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUGC, 16)

HSteamPipe __thiscall winISteamClient_SteamClient012_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient012_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient012_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient012_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient012_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient012_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient012_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient012_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient012_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient012_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient012_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient012_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient012_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient012_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient012_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient012_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient012_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient012_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient012_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient012_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient012_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient012_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient012_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient012_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient012_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient012_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient012_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient012_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient012_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient012_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient012_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient012_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient012_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient012_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUnifiedMessages*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient012_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient012_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient012,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient012_GetISteamUGC)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient012_vtable, 27, "SteamClient012");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient013.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUGC, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamInventory, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamAppList, 16)

HSteamPipe __thiscall winISteamClient_SteamClient013_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient013_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient013_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient013_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient013_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient013_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient013_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient013_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient013_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient013_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient013_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient013_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient013_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient013_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient013_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient013_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient013_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient013_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient013_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient013_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient013_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient013_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient013_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient013_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient013_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient013_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient013_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient013_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient013_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient013_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient013_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient013_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient013_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient013_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUnifiedMessages*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient013_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient013_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient013_GetISteamInventory(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient013_GetISteamInventory(_this->u_iface, hSteamUser, hSteamPipe, pchVersion);
    return _ret;
}

void * __thiscall winISteamClient_SteamClient013_GetISteamVideo(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient013_GetISteamVideo(_this->u_iface, hSteamUser, hSteamPipe, pchVersion);
    return _ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient013_GetISteamAppList(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamAppList(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient013,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamUGC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamInventory)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamVideo)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient013_GetISteamAppList)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient013_vtable, 30, "SteamClient013");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient014.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUGC, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamAppList, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamMusic, 16)

HSteamPipe __thiscall winISteamClient_SteamClient014_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient014_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient014_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient014_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient014_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient014_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient014_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient014_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient014_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient014_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient014_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient014_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient014_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient014_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient014_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient014_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient014_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient014_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient014_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient014_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient014_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient014_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient014_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient014_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient014_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient014_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient014_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient014_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient014_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient014_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient014_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient014_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient014_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient014_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUnifiedMessages*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient014_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient014_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient014_GetISteamAppList(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamAppList(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient014_GetISteamMusic(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusic*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamMusic(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient014,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamUGC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamAppList)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient014_GetISteamMusic)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient014_vtable, 29, "SteamClient014");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient015.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUGC, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamAppList, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamMusic, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamMusicRemote, 16)

HSteamPipe __thiscall winISteamClient_SteamClient015_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient015_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient015_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient015_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient015_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient015_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient015_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient015_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient015_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient015_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient015_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient015_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient015_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient015_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient015_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient015_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient015_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient015_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient015_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient015_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient015_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient015_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient015_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient015_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient015_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient015_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient015_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient015_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient015_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient015_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient015_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient015_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient015_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient015_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUnifiedMessages*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient015_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient015_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient015_GetISteamAppList(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamAppList(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient015_GetISteamMusic(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusic*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamMusic(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient015_GetISteamMusicRemote(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusicRemote*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamMusicRemote(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient015,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamUGC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamAppList)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamMusic)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient015_GetISteamMusicRemote)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient015_vtable, 30, "SteamClient015");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient016.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUGC, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamAppList, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamMusic, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamMusicRemote, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamHTMLSurface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)

HSteamPipe __thiscall winISteamClient_SteamClient016_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient016_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient016_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient016_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient016_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient016_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient016_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient016_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient016_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient016_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient016_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient016_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient016_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient016_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient016_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient016_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient016_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient016_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient016_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient016_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient016_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient016_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient016_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient016_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient016_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient016_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient016_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient016_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient016_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient016_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUnifiedMessages*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient016_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient016_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient016_GetISteamAppList(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamAppList(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient016_GetISteamMusic(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusic*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamMusic(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient016_GetISteamMusicRemote(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusicRemote*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamMusicRemote(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient016_GetISteamHTMLSurface(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTMLSurface*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamHTMLSurface(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, SteamAPI_PostAPIResultInProcess_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess(_this->u_iface, func);
}

void __thiscall winISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, SteamAPI_PostAPIResultInProcess_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess(_this->u_iface, func);
}

void __thiscall winISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->u_iface, func);
}

extern vtable_ptr winISteamClient_SteamClient016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient016,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamUGC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamAppList)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamMusic)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamMusicRemote)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_GetISteamHTMLSurface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient016(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient016_vtable, 34, "SteamClient016");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient017.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamUGC, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamAppList, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamMusic, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamMusicRemote, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamHTMLSurface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamInventory, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamParentalSettings, 16)

HSteamPipe __thiscall winISteamClient_SteamClient017_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient017_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient017_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient017_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient017_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient017_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient017_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient017_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient017_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient017_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient017_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient017_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient017_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient017_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient017_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient017_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient017_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient017_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient017_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient017_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient017_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient017_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient017_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient017_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient017_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient017_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient017_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient017_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient017_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion);
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient017_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient017_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient017_GetISteamAppList(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamAppList(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient017_GetISteamMusic(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusic*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamMusic(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient017_GetISteamMusicRemote(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusicRemote*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamMusicRemote(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient017_GetISteamHTMLSurface(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTMLSurface*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamHTMLSurface(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void *_a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(_this->u_iface, _a);
}

void __thiscall winISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void *_a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(_this->u_iface, _a);
}

void __thiscall winISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->u_iface, func);
}

void /*ISteamInventory*/ * __thiscall winISteamClient_SteamClient017_GetISteamInventory(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInventory*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamInventory(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamVideo*/ * __thiscall winISteamClient_SteamClient017_GetISteamVideo(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamVideo*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamVideo(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamParentalSettings*/ * __thiscall winISteamClient_SteamClient017_GetISteamParentalSettings(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParentalSettings*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamParentalSettings(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient017,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamUGC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamAppList)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamMusic)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamMusicRemote)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamHTMLSurface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamInventory)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamVideo)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient017_GetISteamParentalSettings)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient017(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient017_vtable, 37, "SteamClient017");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient018.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamGameSearch, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamUGC, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamAppList, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamMusic, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamMusicRemote, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamHTMLSurface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamInventory, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamParentalSettings, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamInput, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamParties, 16)

HSteamPipe __thiscall winISteamClient_SteamClient018_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient018_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient018_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient018_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient018_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient018_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient018_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient018_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient018_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient018_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient018_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient018_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient018_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient018_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient018_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient018_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient018_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient018_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient018_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient018_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient018_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient018_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient018_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameSearch*/ * __thiscall winISteamClient_SteamClient018_GetISteamGameSearch(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameSearch*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamGameSearch(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient018_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient018_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient018_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient018_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient018_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient018_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion);
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient018_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient018_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient018_GetISteamAppList(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamAppList(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient018_GetISteamMusic(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusic*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamMusic(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient018_GetISteamMusicRemote(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusicRemote*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamMusicRemote(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient018_GetISteamHTMLSurface(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTMLSurface*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamHTMLSurface(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void *_a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(_this->u_iface, _a);
}

void __thiscall winISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void *_a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(_this->u_iface, _a);
}

void __thiscall winISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->u_iface, func);
}

void /*ISteamInventory*/ * __thiscall winISteamClient_SteamClient018_GetISteamInventory(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInventory*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamInventory(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamVideo*/ * __thiscall winISteamClient_SteamClient018_GetISteamVideo(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamVideo*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamVideo(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamParentalSettings*/ * __thiscall winISteamClient_SteamClient018_GetISteamParentalSettings(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParentalSettings*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamParentalSettings(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamInput*/ * __thiscall winISteamClient_SteamClient018_GetISteamInput(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInput*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamInput(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamParties*/ * __thiscall winISteamClient_SteamClient018_GetISteamParties(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParties*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamParties(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient018_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient018,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamGameSearch)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamUGC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamAppList)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamMusic)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamMusicRemote)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamHTMLSurface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamInventory)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamVideo)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamParentalSettings)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamInput)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient018_GetISteamParties)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient018(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient018");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient018_vtable, 40, "SteamClient018");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient019.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamGameSearch, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamUGC, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamAppList, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamMusic, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamMusicRemote, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamHTMLSurface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamInventory, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamParentalSettings, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamInput, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamParties, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamRemotePlay, 16)

HSteamPipe __thiscall winISteamClient_SteamClient019_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient019_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient019_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient019_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient019_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient019_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient019_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient019_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient019_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient019_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient019_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient019_SetLocalIPBinding(struct w_steam_iface *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient019_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient019_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient019_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient019_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient019_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient019_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient019_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient019_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient019_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient019_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient019_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameSearch*/ * __thiscall winISteamClient_SteamClient019_GetISteamGameSearch(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameSearch*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamGameSearch(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient019_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient019_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient019_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient019_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient019_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient019_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion);
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient019_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient019_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient019_GetISteamAppList(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamAppList(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient019_GetISteamMusic(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusic*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamMusic(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient019_GetISteamMusicRemote(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusicRemote*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamMusicRemote(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient019_GetISteamHTMLSurface(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTMLSurface*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamHTMLSurface(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void *_a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(_this->u_iface, _a);
}

void __thiscall winISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void *_a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(_this->u_iface, _a);
}

void __thiscall winISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->u_iface, func);
}

void /*ISteamInventory*/ * __thiscall winISteamClient_SteamClient019_GetISteamInventory(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInventory*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamInventory(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamVideo*/ * __thiscall winISteamClient_SteamClient019_GetISteamVideo(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamVideo*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamVideo(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamParentalSettings*/ * __thiscall winISteamClient_SteamClient019_GetISteamParentalSettings(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParentalSettings*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamParentalSettings(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamInput*/ * __thiscall winISteamClient_SteamClient019_GetISteamInput(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInput*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamInput(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamParties*/ * __thiscall winISteamClient_SteamClient019_GetISteamParties(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParties*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamParties(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemotePlay*/ * __thiscall winISteamClient_SteamClient019_GetISteamRemotePlay(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemotePlay*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamRemotePlay(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

extern vtable_ptr winISteamClient_SteamClient019_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient019,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamGameSearch)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamUGC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamAppList)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamMusic)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamMusicRemote)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamHTMLSurface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamInventory)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamVideo)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamParentalSettings)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamInput)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamParties)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient019_GetISteamRemotePlay)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient019(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient019");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient019_vtable, 41, "SteamClient019");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamClient_SteamClient020.h"

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_CreateSteamPipe, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_BReleaseSteamPipe, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_ConnectToGlobalUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_CreateLocalUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_ReleaseUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_SetLocalIPBinding, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamFriends, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamUtils, 12)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamMatchmaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamMatchmakingServers, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamGenericInterface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamUserStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamGameServerStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamApps, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamNetworking, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamRemoteStorage, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamScreenshots, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamGameSearch, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_BShutdownIfAllPipesClosed, 4)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamHTTP, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamController, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamUGC, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamAppList, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamMusic, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamMusicRemote, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamHTMLSurface, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamInventory, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamParentalSettings, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamInput, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamParties, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamRemotePlay, 16)
DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_DestroyAllInterfaces, 4)

HSteamPipe __thiscall winISteamClient_SteamClient020_CreateSteamPipe(struct w_steam_iface *_this)
{
    HSteamPipe _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient020_CreateSteamPipe(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamClient_SteamClient020_BReleaseSteamPipe(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient020_BReleaseSteamPipe(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient020_ConnectToGlobalUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient020_ConnectToGlobalUser(_this->u_iface, hSteamPipe);
    return _ret;
}

HSteamUser __thiscall winISteamClient_SteamClient020_CreateLocalUser(struct w_steam_iface *_this, HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
    HSteamUser _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient020_CreateLocalUser(_this->u_iface, phSteamPipe, eAccountType);
    return _ret;
}

void __thiscall winISteamClient_SteamClient020_ReleaseUser(struct w_steam_iface *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_ReleaseUser(_this->u_iface, hSteamPipe, hUser);
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient020_GetISteamUser(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUser*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamUser(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient020_GetISteamGameServer(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServer*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamGameServer(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient020_SetLocalIPBinding(struct w_steam_iface *_this, const SteamIPAddress_t *unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_SetLocalIPBinding(_this->u_iface, unIP, usPort);
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient020_GetISteamFriends(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamFriends*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamFriends(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient020_GetISteamUtils(struct w_steam_iface *_this, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUtils*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamUtils(_this->u_iface, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient020_GetISteamMatchmaking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmaking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamMatchmaking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient020_GetISteamMatchmakingServers(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMatchmakingServers*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamMatchmakingServers(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient020_GetISteamGenericInterface(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamGenericInterface(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient020_GetISteamUserStats(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUserStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamUserStats(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient020_GetISteamGameServerStats(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameServerStats*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamGameServerStats(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient020_GetISteamApps(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamApps*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamApps(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient020_GetISteamNetworking(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamNetworking*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamNetworking(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient020_GetISteamRemoteStorage(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemoteStorage*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamRemoteStorage(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient020_GetISteamScreenshots(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamScreenshots*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamScreenshots(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamGameSearch*/ * __thiscall winISteamClient_SteamClient020_GetISteamGameSearch(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamGameSearch*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamGameSearch(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient020_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_RunFrame(_this->u_iface);
}

uint32 __thiscall winISteamClient_SteamClient020_GetIPCCallCount(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient020_GetIPCCallCount(_this->u_iface);
    return _ret;
}

void __thiscall winISteamClient_SteamClient020_SetWarningMessageHook(struct w_steam_iface *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_SetWarningMessageHook(_this->u_iface, pFunction);
}

bool __thiscall winISteamClient_SteamClient020_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed(_this->u_iface);
    return _ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient020_GetISteamHTTP(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTTP*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamHTTP(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void * __thiscall winISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages(_this->u_iface, hSteamuser, hSteamPipe, pchVersion);
    return _ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient020_GetISteamController(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamController*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamController(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient020_GetISteamUGC(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamUGC*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamUGC(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient020_GetISteamAppList(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamAppList*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamAppList(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient020_GetISteamMusic(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusic*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamMusic(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient020_GetISteamMusicRemote(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamMusicRemote*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamMusicRemote(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient020_GetISteamHTMLSurface(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamHTMLSurface*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamHTMLSurface(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void *_a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(_this->u_iface, _a);
}

void __thiscall winISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void *_a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(_this->u_iface, _a);
}

void __thiscall winISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->u_iface, func);
}

void /*ISteamInventory*/ * __thiscall winISteamClient_SteamClient020_GetISteamInventory(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInventory*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamInventory(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamVideo*/ * __thiscall winISteamClient_SteamClient020_GetISteamVideo(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamVideo*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamVideo(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamParentalSettings*/ * __thiscall winISteamClient_SteamClient020_GetISteamParentalSettings(struct w_steam_iface *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParentalSettings*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamParentalSettings(_this->u_iface, hSteamuser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamInput*/ * __thiscall winISteamClient_SteamClient020_GetISteamInput(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamInput*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamInput(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamParties*/ * __thiscall winISteamClient_SteamClient020_GetISteamParties(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamParties*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamParties(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void /*ISteamRemotePlay*/ * __thiscall winISteamClient_SteamClient020_GetISteamRemotePlay(struct w_steam_iface *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
    void /*ISteamRemotePlay*/ * _ret;
    TRACE("%p\n", _this);
    _ret = create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamRemotePlay(_this->u_iface, hSteamUser, hSteamPipe, pchVersion));
    return _ret;
}

void __thiscall winISteamClient_SteamClient020_DestroyAllInterfaces(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_DestroyAllInterfaces(_this->u_iface);
}

extern vtable_ptr winISteamClient_SteamClient020_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamClient_SteamClient020,
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_CreateSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_BReleaseSteamPipe)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_ConnectToGlobalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_CreateLocalUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_ReleaseUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamUser)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamGameServer)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_SetLocalIPBinding)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamFriends)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamUtils)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamMatchmaking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamMatchmakingServers)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamGenericInterface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamUserStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamGameServerStats)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamApps)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamNetworking)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamRemoteStorage)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamScreenshots)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamGameSearch)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_RunFrame)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_BShutdownIfAllPipesClosed)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamHTTP)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamController)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamUGC)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamAppList)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamMusic)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamMusicRemote)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamHTMLSurface)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamInventory)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamVideo)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamParentalSettings)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamInput)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamParties)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_GetISteamRemotePlay)
        VTABLE_ADD_FUNC(winISteamClient_SteamClient020_DestroyAllInterfaces)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamClient_SteamClient020(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient020");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient020_vtable, 42, "SteamClient020");
    r->u_iface = u_iface;
    return r;
}

