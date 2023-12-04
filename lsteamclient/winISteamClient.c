/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

int32_t __thiscall winISteamClient_SteamClient006_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient006_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient006_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient006_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient006_CreateGlobalUser(struct w_steam_iface *_this, int32_t *phSteamPipe)
{
    struct ISteamClient_SteamClient006_CreateGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_CreateGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient006_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient006_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient006_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe)
{
    struct ISteamClient_SteamClient006_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient006_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient006_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient006_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient006_GetIVAC(struct w_steam_iface *_this, int32_t hSteamUser)
{
    struct ISteamClient_SteamClient006_GetIVAC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetIVAC, &params );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient006_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient006_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient006_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_SetLocalIPBinding, &params );
}

const char * __thiscall winISteamClient_SteamClient006_GetUniverseName(struct w_steam_iface *_this, uint32_t eUniverse)
{
    struct ISteamClient_SteamClient006_GetUniverseName_params params =
    {
        .linux_side = _this->u_iface,
        .eUniverse = eUniverse,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetUniverseName, &params );
    return params._ret;
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient006_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient006_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient006_GetISteamBilling(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamBilling_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamBilling, &params );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient006_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient006_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamContentServer*/ * __thiscall winISteamClient_SteamClient006_GetISteamContentServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamContentServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamContentServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient006_GetISteamMasterServerUpdater(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamMasterServerUpdater_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamMasterServerUpdater, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient006_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient006_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient006_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient006_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient006_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient006_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient006_GetIPCCallCount, &params );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient006_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient006, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient006_vtable, 21, "SteamClient006");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient007_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient007_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient007_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient007_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient007_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient007_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient007_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe)
{
    struct ISteamClient_SteamClient007_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient007_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient007_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient007_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient007_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient007_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient007_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient007_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient007_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient007_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamContentServer*/ * __thiscall winISteamClient_SteamClient007_GetISteamContentServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamContentServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamContentServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient007_GetISteamMasterServerUpdater(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamMasterServerUpdater_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamMasterServerUpdater, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient007_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient007_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient007_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient007_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient007_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient007_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetIPCCallCount, &params );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient007_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient007_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient007_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient007_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient007_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_SetWarningMessageHook, &params );
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient007_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient007_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient007_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient007_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient007, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient007_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient007_vtable, 22, "SteamClient007");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient008_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient008_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient008_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient008_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient008_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient008_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient008_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient008_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient008_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient008_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient008_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient008_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient008_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient008_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient008_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient008_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient008_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient008_GetISteamMasterServerUpdater(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamMasterServerUpdater_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamMasterServerUpdater, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient008_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient008_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient008_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient008_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient008_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient008_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient008_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient008_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient008_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient008_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient008_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient008_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient008_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient008_SetWarningMessageHook, &params );
}

extern vtable_ptr winISteamClient_SteamClient008_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient008, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient008_vtable, 21, "SteamClient008");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient009_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient009_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient009_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient009_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient009_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient009_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient009_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient009_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient009_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient009_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient009_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient009_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient009_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient009_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient009_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient009_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient009_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient009_GetISteamMasterServerUpdater(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamMasterServerUpdater_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamMasterServerUpdater, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient009_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient009_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient009_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient009_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient009_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient009_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient009_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient009_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient009_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient009_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient009_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient009_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient009_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient009_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient009_SetWarningMessageHook, &params );
}

