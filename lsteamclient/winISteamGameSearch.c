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

#include "cppISteamGameSearch_SteamMatchGameSearch001.h"

typedef struct __winISteamGameSearch_SteamMatchGameSearch001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameSearch_SteamMatchGameSearch001;

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams, 12)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams(winISteamGameSearch_SteamMatchGameSearch001 *_this, const char * pchKeyToFind, const char * pchValuesToFind)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams(_this->linux_side, pchKeyToFind, pchValuesToFind);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby, 20)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby(winISteamGameSearch_SteamMatchGameSearch001 *_this, CSteamID steamIDLobby, int nPlayerMin, int nPlayerMax)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby(_this->linux_side, steamIDLobby, nPlayerMin, nPlayerMax);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo, 12)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo(winISteamGameSearch_SteamMatchGameSearch001 *_this, int nPlayerMin, int nPlayerMax)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo(_this->linux_side, nPlayerMin, nPlayerMax);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_AcceptGame, 4)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_AcceptGame(winISteamGameSearch_SteamMatchGameSearch001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_DeclineGame, 4)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_DeclineGame(winISteamGameSearch_SteamMatchGameSearch001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails, 20)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails(winISteamGameSearch_SteamMatchGameSearch001 *_this, CSteamID steamIDHost, char * pchConnectionDetails, int cubConnectionDetails)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails(_this->linux_side, steamIDHost, pchConnectionDetails, cubConnectionDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_EndGameSearch, 4)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_EndGameSearch(winISteamGameSearch_SteamMatchGameSearch001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams, 12)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams(winISteamGameSearch_SteamMatchGameSearch001 *_this, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails, 12)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails(winISteamGameSearch_SteamMatchGameSearch001 *_this, const char * pchConnectionDetails, int cubConnectionDetails)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails(_this->linux_side, pchConnectionDetails, cubConnectionDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame, 16)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame(winISteamGameSearch_SteamMatchGameSearch001 *_this, int nPlayerMin, int nPlayerMax, int nMaxTeamSize)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame(_this->linux_side, nPlayerMin, nPlayerMax, nMaxTeamSize);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart, 12)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart(winISteamGameSearch_SteamMatchGameSearch001 *_this, uint64 ullUniqueGameID)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart(_this->linux_side, ullUniqueGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame, 4)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame(winISteamGameSearch_SteamMatchGameSearch001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult, 24)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult(winISteamGameSearch_SteamMatchGameSearch001 *_this, uint64 ullUniqueGameID, CSteamID steamIDPlayer, EPlayerResult_t EPlayerResult)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult(_this->linux_side, ullUniqueGameID, steamIDPlayer, EPlayerResult);
}

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_EndGame, 12)
EGameSearchErrorCode_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_EndGame(winISteamGameSearch_SteamMatchGameSearch001 *_this, uint64 ullUniqueGameID)
{
    TRACE("%p\n", _this);
    return cppISteamGameSearch_SteamMatchGameSearch001_EndGame(_this->linux_side, ullUniqueGameID);
}

extern vtable_ptr winISteamGameSearch_SteamMatchGameSearch001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameSearch_SteamMatchGameSearch001,
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_AcceptGame)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_DeclineGame)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_EndGameSearch)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult)
        VTABLE_ADD_FUNC(winISteamGameSearch_SteamMatchGameSearch001_EndGame)
    );
#ifndef __GNUC__
}
#endif

winISteamGameSearch_SteamMatchGameSearch001 *create_winISteamGameSearch_SteamMatchGameSearch001(void *linux_side)
{
    winISteamGameSearch_SteamMatchGameSearch001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameSearch_SteamMatchGameSearch001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameSearch_SteamMatchGameSearch001_vtable;
    r->linux_side = linux_side;
    return r;
}

