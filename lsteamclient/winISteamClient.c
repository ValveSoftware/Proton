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

#include "cppISteamClient_SteamClient020.h"

typedef struct __winISteamClient_SteamClient020 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient020;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient020_CreateSteamPipe(winISteamClient_SteamClient020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient020_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient020_BReleaseSteamPipe(winISteamClient_SteamClient020 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient020_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient020_ConnectToGlobalUser(winISteamClient_SteamClient020 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient020_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient020_CreateLocalUser(winISteamClient_SteamClient020 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient020_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient020_ReleaseUser(winISteamClient_SteamClient020 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient020_GetISteamUser(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient020_GetISteamGameServer(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient020_SetLocalIPBinding(winISteamClient_SteamClient020 *_this, const SteamIPAddress_t * unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient020_GetISteamFriends(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient020_GetISteamUtils(winISteamClient_SteamClient020 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient020_GetISteamMatchmaking(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient020_GetISteamMatchmakingServers(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient020_GetISteamGenericInterface(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient020_GetISteamUserStats(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient020_GetISteamGameServerStats(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient020_GetISteamApps(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient020_GetISteamNetworking(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient020_GetISteamRemoteStorage(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient020_GetISteamScreenshots(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamGameSearch, 16)
winISteamGameSearch * __thiscall winISteamClient_SteamClient020_GetISteamGameSearch(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamGameSearch(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_RunFrame, 4)
void __thiscall winISteamClient_SteamClient020_RunFrame(winISteamClient_SteamClient020 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient020_GetIPCCallCount(winISteamClient_SteamClient020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient020_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient020_SetWarningMessageHook(winISteamClient_SteamClient020 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient020_BShutdownIfAllPipesClosed(winISteamClient_SteamClient020 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient020_GetISteamHTTP(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages, 16)
void * __thiscall winISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient020_GetISteamController(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient020_GetISteamUGC(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamAppList, 16)
winISteamAppList * __thiscall winISteamClient_SteamClient020_GetISteamAppList(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamAppList(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamMusic, 16)
winISteamMusic * __thiscall winISteamClient_SteamClient020_GetISteamMusic(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamMusic(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamMusicRemote, 16)
winISteamMusicRemote * __thiscall winISteamClient_SteamClient020_GetISteamMusicRemote(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamMusicRemote(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamHTMLSurface, 16)
winISteamHTMLSurface * __thiscall winISteamClient_SteamClient020_GetISteamHTMLSurface(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamHTMLSurface(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient020 *_this, void * _a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(_this->linux_side, _a);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient020 *_this, void * _a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(_this->linux_side, _a);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
void __thiscall winISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess(winISteamClient_SteamClient020 *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->linux_side, func);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamInventory, 16)
winISteamInventory * __thiscall winISteamClient_SteamClient020_GetISteamInventory(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamInventory(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamVideo, 16)
winISteamVideo * __thiscall winISteamClient_SteamClient020_GetISteamVideo(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamVideo(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamParentalSettings, 16)
winISteamParentalSettings * __thiscall winISteamClient_SteamClient020_GetISteamParentalSettings(winISteamClient_SteamClient020 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamParentalSettings(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamInput, 16)
winISteamInput * __thiscall winISteamClient_SteamClient020_GetISteamInput(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamInput(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamParties, 16)
winISteamParties * __thiscall winISteamClient_SteamClient020_GetISteamParties(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamParties(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_GetISteamRemotePlay, 16)
winISteamRemotePlay * __thiscall winISteamClient_SteamClient020_GetISteamRemotePlay(winISteamClient_SteamClient020 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient020_GetISteamRemotePlay(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient020_DestroyAllInterfaces, 4)
void __thiscall winISteamClient_SteamClient020_DestroyAllInterfaces(winISteamClient_SteamClient020 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient020_DestroyAllInterfaces(_this->linux_side);
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

winISteamClient_SteamClient020 *create_winISteamClient_SteamClient020(void *linux_side)
{
    winISteamClient_SteamClient020 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient020));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient020_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient019.h"

typedef struct __winISteamClient_SteamClient019 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient019;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient019_CreateSteamPipe(winISteamClient_SteamClient019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient019_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient019_BReleaseSteamPipe(winISteamClient_SteamClient019 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient019_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient019_ConnectToGlobalUser(winISteamClient_SteamClient019 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient019_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient019_CreateLocalUser(winISteamClient_SteamClient019 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient019_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient019_ReleaseUser(winISteamClient_SteamClient019 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient019_GetISteamUser(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient019_GetISteamGameServer(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient019_SetLocalIPBinding(winISteamClient_SteamClient019 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient019_GetISteamFriends(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient019_GetISteamUtils(winISteamClient_SteamClient019 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient019_GetISteamMatchmaking(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient019_GetISteamMatchmakingServers(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient019_GetISteamGenericInterface(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient019_GetISteamUserStats(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient019_GetISteamGameServerStats(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient019_GetISteamApps(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient019_GetISteamNetworking(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient019_GetISteamRemoteStorage(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient019_GetISteamScreenshots(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamGameSearch, 16)
winISteamGameSearch * __thiscall winISteamClient_SteamClient019_GetISteamGameSearch(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamGameSearch(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_RunFrame, 4)
void __thiscall winISteamClient_SteamClient019_RunFrame(winISteamClient_SteamClient019 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient019_GetIPCCallCount(winISteamClient_SteamClient019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient019_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient019_SetWarningMessageHook(winISteamClient_SteamClient019 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient019_BShutdownIfAllPipesClosed(winISteamClient_SteamClient019 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient019_GetISteamHTTP(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages, 16)
void * __thiscall winISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient019_GetISteamController(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient019_GetISteamUGC(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamAppList, 16)
winISteamAppList * __thiscall winISteamClient_SteamClient019_GetISteamAppList(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamAppList(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamMusic, 16)
winISteamMusic * __thiscall winISteamClient_SteamClient019_GetISteamMusic(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamMusic(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamMusicRemote, 16)
winISteamMusicRemote * __thiscall winISteamClient_SteamClient019_GetISteamMusicRemote(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamMusicRemote(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamHTMLSurface, 16)
winISteamHTMLSurface * __thiscall winISteamClient_SteamClient019_GetISteamHTMLSurface(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamHTMLSurface(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient019 *_this, void * _a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(_this->linux_side, _a);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient019 *_this, void * _a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(_this->linux_side, _a);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
void __thiscall winISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess(winISteamClient_SteamClient019 *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->linux_side, func);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamInventory, 16)
winISteamInventory * __thiscall winISteamClient_SteamClient019_GetISteamInventory(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamInventory(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamVideo, 16)
winISteamVideo * __thiscall winISteamClient_SteamClient019_GetISteamVideo(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamVideo(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamParentalSettings, 16)
winISteamParentalSettings * __thiscall winISteamClient_SteamClient019_GetISteamParentalSettings(winISteamClient_SteamClient019 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamParentalSettings(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamInput, 16)
winISteamInput * __thiscall winISteamClient_SteamClient019_GetISteamInput(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamInput(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamParties, 16)
winISteamParties * __thiscall winISteamClient_SteamClient019_GetISteamParties(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamParties(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient019_GetISteamRemotePlay, 16)
winISteamRemotePlay * __thiscall winISteamClient_SteamClient019_GetISteamRemotePlay(winISteamClient_SteamClient019 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient019_GetISteamRemotePlay(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient019 *create_winISteamClient_SteamClient019(void *linux_side)
{
    winISteamClient_SteamClient019 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient019));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient019_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient018.h"

typedef struct __winISteamClient_SteamClient018 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient018;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient018_CreateSteamPipe(winISteamClient_SteamClient018 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient018_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient018_BReleaseSteamPipe(winISteamClient_SteamClient018 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient018_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient018_ConnectToGlobalUser(winISteamClient_SteamClient018 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient018_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient018_CreateLocalUser(winISteamClient_SteamClient018 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient018_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient018_ReleaseUser(winISteamClient_SteamClient018 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient018_GetISteamUser(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient018_GetISteamGameServer(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient018_SetLocalIPBinding(winISteamClient_SteamClient018 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient018_GetISteamFriends(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient018_GetISteamUtils(winISteamClient_SteamClient018 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient018_GetISteamMatchmaking(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient018_GetISteamMatchmakingServers(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient018_GetISteamGenericInterface(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient018_GetISteamUserStats(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient018_GetISteamGameServerStats(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient018_GetISteamApps(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient018_GetISteamNetworking(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient018_GetISteamRemoteStorage(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient018_GetISteamScreenshots(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamGameSearch, 16)
winISteamGameSearch * __thiscall winISteamClient_SteamClient018_GetISteamGameSearch(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamGameSearch(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_RunFrame, 4)
void __thiscall winISteamClient_SteamClient018_RunFrame(winISteamClient_SteamClient018 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient018_GetIPCCallCount(winISteamClient_SteamClient018 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient018_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient018_SetWarningMessageHook(winISteamClient_SteamClient018 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient018_BShutdownIfAllPipesClosed(winISteamClient_SteamClient018 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient018_GetISteamHTTP(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages, 16)
void * __thiscall winISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient018_GetISteamController(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient018_GetISteamUGC(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamAppList, 16)
winISteamAppList * __thiscall winISteamClient_SteamClient018_GetISteamAppList(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamAppList(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamMusic, 16)
winISteamMusic * __thiscall winISteamClient_SteamClient018_GetISteamMusic(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamMusic(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamMusicRemote, 16)
winISteamMusicRemote * __thiscall winISteamClient_SteamClient018_GetISteamMusicRemote(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamMusicRemote(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamHTMLSurface, 16)
winISteamHTMLSurface * __thiscall winISteamClient_SteamClient018_GetISteamHTMLSurface(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamHTMLSurface(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient018 *_this, void * _a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(_this->linux_side, _a);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient018 *_this, void * _a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(_this->linux_side, _a);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
void __thiscall winISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess(winISteamClient_SteamClient018 *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->linux_side, func);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamInventory, 16)
winISteamInventory * __thiscall winISteamClient_SteamClient018_GetISteamInventory(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamInventory(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamVideo, 16)
winISteamVideo * __thiscall winISteamClient_SteamClient018_GetISteamVideo(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamVideo(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamParentalSettings, 16)
winISteamParentalSettings * __thiscall winISteamClient_SteamClient018_GetISteamParentalSettings(winISteamClient_SteamClient018 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamParentalSettings(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamInput, 16)
winISteamInput * __thiscall winISteamClient_SteamClient018_GetISteamInput(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamInput(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient018_GetISteamParties, 16)
winISteamParties * __thiscall winISteamClient_SteamClient018_GetISteamParties(winISteamClient_SteamClient018 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient018_GetISteamParties(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient018 *create_winISteamClient_SteamClient018(void *linux_side)
{
    winISteamClient_SteamClient018 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient018));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient018_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient017.h"

typedef struct __winISteamClient_SteamClient017 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient017;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient017_CreateSteamPipe(winISteamClient_SteamClient017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient017_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient017_BReleaseSteamPipe(winISteamClient_SteamClient017 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient017_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient017_ConnectToGlobalUser(winISteamClient_SteamClient017 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient017_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient017_CreateLocalUser(winISteamClient_SteamClient017 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient017_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient017_ReleaseUser(winISteamClient_SteamClient017 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient017_GetISteamUser(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient017_GetISteamGameServer(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient017_SetLocalIPBinding(winISteamClient_SteamClient017 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient017_GetISteamFriends(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient017_GetISteamUtils(winISteamClient_SteamClient017 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient017_GetISteamMatchmaking(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient017_GetISteamMatchmakingServers(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient017_GetISteamGenericInterface(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient017_GetISteamUserStats(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient017_GetISteamGameServerStats(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient017_GetISteamApps(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient017_GetISteamNetworking(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient017_GetISteamRemoteStorage(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient017_GetISteamScreenshots(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_RunFrame, 4)
void __thiscall winISteamClient_SteamClient017_RunFrame(winISteamClient_SteamClient017 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient017_GetIPCCallCount(winISteamClient_SteamClient017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient017_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient017_SetWarningMessageHook(winISteamClient_SteamClient017 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient017_BShutdownIfAllPipesClosed(winISteamClient_SteamClient017 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient017_GetISteamHTTP(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages, 16)
void * __thiscall winISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient017_GetISteamController(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient017_GetISteamUGC(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamAppList, 16)
winISteamAppList * __thiscall winISteamClient_SteamClient017_GetISteamAppList(winISteamClient_SteamClient017 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamAppList(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamMusic, 16)
winISteamMusic * __thiscall winISteamClient_SteamClient017_GetISteamMusic(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamMusic(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamMusicRemote, 16)
winISteamMusicRemote * __thiscall winISteamClient_SteamClient017_GetISteamMusicRemote(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamMusicRemote(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamHTMLSurface, 16)
winISteamHTMLSurface * __thiscall winISteamClient_SteamClient017_GetISteamHTMLSurface(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamHTMLSurface(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient017 *_this, void * _a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(_this->linux_side, _a);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient017 *_this, void * _a)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(_this->linux_side, _a);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
void __thiscall winISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess(winISteamClient_SteamClient017 *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->linux_side, func);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamInventory, 16)
winISteamInventory * __thiscall winISteamClient_SteamClient017_GetISteamInventory(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamInventory(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamVideo, 16)
winISteamVideo * __thiscall winISteamClient_SteamClient017_GetISteamVideo(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamVideo(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient017_GetISteamParentalSettings, 16)
winISteamParentalSettings * __thiscall winISteamClient_SteamClient017_GetISteamParentalSettings(winISteamClient_SteamClient017 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient017_GetISteamParentalSettings(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient017 *create_winISteamClient_SteamClient017(void *linux_side)
{
    winISteamClient_SteamClient017 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient017));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient017_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient016.h"

typedef struct __winISteamClient_SteamClient016 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient016;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient016_CreateSteamPipe(winISteamClient_SteamClient016 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient016_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient016_BReleaseSteamPipe(winISteamClient_SteamClient016 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient016_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient016_ConnectToGlobalUser(winISteamClient_SteamClient016 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient016_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient016_CreateLocalUser(winISteamClient_SteamClient016 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient016_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient016_ReleaseUser(winISteamClient_SteamClient016 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient016_GetISteamUser(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient016_GetISteamGameServer(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient016_SetLocalIPBinding(winISteamClient_SteamClient016 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient016_GetISteamFriends(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient016_GetISteamUtils(winISteamClient_SteamClient016 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient016_GetISteamMatchmaking(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient016_GetISteamMatchmakingServers(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient016_GetISteamGenericInterface(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient016_GetISteamUserStats(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient016_GetISteamGameServerStats(winISteamClient_SteamClient016 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient016_GetISteamApps(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient016_GetISteamNetworking(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient016_GetISteamRemoteStorage(winISteamClient_SteamClient016 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient016_GetISteamScreenshots(winISteamClient_SteamClient016 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_RunFrame, 4)
void __thiscall winISteamClient_SteamClient016_RunFrame(winISteamClient_SteamClient016 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient016_GetIPCCallCount(winISteamClient_SteamClient016 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient016_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient016_SetWarningMessageHook(winISteamClient_SteamClient016 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient016_BShutdownIfAllPipesClosed(winISteamClient_SteamClient016 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient016_GetISteamHTTP(winISteamClient_SteamClient016 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUnifiedMessages, 16)
winISteamUnifiedMessages * __thiscall winISteamClient_SteamClient016_GetISteamUnifiedMessages(winISteamClient_SteamClient016 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient016_GetISteamController(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient016_GetISteamUGC(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamAppList, 16)
winISteamAppList * __thiscall winISteamClient_SteamClient016_GetISteamAppList(winISteamClient_SteamClient016 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamAppList(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamMusic, 16)
winISteamMusic * __thiscall winISteamClient_SteamClient016_GetISteamMusic(winISteamClient_SteamClient016 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamMusic(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamMusicRemote, 16)
winISteamMusicRemote * __thiscall winISteamClient_SteamClient016_GetISteamMusicRemote(winISteamClient_SteamClient016 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamMusicRemote(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_GetISteamHTMLSurface, 16)
winISteamHTMLSurface * __thiscall winISteamClient_SteamClient016_GetISteamHTMLSurface(winISteamClient_SteamClient016 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient016_GetISteamHTMLSurface(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient016 *_this, SteamAPI_PostAPIResultInProcess_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess(_this->linux_side, func);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess, 8)
void __thiscall winISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess(winISteamClient_SteamClient016 *_this, SteamAPI_PostAPIResultInProcess_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess(_this->linux_side, func);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess, 8)
void __thiscall winISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess(winISteamClient_SteamClient016 *_this, SteamAPI_CheckCallbackRegistered_t func)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this->linux_side, func);
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

winISteamClient_SteamClient016 *create_winISteamClient_SteamClient016(void *linux_side)
{
    winISteamClient_SteamClient016 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient016));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient016_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient015.h"

typedef struct __winISteamClient_SteamClient015 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient015;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient015_CreateSteamPipe(winISteamClient_SteamClient015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient015_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient015_BReleaseSteamPipe(winISteamClient_SteamClient015 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient015_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient015_ConnectToGlobalUser(winISteamClient_SteamClient015 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient015_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient015_CreateLocalUser(winISteamClient_SteamClient015 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient015_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient015_ReleaseUser(winISteamClient_SteamClient015 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient015_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient015_GetISteamUser(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient015_GetISteamGameServer(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient015_SetLocalIPBinding(winISteamClient_SteamClient015 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient015_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient015_GetISteamFriends(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient015_GetISteamUtils(winISteamClient_SteamClient015 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient015_GetISteamMatchmaking(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient015_GetISteamMatchmakingServers(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient015_GetISteamGenericInterface(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient015_GetISteamUserStats(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient015_GetISteamGameServerStats(winISteamClient_SteamClient015 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient015_GetISteamApps(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient015_GetISteamNetworking(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient015_GetISteamRemoteStorage(winISteamClient_SteamClient015 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient015_GetISteamScreenshots(winISteamClient_SteamClient015 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_RunFrame, 4)
void __thiscall winISteamClient_SteamClient015_RunFrame(winISteamClient_SteamClient015 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient015_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient015_GetIPCCallCount(winISteamClient_SteamClient015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient015_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient015_SetWarningMessageHook(winISteamClient_SteamClient015 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient015_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient015_BShutdownIfAllPipesClosed(winISteamClient_SteamClient015 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient015_GetISteamHTTP(winISteamClient_SteamClient015 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUnifiedMessages, 16)
winISteamUnifiedMessages * __thiscall winISteamClient_SteamClient015_GetISteamUnifiedMessages(winISteamClient_SteamClient015 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient015_GetISteamController(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient015_GetISteamUGC(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamAppList, 16)
winISteamAppList * __thiscall winISteamClient_SteamClient015_GetISteamAppList(winISteamClient_SteamClient015 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamAppList(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamMusic, 16)
winISteamMusic * __thiscall winISteamClient_SteamClient015_GetISteamMusic(winISteamClient_SteamClient015 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamMusic(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient015_GetISteamMusicRemote, 16)
winISteamMusicRemote * __thiscall winISteamClient_SteamClient015_GetISteamMusicRemote(winISteamClient_SteamClient015 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient015_GetISteamMusicRemote(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient015 *create_winISteamClient_SteamClient015(void *linux_side)
{
    winISteamClient_SteamClient015 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient015));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient015_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient014.h"

typedef struct __winISteamClient_SteamClient014 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient014;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient014_CreateSteamPipe(winISteamClient_SteamClient014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient014_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient014_BReleaseSteamPipe(winISteamClient_SteamClient014 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient014_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient014_ConnectToGlobalUser(winISteamClient_SteamClient014 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient014_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient014_CreateLocalUser(winISteamClient_SteamClient014 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient014_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient014_ReleaseUser(winISteamClient_SteamClient014 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient014_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient014_GetISteamUser(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient014_GetISteamGameServer(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient014_SetLocalIPBinding(winISteamClient_SteamClient014 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient014_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient014_GetISteamFriends(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient014_GetISteamUtils(winISteamClient_SteamClient014 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient014_GetISteamMatchmaking(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient014_GetISteamMatchmakingServers(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient014_GetISteamGenericInterface(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient014_GetISteamUserStats(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient014_GetISteamGameServerStats(winISteamClient_SteamClient014 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient014_GetISteamApps(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient014_GetISteamNetworking(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient014_GetISteamRemoteStorage(winISteamClient_SteamClient014 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient014_GetISteamScreenshots(winISteamClient_SteamClient014 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_RunFrame, 4)
void __thiscall winISteamClient_SteamClient014_RunFrame(winISteamClient_SteamClient014 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient014_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient014_GetIPCCallCount(winISteamClient_SteamClient014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient014_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient014_SetWarningMessageHook(winISteamClient_SteamClient014 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient014_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient014_BShutdownIfAllPipesClosed(winISteamClient_SteamClient014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient014_GetISteamHTTP(winISteamClient_SteamClient014 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUnifiedMessages, 16)
winISteamUnifiedMessages * __thiscall winISteamClient_SteamClient014_GetISteamUnifiedMessages(winISteamClient_SteamClient014 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient014_GetISteamController(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient014_GetISteamUGC(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamAppList, 16)
winISteamAppList * __thiscall winISteamClient_SteamClient014_GetISteamAppList(winISteamClient_SteamClient014 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamAppList(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient014_GetISteamMusic, 16)
winISteamMusic * __thiscall winISteamClient_SteamClient014_GetISteamMusic(winISteamClient_SteamClient014 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient014_GetISteamMusic(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient014 *create_winISteamClient_SteamClient014(void *linux_side)
{
    winISteamClient_SteamClient014 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient014));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient014_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient013.h"

typedef struct __winISteamClient_SteamClient013 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient013;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient013_CreateSteamPipe(winISteamClient_SteamClient013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient013_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient013_BReleaseSteamPipe(winISteamClient_SteamClient013 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient013_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient013_ConnectToGlobalUser(winISteamClient_SteamClient013 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient013_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient013_CreateLocalUser(winISteamClient_SteamClient013 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient013_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient013_ReleaseUser(winISteamClient_SteamClient013 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient013_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient013_GetISteamUser(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient013_GetISteamGameServer(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient013_SetLocalIPBinding(winISteamClient_SteamClient013 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient013_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient013_GetISteamFriends(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient013_GetISteamUtils(winISteamClient_SteamClient013 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient013_GetISteamMatchmaking(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient013_GetISteamMatchmakingServers(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient013_GetISteamGenericInterface(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient013_GetISteamUserStats(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient013_GetISteamGameServerStats(winISteamClient_SteamClient013 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient013_GetISteamApps(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient013_GetISteamNetworking(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient013_GetISteamRemoteStorage(winISteamClient_SteamClient013 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient013_GetISteamScreenshots(winISteamClient_SteamClient013 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_RunFrame, 4)
void __thiscall winISteamClient_SteamClient013_RunFrame(winISteamClient_SteamClient013 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient013_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient013_GetIPCCallCount(winISteamClient_SteamClient013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient013_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient013_SetWarningMessageHook(winISteamClient_SteamClient013 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient013_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient013_BShutdownIfAllPipesClosed(winISteamClient_SteamClient013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient013_GetISteamHTTP(winISteamClient_SteamClient013 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUnifiedMessages, 16)
winISteamUnifiedMessages * __thiscall winISteamClient_SteamClient013_GetISteamUnifiedMessages(winISteamClient_SteamClient013 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient013_GetISteamController(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient013_GetISteamUGC(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamInventory, 16)
void * __thiscall winISteamClient_SteamClient013_GetISteamInventory(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient013_GetISteamInventory(_this->linux_side, hSteamUser, hSteamPipe, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamVideo, 16)
void * __thiscall winISteamClient_SteamClient013_GetISteamVideo(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient013_GetISteamVideo(_this->linux_side, hSteamUser, hSteamPipe, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient013_GetISteamAppList, 16)
winISteamAppList * __thiscall winISteamClient_SteamClient013_GetISteamAppList(winISteamClient_SteamClient013 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient013_GetISteamAppList(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient013 *create_winISteamClient_SteamClient013(void *linux_side)
{
    winISteamClient_SteamClient013 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient013));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient013_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient012.h"

typedef struct __winISteamClient_SteamClient012 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient012;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient012_CreateSteamPipe(winISteamClient_SteamClient012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient012_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient012_BReleaseSteamPipe(winISteamClient_SteamClient012 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient012_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient012_ConnectToGlobalUser(winISteamClient_SteamClient012 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient012_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient012_CreateLocalUser(winISteamClient_SteamClient012 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient012_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient012_ReleaseUser(winISteamClient_SteamClient012 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient012_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient012_GetISteamUser(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient012_GetISteamGameServer(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient012_SetLocalIPBinding(winISteamClient_SteamClient012 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient012_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient012_GetISteamFriends(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient012_GetISteamUtils(winISteamClient_SteamClient012 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient012_GetISteamMatchmaking(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient012_GetISteamMatchmakingServers(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient012_GetISteamGenericInterface(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient012_GetISteamUserStats(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient012_GetISteamGameServerStats(winISteamClient_SteamClient012 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient012_GetISteamApps(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient012_GetISteamNetworking(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient012_GetISteamRemoteStorage(winISteamClient_SteamClient012 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient012_GetISteamScreenshots(winISteamClient_SteamClient012 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_RunFrame, 4)
void __thiscall winISteamClient_SteamClient012_RunFrame(winISteamClient_SteamClient012 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient012_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient012_GetIPCCallCount(winISteamClient_SteamClient012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient012_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient012_SetWarningMessageHook(winISteamClient_SteamClient012 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient012_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient012_BShutdownIfAllPipesClosed(winISteamClient_SteamClient012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient012_GetISteamHTTP(winISteamClient_SteamClient012 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUnifiedMessages, 16)
winISteamUnifiedMessages * __thiscall winISteamClient_SteamClient012_GetISteamUnifiedMessages(winISteamClient_SteamClient012 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUnifiedMessages(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamController, 16)
winISteamController * __thiscall winISteamClient_SteamClient012_GetISteamController(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamController(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient012_GetISteamUGC, 16)
winISteamUGC * __thiscall winISteamClient_SteamClient012_GetISteamUGC(winISteamClient_SteamClient012 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient012_GetISteamUGC(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient012 *create_winISteamClient_SteamClient012(void *linux_side)
{
    winISteamClient_SteamClient012 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient012));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient012_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient011.h"

typedef struct __winISteamClient_SteamClient011 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient011;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient011_CreateSteamPipe(winISteamClient_SteamClient011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient011_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient011_BReleaseSteamPipe(winISteamClient_SteamClient011 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient011_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient011_ConnectToGlobalUser(winISteamClient_SteamClient011 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient011_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient011_CreateLocalUser(winISteamClient_SteamClient011 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient011_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient011_ReleaseUser(winISteamClient_SteamClient011 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient011_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient011_GetISteamUser(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient011_GetISteamGameServer(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient011_SetLocalIPBinding(winISteamClient_SteamClient011 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient011_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient011_GetISteamFriends(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient011_GetISteamUtils(winISteamClient_SteamClient011 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient011_GetISteamMatchmaking(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamMasterServerUpdater, 16)
winISteamMasterServerUpdater * __thiscall winISteamClient_SteamClient011_GetISteamMasterServerUpdater(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamMasterServerUpdater(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient011_GetISteamMatchmakingServers(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient011_GetISteamGenericInterface(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient011_GetISteamUserStats(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient011_GetISteamGameServerStats(winISteamClient_SteamClient011 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient011_GetISteamApps(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient011_GetISteamNetworking(winISteamClient_SteamClient011 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient011_GetISteamRemoteStorage(winISteamClient_SteamClient011 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamScreenshots, 16)
winISteamScreenshots * __thiscall winISteamClient_SteamClient011_GetISteamScreenshots(winISteamClient_SteamClient011 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamScreenshots(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_RunFrame, 4)
void __thiscall winISteamClient_SteamClient011_RunFrame(winISteamClient_SteamClient011 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient011_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient011_GetIPCCallCount(winISteamClient_SteamClient011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient011_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient011_SetWarningMessageHook(winISteamClient_SteamClient011 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient011_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient011_BShutdownIfAllPipesClosed(winISteamClient_SteamClient011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient011_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient011_GetISteamHTTP(winISteamClient_SteamClient011 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient011_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient011 *create_winISteamClient_SteamClient011(void *linux_side)
{
    winISteamClient_SteamClient011 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient011));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient011_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient010.h"

typedef struct __winISteamClient_SteamClient010 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient010;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient010_CreateSteamPipe(winISteamClient_SteamClient010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient010_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient010_BReleaseSteamPipe(winISteamClient_SteamClient010 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient010_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient010_ConnectToGlobalUser(winISteamClient_SteamClient010 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient010_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient010_CreateLocalUser(winISteamClient_SteamClient010 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient010_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient010_ReleaseUser(winISteamClient_SteamClient010 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient010_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient010_GetISteamUser(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient010_GetISteamGameServer(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient010_SetLocalIPBinding(winISteamClient_SteamClient010 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient010_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient010_GetISteamFriends(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient010_GetISteamUtils(winISteamClient_SteamClient010 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient010_GetISteamMatchmaking(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamMasterServerUpdater, 16)
winISteamMasterServerUpdater * __thiscall winISteamClient_SteamClient010_GetISteamMasterServerUpdater(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamMasterServerUpdater(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient010_GetISteamMatchmakingServers(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient010_GetISteamGenericInterface(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient010_GetISteamUserStats(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient010_GetISteamGameServerStats(winISteamClient_SteamClient010 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient010_GetISteamApps(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient010_GetISteamNetworking(winISteamClient_SteamClient010 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient010_GetISteamRemoteStorage(winISteamClient_SteamClient010 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_RunFrame, 4)
void __thiscall winISteamClient_SteamClient010_RunFrame(winISteamClient_SteamClient010 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient010_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient010_GetIPCCallCount(winISteamClient_SteamClient010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient010_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient010_SetWarningMessageHook(winISteamClient_SteamClient010 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient010_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_BShutdownIfAllPipesClosed, 4)
bool __thiscall winISteamClient_SteamClient010_BShutdownIfAllPipesClosed(winISteamClient_SteamClient010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient010_GetISteamHTTP, 16)
winISteamHTTP * __thiscall winISteamClient_SteamClient010_GetISteamHTTP(winISteamClient_SteamClient010 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient010_GetISteamHTTP(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient010 *create_winISteamClient_SteamClient010(void *linux_side)
{
    winISteamClient_SteamClient010 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient010));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient010_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient009.h"

typedef struct __winISteamClient_SteamClient009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient009;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient009_CreateSteamPipe(winISteamClient_SteamClient009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient009_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient009_BReleaseSteamPipe(winISteamClient_SteamClient009 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient009_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient009_ConnectToGlobalUser(winISteamClient_SteamClient009 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient009_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient009_CreateLocalUser(winISteamClient_SteamClient009 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient009_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient009_ReleaseUser(winISteamClient_SteamClient009 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient009_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient009_GetISteamUser(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient009_GetISteamGameServer(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient009_SetLocalIPBinding(winISteamClient_SteamClient009 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient009_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient009_GetISteamFriends(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient009_GetISteamUtils(winISteamClient_SteamClient009 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient009_GetISteamMatchmaking(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamMasterServerUpdater, 16)
winISteamMasterServerUpdater * __thiscall winISteamClient_SteamClient009_GetISteamMasterServerUpdater(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamMasterServerUpdater(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient009_GetISteamMatchmakingServers(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient009_GetISteamGenericInterface(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient009_GetISteamUserStats(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamGameServerStats, 16)
winISteamGameServerStats * __thiscall winISteamClient_SteamClient009_GetISteamGameServerStats(winISteamClient_SteamClient009 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamGameServerStats(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient009_GetISteamApps(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient009_GetISteamNetworking(winISteamClient_SteamClient009 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient009_GetISteamRemoteStorage(winISteamClient_SteamClient009 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient009_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_RunFrame, 4)
void __thiscall winISteamClient_SteamClient009_RunFrame(winISteamClient_SteamClient009 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient009_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient009_GetIPCCallCount(winISteamClient_SteamClient009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient009_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient009_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient009_SetWarningMessageHook(winISteamClient_SteamClient009 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient009_SetWarningMessageHook(_this->linux_side, pFunction);
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

winISteamClient_SteamClient009 *create_winISteamClient_SteamClient009(void *linux_side)
{
    winISteamClient_SteamClient009 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient009));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient009_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient008.h"

typedef struct __winISteamClient_SteamClient008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient008;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient008_CreateSteamPipe(winISteamClient_SteamClient008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient008_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient008_BReleaseSteamPipe(winISteamClient_SteamClient008 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient008_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient008_ConnectToGlobalUser(winISteamClient_SteamClient008 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient008_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_CreateLocalUser, 12)
HSteamUser __thiscall winISteamClient_SteamClient008_CreateLocalUser(winISteamClient_SteamClient008 *_this, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient008_CreateLocalUser(_this->linux_side, phSteamPipe, eAccountType);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient008_ReleaseUser(winISteamClient_SteamClient008 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient008_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient008_GetISteamUser(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient008_GetISteamGameServer(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient008_SetLocalIPBinding(winISteamClient_SteamClient008 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient008_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient008_GetISteamFriends(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient008_GetISteamUtils(winISteamClient_SteamClient008 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient008_GetISteamMatchmaking(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamMasterServerUpdater, 16)
winISteamMasterServerUpdater * __thiscall winISteamClient_SteamClient008_GetISteamMasterServerUpdater(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamMasterServerUpdater(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient008_GetISteamMatchmakingServers(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient008_GetISteamGenericInterface(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient008_GetISteamUserStats(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient008_GetISteamApps(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient008_GetISteamNetworking(winISteamClient_SteamClient008 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient008_GetISteamRemoteStorage(winISteamClient_SteamClient008 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient008_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_RunFrame, 4)
void __thiscall winISteamClient_SteamClient008_RunFrame(winISteamClient_SteamClient008 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient008_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient008_GetIPCCallCount(winISteamClient_SteamClient008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient008_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient008_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient008_SetWarningMessageHook(winISteamClient_SteamClient008 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient008_SetWarningMessageHook(_this->linux_side, pFunction);
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

winISteamClient_SteamClient008 *create_winISteamClient_SteamClient008(void *linux_side)
{
    winISteamClient_SteamClient008 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient008));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient008_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient007.h"

typedef struct __winISteamClient_SteamClient007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient007;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient007_CreateSteamPipe(winISteamClient_SteamClient007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient007_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient007_BReleaseSteamPipe(winISteamClient_SteamClient007 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient007_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient007_ConnectToGlobalUser(winISteamClient_SteamClient007 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient007_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_CreateLocalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient007_CreateLocalUser(winISteamClient_SteamClient007 *_this, HSteamPipe * phSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient007_CreateLocalUser(_this->linux_side, phSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient007_ReleaseUser(winISteamClient_SteamClient007 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient007_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient007_GetISteamUser(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient007_GetISteamGameServer(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient007_SetLocalIPBinding(winISteamClient_SteamClient007 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient007_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient007_GetISteamFriends(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient007_GetISteamUtils(winISteamClient_SteamClient007 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient007_GetISteamMatchmaking(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamContentServer, 16)
winISteamContentServer * __thiscall winISteamClient_SteamClient007_GetISteamContentServer(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamContentServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamMasterServerUpdater, 16)
winISteamMasterServerUpdater * __thiscall winISteamClient_SteamClient007_GetISteamMasterServerUpdater(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamMasterServerUpdater(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient007_GetISteamMatchmakingServers(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamGenericInterface, 16)
void * __thiscall winISteamClient_SteamClient007_GetISteamGenericInterface(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamGenericInterface(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_RunFrame, 4)
void __thiscall winISteamClient_SteamClient007_RunFrame(winISteamClient_SteamClient007 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient007_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient007_GetIPCCallCount(winISteamClient_SteamClient007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient007_GetIPCCallCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamUserStats, 16)
winISteamUserStats * __thiscall winISteamClient_SteamClient007_GetISteamUserStats(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamUserStats(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient007_GetISteamApps(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamNetworking, 16)
winISteamNetworking * __thiscall winISteamClient_SteamClient007_GetISteamNetworking(winISteamClient_SteamClient007 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamNetworking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_SetWarningMessageHook, 8)
void __thiscall winISteamClient_SteamClient007_SetWarningMessageHook(winISteamClient_SteamClient007 *_this, SteamAPIWarningMessageHook_t pFunction)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient007_SetWarningMessageHook(_this->linux_side, pFunction);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient007_GetISteamRemoteStorage, 16)
winISteamRemoteStorage * __thiscall winISteamClient_SteamClient007_GetISteamRemoteStorage(winISteamClient_SteamClient007 *_this, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient007_GetISteamRemoteStorage(_this->linux_side, hSteamuser, hSteamPipe, pchVersion));
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

winISteamClient_SteamClient007 *create_winISteamClient_SteamClient007(void *linux_side)
{
    winISteamClient_SteamClient007 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient007));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient007_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamClient_SteamClient006.h"

typedef struct __winISteamClient_SteamClient006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamClient_SteamClient006;

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_CreateSteamPipe, 4)
HSteamPipe __thiscall winISteamClient_SteamClient006_CreateSteamPipe(winISteamClient_SteamClient006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_CreateSteamPipe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_BReleaseSteamPipe, 8)
bool __thiscall winISteamClient_SteamClient006_BReleaseSteamPipe(winISteamClient_SteamClient006 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_BReleaseSteamPipe(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_CreateGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient006_CreateGlobalUser(winISteamClient_SteamClient006 *_this, HSteamPipe * phSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_CreateGlobalUser(_this->linux_side, phSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_ConnectToGlobalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient006_ConnectToGlobalUser(winISteamClient_SteamClient006 *_this, HSteamPipe hSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_ConnectToGlobalUser(_this->linux_side, hSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_CreateLocalUser, 8)
HSteamUser __thiscall winISteamClient_SteamClient006_CreateLocalUser(winISteamClient_SteamClient006 *_this, HSteamPipe * phSteamPipe)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_CreateLocalUser(_this->linux_side, phSteamPipe);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_ReleaseUser, 12)
void __thiscall winISteamClient_SteamClient006_ReleaseUser(winISteamClient_SteamClient006 *_this, HSteamPipe hSteamPipe, HSteamUser hUser)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient006_ReleaseUser(_this->linux_side, hSteamPipe, hUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamUser, 16)
winISteamUser * __thiscall winISteamClient_SteamClient006_GetISteamUser(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamUser(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetIVAC, 8)
void * __thiscall winISteamClient_SteamClient006_GetIVAC(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_GetIVAC(_this->linux_side, hSteamUser);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamGameServer, 16)
winISteamGameServer * __thiscall winISteamClient_SteamClient006_GetISteamGameServer(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamGameServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_SetLocalIPBinding, 12)
void __thiscall winISteamClient_SteamClient006_SetLocalIPBinding(winISteamClient_SteamClient006 *_this, uint32 unIP, uint16 usPort)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient006_SetLocalIPBinding(_this->linux_side, unIP, usPort);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetUniverseName, 8)
const char * __thiscall winISteamClient_SteamClient006_GetUniverseName(winISteamClient_SteamClient006 *_this, EUniverse eUniverse)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_GetUniverseName(_this->linux_side, eUniverse);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamFriends, 16)
winISteamFriends * __thiscall winISteamClient_SteamClient006_GetISteamFriends(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamFriends(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamUtils, 12)
winISteamUtils * __thiscall winISteamClient_SteamClient006_GetISteamUtils(winISteamClient_SteamClient006 *_this, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamUtils(_this->linux_side, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamBilling, 16)
void * __thiscall winISteamClient_SteamClient006_GetISteamBilling(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_GetISteamBilling(_this->linux_side, hSteamUser, hSteamPipe, pchVersion);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamMatchmaking, 16)
winISteamMatchmaking * __thiscall winISteamClient_SteamClient006_GetISteamMatchmaking(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamMatchmaking(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamApps, 16)
winISteamApps * __thiscall winISteamClient_SteamClient006_GetISteamApps(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamApps(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamContentServer, 16)
winISteamContentServer * __thiscall winISteamClient_SteamClient006_GetISteamContentServer(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamContentServer(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamMasterServerUpdater, 16)
winISteamMasterServerUpdater * __thiscall winISteamClient_SteamClient006_GetISteamMasterServerUpdater(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamMasterServerUpdater(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetISteamMatchmakingServers, 16)
winISteamMatchmakingServers * __thiscall winISteamClient_SteamClient006_GetISteamMatchmakingServers(winISteamClient_SteamClient006 *_this, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchVersion,
        cppISteamClient_SteamClient006_GetISteamMatchmakingServers(_this->linux_side, hSteamUser, hSteamPipe, pchVersion));
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_RunFrame, 4)
void __thiscall winISteamClient_SteamClient006_RunFrame(winISteamClient_SteamClient006 *_this)
{
    TRACE("%p\n", _this);
    cppISteamClient_SteamClient006_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamClient_SteamClient006_GetIPCCallCount, 4)
uint32 __thiscall winISteamClient_SteamClient006_GetIPCCallCount(winISteamClient_SteamClient006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamClient_SteamClient006_GetIPCCallCount(_this->linux_side);
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

winISteamClient_SteamClient006 *create_winISteamClient_SteamClient006(void *linux_side)
{
    winISteamClient_SteamClient006 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamClient_SteamClient006));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamClient_SteamClient006_vtable;
    r->linux_side = linux_side;
    return r;
}