extern vtable_ptr winISteamClient_SteamClient009_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient009, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient009_vtable, 22, "SteamClient009");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient010_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient010_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient010_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient010_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient010_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient010_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient010_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient010_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient010_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient010_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient010_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient010_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient010_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient010_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient010_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient010_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient010_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient010_GetISteamMasterServerUpdater(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamMasterServerUpdater_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamMasterServerUpdater, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient010_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient010_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient010_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient010_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient010_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient010_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient010_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient010_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient010_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient010_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient010_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient010_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient010_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient010_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient010_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient010_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient010_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient010_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient010_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient010, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient010_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient010_vtable, 24, "SteamClient010");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient011_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient011_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient011_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient011_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient011_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient011_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient011_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient011_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient011_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient011_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient011_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient011_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient011_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient011_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient011_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient011_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient011_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMasterServerUpdater*/ * __thiscall winISteamClient_SteamClient011_GetISteamMasterServerUpdater(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamMasterServerUpdater_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamMasterServerUpdater, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient011_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient011_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient011_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient011_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient011_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient011_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient011_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient011_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient011_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient011_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient011_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient011_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient011_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient011_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient011_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient011_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient011_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient011_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient011_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient011_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient011, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient011_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient011_vtable, 25, "SteamClient011");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient012_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient012_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient012_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient012_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient012_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient012_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient012_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient012_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient012_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient012_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient012_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient012_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient012_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient012_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient012_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient012_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient012_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient012_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient012_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient012_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient012_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient012_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient012_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient012_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient012_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient012_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient012_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient012_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient012_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient012_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient012_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient012_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient012_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient012_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient012_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamUnifiedMessages, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient012_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient012_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient012_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient012_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient012_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient012, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient012_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient012_vtable, 27, "SteamClient012");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient013_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient013_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient013_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient013_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient013_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient013_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient013_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient013_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient013_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient013_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient013_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient013_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient013_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient013_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient013_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient013_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient013_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient013_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient013_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient013_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient013_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient013_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient013_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient013_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient013_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient013_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient013_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient013_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient013_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient013_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient013_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient013_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient013_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient013_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient013_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamUnifiedMessages, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient013_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient013_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient013_GetISteamInventory(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamInventory_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamInventory, &params );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient013_GetISteamVideo(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamVideo_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamVideo, &params );
    return params._ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient013_GetISteamAppList(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient013_GetISteamAppList_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient013_GetISteamAppList, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient013_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient013, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient013_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient013_vtable, 30, "SteamClient013");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient014_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient014_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient014_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient014_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient014_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient014_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient014_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient014_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient014_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient014_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient014_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient014_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient014_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient014_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient014_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient014_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient014_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient014_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient014_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient014_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient014_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient014_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient014_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient014_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient014_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient014_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient014_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient014_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient014_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient014_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient014_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient014_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient014_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient014_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient014_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamUnifiedMessages, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient014_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient014_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient014_GetISteamAppList(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamAppList_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamAppList, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient014_GetISteamMusic(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient014_GetISteamMusic_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient014_GetISteamMusic, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient014_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient014, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient014_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient014_vtable, 29, "SteamClient014");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient015_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient015_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient015_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient015_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient015_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient015_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient015_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient015_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient015_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient015_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient015_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient015_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient015_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient015_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient015_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient015_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient015_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient015_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient015_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient015_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient015_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient015_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient015_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient015_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient015_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient015_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient015_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient015_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient015_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient015_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient015_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient015_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient015_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient015_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient015_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamUnifiedMessages, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient015_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient015_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient015_GetISteamAppList(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamAppList_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamAppList, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient015_GetISteamMusic(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamMusic_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamMusic, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient015_GetISteamMusicRemote(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient015_GetISteamMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient015_GetISteamMusicRemote, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient015_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient015, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient015_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient015_vtable, 30, "SteamClient015");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient016_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient016_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient016_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient016_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient016_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient016_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient016_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient016_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient016_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient016_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient016_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient016_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient016_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient016_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient016_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient016_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient016_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient016_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient016_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient016_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient016_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient016_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient016_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient016_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient016_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient016_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient016_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient016_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient016_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient016_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient016_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient016_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient016_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient016_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUnifiedMessages*/ * __thiscall winISteamClient_SteamClient016_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamUnifiedMessages, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient016_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient016_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient016_GetISteamAppList(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamAppList_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamAppList, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient016_GetISteamMusic(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamMusic_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamMusic, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient016_GetISteamMusicRemote(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamMusicRemote, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient016_GetISteamHTMLSurface(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient016_GetISteamHTMLSurface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_GetISteamHTMLSurface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL func)(uint64_t, void *, uint32_t, int32_t))
{
    struct ISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        .func = func,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL func)(uint64_t, void *, uint32_t, int32_t))
{
    struct ISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        .func = func,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, uint32_t (*W_CDECL func)(int32_t))
{
    struct ISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params params =
    {
        .linux_side = _this->u_iface,
        .func = func,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess, &params );
}

extern vtable_ptr winISteamClient_SteamClient016_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient016, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient016_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient016(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient016_vtable, 34, "SteamClient016");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient017_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient017_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient017_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient017_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient017_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient017_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient017_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient017_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient017_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient017_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient017_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient017_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient017_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient017_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient017_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient017_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient017_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient017_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient017_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient017_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient017_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient017_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient017_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient017_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient017_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient017_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient017_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient017_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient017_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient017_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient017_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient017_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient017_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient017_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages, &params );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient017_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient017_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient017_GetISteamAppList(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamAppList_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamAppList, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient017_GetISteamMusic(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamMusic_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamMusic, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient017_GetISteamMusicRemote(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamMusicRemote, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient017_GetISteamHTMLSurface(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamHTMLSurface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamHTMLSurface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL _a)(void))
{
    struct ISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        ._a = _a,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL _a)(void))
{
    struct ISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        ._a = _a,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, uint32_t (*W_CDECL func)(int32_t))
{
    struct ISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params params =
    {
        .linux_side = _this->u_iface,
        .func = func,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess, &params );
}

void /*ISteamInventory*/ * __thiscall winISteamClient_SteamClient017_GetISteamInventory(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamInventory_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamInventory, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamVideo*/ * __thiscall winISteamClient_SteamClient017_GetISteamVideo(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamVideo_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamVideo, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamParentalSettings*/ * __thiscall winISteamClient_SteamClient017_GetISteamParentalSettings(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient017_GetISteamParentalSettings_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient017_GetISteamParentalSettings, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient017_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient017, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient017_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient017(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient017_vtable, 37, "SteamClient017");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient018_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient018_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient018_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient018_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient018_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient018_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient018_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient018_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient018_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient018_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient018_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient018_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient018_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient018_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient018_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient018_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient018_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient018_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient018_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient018_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient018_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient018_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient018_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient018_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient018_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameSearch*/ * __thiscall winISteamClient_SteamClient018_GetISteamGameSearch(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamGameSearch_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamGameSearch, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient018_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient018_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient018_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient018_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient018_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient018_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient018_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient018_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages, &params );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient018_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient018_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient018_GetISteamAppList(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamAppList_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamAppList, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient018_GetISteamMusic(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamMusic_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamMusic, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient018_GetISteamMusicRemote(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamMusicRemote, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient018_GetISteamHTMLSurface(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamHTMLSurface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamHTMLSurface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL _a)(void))
{
    struct ISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        ._a = _a,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL _a)(void))
{
    struct ISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        ._a = _a,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, uint32_t (*W_CDECL func)(int32_t))
{
    struct ISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params params =
    {
        .linux_side = _this->u_iface,
        .func = func,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess, &params );
}

void /*ISteamInventory*/ * __thiscall winISteamClient_SteamClient018_GetISteamInventory(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamInventory_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamInventory, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamVideo*/ * __thiscall winISteamClient_SteamClient018_GetISteamVideo(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamVideo_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamVideo, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamParentalSettings*/ * __thiscall winISteamClient_SteamClient018_GetISteamParentalSettings(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamParentalSettings_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamParentalSettings, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamInput*/ * __thiscall winISteamClient_SteamClient018_GetISteamInput(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamInput_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamInput, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamParties*/ * __thiscall winISteamClient_SteamClient018_GetISteamParties(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient018_GetISteamParties_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient018_GetISteamParties, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient018_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient018, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient018_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient018(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient018");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient018_vtable, 40, "SteamClient018");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient019_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient019_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient019_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient019_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient019_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient019_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient019_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient019_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient019_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient019_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient019_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient019_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient019_SetLocalIPBinding(struct w_steam_iface *_this, uint32_t unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient019_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient019_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient019_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient019_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient019_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient019_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient019_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient019_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient019_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient019_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient019_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient019_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameSearch*/ * __thiscall winISteamClient_SteamClient019_GetISteamGameSearch(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamGameSearch_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamGameSearch, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient019_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient019_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient019_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient019_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient019_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient019_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient019_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient019_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient019_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages, &params );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient019_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient019_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient019_GetISteamAppList(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamAppList_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamAppList, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient019_GetISteamMusic(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamMusic_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamMusic, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient019_GetISteamMusicRemote(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamMusicRemote, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient019_GetISteamHTMLSurface(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamHTMLSurface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamHTMLSurface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL _a)(void))
{
    struct ISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        ._a = _a,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL _a)(void))
{
    struct ISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        ._a = _a,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, uint32_t (*W_CDECL func)(int32_t))
{
    struct ISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params params =
    {
        .linux_side = _this->u_iface,
        .func = func,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess, &params );
}

void /*ISteamInventory*/ * __thiscall winISteamClient_SteamClient019_GetISteamInventory(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamInventory_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamInventory, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamVideo*/ * __thiscall winISteamClient_SteamClient019_GetISteamVideo(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamVideo_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamVideo, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamParentalSettings*/ * __thiscall winISteamClient_SteamClient019_GetISteamParentalSettings(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamParentalSettings_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamParentalSettings, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamInput*/ * __thiscall winISteamClient_SteamClient019_GetISteamInput(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamInput_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamInput, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamParties*/ * __thiscall winISteamClient_SteamClient019_GetISteamParties(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamParties_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamParties, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemotePlay*/ * __thiscall winISteamClient_SteamClient019_GetISteamRemotePlay(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient019_GetISteamRemotePlay_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient019_GetISteamRemotePlay, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

extern vtable_ptr winISteamClient_SteamClient019_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient019, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient019_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient019(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient019");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient019_vtable, 41, "SteamClient019");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamClient_SteamClient020_CreateSteamPipe(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient020_CreateSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_CreateSteamPipe, &params );
    return params._ret;
}

int8_t __thiscall winISteamClient_SteamClient020_BReleaseSteamPipe(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient020_BReleaseSteamPipe_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_BReleaseSteamPipe, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient020_ConnectToGlobalUser(struct w_steam_iface *_this, int32_t hSteamPipe)
{
    struct ISteamClient_SteamClient020_ConnectToGlobalUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_ConnectToGlobalUser, &params );
    return params._ret;
}

int32_t __thiscall winISteamClient_SteamClient020_CreateLocalUser(struct w_steam_iface *_this, int32_t *phSteamPipe, uint32_t eAccountType)
{
    struct ISteamClient_SteamClient020_CreateLocalUser_params params =
    {
        .linux_side = _this->u_iface,
        .phSteamPipe = phSteamPipe,
        .eAccountType = eAccountType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_CreateLocalUser, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient020_ReleaseUser(struct w_steam_iface *_this, int32_t hSteamPipe, int32_t hUser)
{
    struct ISteamClient_SteamClient020_ReleaseUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .hUser = hUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_ReleaseUser, &params );
}

void /*ISteamUser*/ * __thiscall winISteamClient_SteamClient020_GetISteamUser(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamUser_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamUser, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServer*/ * __thiscall winISteamClient_SteamClient020_GetISteamGameServer(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamGameServer, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient020_SetLocalIPBinding(struct w_steam_iface *_this, const SteamIPAddress_t *unIP, uint16_t usPort)
{
    struct ISteamClient_SteamClient020_SetLocalIPBinding_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_SetLocalIPBinding, &params );
}

void /*ISteamFriends*/ * __thiscall winISteamClient_SteamClient020_GetISteamFriends(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamFriends_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamFriends, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUtils*/ * __thiscall winISteamClient_SteamClient020_GetISteamUtils(struct w_steam_iface *_this, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamUtils_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamUtils, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmaking*/ * __thiscall winISteamClient_SteamClient020_GetISteamMatchmaking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamMatchmaking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamMatchmaking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMatchmakingServers*/ * __thiscall winISteamClient_SteamClient020_GetISteamMatchmakingServers(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamMatchmakingServers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamMatchmakingServers, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient020_GetISteamGenericInterface(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamGenericInterface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUserStats*/ * __thiscall winISteamClient_SteamClient020_GetISteamUserStats(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamUserStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameServerStats*/ * __thiscall winISteamClient_SteamClient020_GetISteamGameServerStats(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamGameServerStats_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamGameServerStats, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamApps*/ * __thiscall winISteamClient_SteamClient020_GetISteamApps(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamApps_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamApps, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamNetworking*/ * __thiscall winISteamClient_SteamClient020_GetISteamNetworking(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamNetworking_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamNetworking, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemoteStorage*/ * __thiscall winISteamClient_SteamClient020_GetISteamRemoteStorage(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamRemoteStorage_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamRemoteStorage, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamScreenshots*/ * __thiscall winISteamClient_SteamClient020_GetISteamScreenshots(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamScreenshots_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamScreenshots, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamGameSearch*/ * __thiscall winISteamClient_SteamClient020_GetISteamGameSearch(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamGameSearch_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamGameSearch, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient020_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient020_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_RunFrame, &params );
}

uint32_t __thiscall winISteamClient_SteamClient020_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient020_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient020_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamClient_SteamClient020_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamClient_SteamClient020_BShutdownIfAllPipesClosed(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient020_BShutdownIfAllPipesClosed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_BShutdownIfAllPipesClosed, &params );
    return params._ret;
}

void /*ISteamHTTP*/ * __thiscall winISteamClient_SteamClient020_GetISteamHTTP(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamHTTP_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamHTTP, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void * __thiscall winISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages, &params );
    return params._ret;
}

void /*ISteamController*/ * __thiscall winISteamClient_SteamClient020_GetISteamController(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamController_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamController, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamUGC*/ * __thiscall winISteamClient_SteamClient020_GetISteamUGC(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamUGC, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamAppList*/ * __thiscall winISteamClient_SteamClient020_GetISteamAppList(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamAppList_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamAppList, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusic*/ * __thiscall winISteamClient_SteamClient020_GetISteamMusic(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamMusic_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamMusic, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamMusicRemote*/ * __thiscall winISteamClient_SteamClient020_GetISteamMusicRemote(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamMusicRemote_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamMusicRemote, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamHTMLSurface*/ * __thiscall winISteamClient_SteamClient020_GetISteamHTMLSurface(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamHTMLSurface_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamHTMLSurface, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL _a)(void))
{
    struct ISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        ._a = _a,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(struct w_steam_iface *_this, void (*W_CDECL _a)(void))
{
    struct ISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params params =
    {
        .linux_side = _this->u_iface,
        ._a = _a,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, &params );
}

void __thiscall winISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess(struct w_steam_iface *_this, uint32_t (*W_CDECL func)(int32_t))
{
    struct ISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params params =
    {
        .linux_side = _this->u_iface,
        .func = func,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess, &params );
}

void /*ISteamInventory*/ * __thiscall winISteamClient_SteamClient020_GetISteamInventory(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamInventory_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamInventory, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamVideo*/ * __thiscall winISteamClient_SteamClient020_GetISteamVideo(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamVideo_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamVideo, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamParentalSettings*/ * __thiscall winISteamClient_SteamClient020_GetISteamParentalSettings(struct w_steam_iface *_this, int32_t hSteamuser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamParentalSettings_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamuser = hSteamuser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamParentalSettings, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamInput*/ * __thiscall winISteamClient_SteamClient020_GetISteamInput(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamInput_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamInput, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamParties*/ * __thiscall winISteamClient_SteamClient020_GetISteamParties(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamParties_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamParties, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void /*ISteamRemotePlay*/ * __thiscall winISteamClient_SteamClient020_GetISteamRemotePlay(struct w_steam_iface *_this, int32_t hSteamUser, int32_t hSteamPipe, const char *pchVersion)
{
    struct ISteamClient_SteamClient020_GetISteamRemotePlay_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamUser = hSteamUser,
        .hSteamPipe = hSteamPipe,
        .pchVersion = pchVersion,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_GetISteamRemotePlay, &params );
    params._ret = create_win_interface( pchVersion, params._ret );
    return params._ret;
}

void __thiscall winISteamClient_SteamClient020_DestroyAllInterfaces(struct w_steam_iface *_this)
{
    struct ISteamClient_SteamClient020_DestroyAllInterfaces_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamClient_SteamClient020_DestroyAllInterfaces, &params );
}

extern vtable_ptr winISteamClient_SteamClient020_vtable;

DEFINE_RTTI_DATA0(winISteamClient_SteamClient020, 0, ".?AVISteamClient@@")

__ASM_BLOCK_BEGIN(winISteamClient_SteamClient020_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamClient_SteamClient020(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamClient020");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamClient_SteamClient020_vtable, 42, "SteamClient020");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamClient_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamClient_SteamClient006_rtti( base );
    init_winISteamClient_SteamClient007_rtti( base );
    init_winISteamClient_SteamClient008_rtti( base );
    init_winISteamClient_SteamClient009_rtti( base );
    init_winISteamClient_SteamClient010_rtti( base );
    init_winISteamClient_SteamClient011_rtti( base );
    init_winISteamClient_SteamClient012_rtti( base );
    init_winISteamClient_SteamClient013_rtti( base );
    init_winISteamClient_SteamClient014_rtti( base );
    init_winISteamClient_SteamClient015_rtti( base );
    init_winISteamClient_SteamClient016_rtti( base );
    init_winISteamClient_SteamClient017_rtti( base );
    init_winISteamClient_SteamClient018_rtti( base );
    init_winISteamClient_SteamClient019_rtti( base );
    init_winISteamClient_SteamClient020_rtti( base );
#endif /* __x86_64__ */
}
