/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamMatchmaking_SteamMatchMaking001.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_RequestLobbyList, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_CreateLobby, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_RequestLobbyData, 12)

int __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame(struct w_steam_iface *_this, int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame(struct w_steam_iface *_this, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame(struct w_steam_iface *_this, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, unFlags);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2(struct w_steam_iface *_this, int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2(struct w_steam_iface *_this, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2(struct w_steam_iface *_this, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking001_RequestLobbyList(struct w_steam_iface *_this, uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList(_this->u_iface, ulGameID, pFilters, nFilters);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking001_CreateLobby(struct w_steam_iface *_this, uint64 ulGameID, bool bPrivate)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking001_CreateLobby(_this->u_iface, ulGameID, bPrivate);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking001_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking001_JoinLobby(_this->u_iface, steamIDLobby);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking001_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyData(struct w_steam_iface *_this, CSteamID SteamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData(_this->u_iface, SteamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking001_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking001,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking001_RequestLobbyData)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking001_vtable, 22, "SteamMatchMaking001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking002.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_RequestLobbyList, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_CreateLobby, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_RequestLobbyData, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer, 28)

int __thiscall winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame(struct w_steam_iface *_this, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_RequestLobbyList(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyList(_this->u_iface);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_CreateLobby(struct w_steam_iface *_this, bool bPrivate)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_CreateLobby(_this->u_iface, bPrivate);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_JoinLobby(_this->u_iface, steamIDLobby);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_GetLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking002_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer(_this->u_iface, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking002,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_RequestLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking002_vtable, 20, "SteamMatchMaking002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking003.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_RequestLobbyList, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_CreateLobby, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_RequestLobbyData, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies, 4)

int __thiscall winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame(struct w_steam_iface *_this, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestLobbyList(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList(_this->u_iface);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter(_this->u_iface, pchKeyToMatch, pchValueToMatch);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter(_this->u_iface, pchKeyToMatch, nValueToMatch, nComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter(_this->u_iface);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_CreateLobby(struct w_steam_iface *_this, bool bPrivate)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_CreateLobby(_this->u_iface, bPrivate);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_JoinLobby(_this->u_iface, steamIDLobby);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer(_this->u_iface, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer(_this->u_iface, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit(_this->u_iface, steamIDLobby, cMaxMembers);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled(struct w_steam_iface *_this, CSteamID steamIDLobby, bool bVoiceEnabled)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled(_this->u_iface, steamIDLobby, bVoiceEnabled);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking003,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_RequestLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking003_vtable, 28, "SteamMatchMaking003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking004.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_RequestLobbyList, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_CreateLobby, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_RequestLobbyData, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies, 4)

int __thiscall winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame(struct w_steam_iface *_this, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestLobbyList(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyList(_this->u_iface);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter(_this->u_iface, pchKeyToMatch, pchValueToMatch);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter(_this->u_iface, pchKeyToMatch, nValueToMatch, nComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter(_this->u_iface);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_CreateLobby(struct w_steam_iface *_this, bool bPrivate)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_CreateLobby(_this->u_iface, bPrivate);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_JoinLobby(_this->u_iface, steamIDLobby);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer(_this->u_iface, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer(_this->u_iface, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit(_this->u_iface, steamIDLobby, cMaxMembers);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking004,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_RequestLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking004_vtable, 27, "SteamMatchMaking004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking005.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_RequestLobbyList, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_CreateLobby, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_RequestLobbyData, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyType, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance, 12)

int __thiscall winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame(struct w_steam_iface *_this, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestLobbyList(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyList(_this->u_iface);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter(_this->u_iface, pchKeyToMatch, pchValueToMatch);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter(_this->u_iface, pchKeyToMatch, nValueToMatch, nComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter(_this->u_iface);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter(_this->u_iface, pchKeyToMatch, nValueToBeCloseTo);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_CreateLobby(struct w_steam_iface *_this, ELobbyType eLobbyType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_CreateLobby(_this->u_iface, eLobbyType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_JoinLobby(_this->u_iface, steamIDLobby);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer(_this->u_iface, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer(_this->u_iface, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit(_this->u_iface, steamIDLobby, cMaxMembers);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_SetLobbyType(_this->u_iface, steamIDLobby, eLobbyType);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner(_this->u_iface, steamIDLobby);
    return _ret;
}

float __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance(_this->u_iface, steamIDLobby);
    return _ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking005,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_RequestLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_SetLobbyType)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking005_vtable, 31, "SteamMatchMaking005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking006.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_RequestLobbyList, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_CreateLobby, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_RequestLobbyData, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyType, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner, 16)

int __thiscall winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame(struct w_steam_iface *_this, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking006_RequestLobbyList(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyList(_this->u_iface);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter(_this->u_iface, pchKeyToMatch, pchValueToMatch);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter(_this->u_iface, pchKeyToMatch, nValueToMatch, nComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter(_this->u_iface, pchKeyToMatch, nValueToBeCloseTo);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking006_CreateLobby(struct w_steam_iface *_this, ELobbyType eLobbyType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_CreateLobby(_this->u_iface, eLobbyType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking006_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_JoinLobby(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer(_this->u_iface, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer(_this->u_iface, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit(_this->u_iface, steamIDLobby, cMaxMembers);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking006_SetLobbyType(_this->u_iface, steamIDLobby, eLobbyType);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner(_this->u_iface, steamIDLobby);
    return _ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking006,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_RequestLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_SetLobbyType)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking006_vtable, 28, "SteamMatchMaking006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking007.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_RequestLobbyList, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_CreateLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_RequestLobbyData, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyType, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner, 20)

int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame(struct w_steam_iface *_this, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking007_RequestLobbyList(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyList(_this->u_iface);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter(_this->u_iface, pchKeyToMatch, pchValueToMatch, eComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter(_this->u_iface, pchKeyToMatch, nValueToMatch, eComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter(_this->u_iface, pchKeyToMatch, nValueToBeCloseTo);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable(struct w_steam_iface *_this, int nSlotsAvailable)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable(_this->u_iface, nSlotsAvailable);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking007_CreateLobby(struct w_steam_iface *_this, ELobbyType eLobbyType, int cMaxMembers)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_CreateLobby(_this->u_iface, eLobbyType, cMaxMembers);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking007_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_JoinLobby(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex(struct w_steam_iface *_this, CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex(_this->u_iface, steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer(_this->u_iface, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer(_this->u_iface, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit(_this->u_iface, steamIDLobby, cMaxMembers);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_SetLobbyType(_this->u_iface, steamIDLobby, eLobbyType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable(struct w_steam_iface *_this, CSteamID steamIDLobby, bool bLobbyJoinable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable(_this->u_iface, steamIDLobby, bLobbyJoinable);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner(_this->u_iface, steamIDLobby, steamIDNewOwner);
    return _ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking007,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_RequestLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_SetLobbyType)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking007_vtable, 34, "SteamMatchMaking007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking008.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_RequestLobbyList, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_CreateLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_RequestLobbyData, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyType, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner, 20)

int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame(struct w_steam_iface *_this, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking008_RequestLobbyList(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList(_this->u_iface);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(_this->u_iface, pchKeyToMatch, pchValueToMatch, eComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(_this->u_iface, pchKeyToMatch, nValueToMatch, eComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(_this->u_iface, pchKeyToMatch, nValueToBeCloseTo);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(struct w_steam_iface *_this, int nSlotsAvailable)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(_this->u_iface, nSlotsAvailable);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter(struct w_steam_iface *_this, ELobbyDistanceFilter eLobbyDistanceFilter)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter(_this->u_iface, eLobbyDistanceFilter);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter(struct w_steam_iface *_this, int cMaxResults)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter(_this->u_iface, cMaxResults);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking008_CreateLobby(struct w_steam_iface *_this, ELobbyType eLobbyType, int cMaxMembers)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_CreateLobby(_this->u_iface, eLobbyType, cMaxMembers);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking008_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_JoinLobby(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex(struct w_steam_iface *_this, CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex(_this->u_iface, steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer(_this->u_iface, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer(_this->u_iface, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit(_this->u_iface, steamIDLobby, cMaxMembers);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType(_this->u_iface, steamIDLobby, eLobbyType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable(struct w_steam_iface *_this, CSteamID steamIDLobby, bool bLobbyJoinable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable(_this->u_iface, steamIDLobby, bLobbyJoinable);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner(_this->u_iface, steamIDLobby, steamIDNewOwner);
    return _ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking008,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_RequestLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_SetLobbyType)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking008_vtable, 36, "SteamMatchMaking008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking009.h"

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_RequestLobbyList, 4)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter, 8)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_CreateLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_JoinLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_LeaveLobby, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry, 32)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_RequestLobbyData, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer, 28)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer, 24)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit, 12)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyType, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner, 20)
DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby, 20)

int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame(struct w_steam_iface *_this, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame(_this->u_iface, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame(struct w_steam_iface *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame(_this->u_iface, nAppID, nIP, nConnPort, nQueryPort, unFlags);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking009_RequestLobbyList(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyList(_this->u_iface);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(_this->u_iface, pchKeyToMatch, pchValueToMatch, eComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(_this->u_iface, pchKeyToMatch, nValueToMatch, eComparisonType);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(_this->u_iface, pchKeyToMatch, nValueToBeCloseTo);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(struct w_steam_iface *_this, int nSlotsAvailable)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(_this->u_iface, nSlotsAvailable);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(struct w_steam_iface *_this, ELobbyDistanceFilter eLobbyDistanceFilter)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(_this->u_iface, eLobbyDistanceFilter);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(struct w_steam_iface *_this, int cMaxResults)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(_this->u_iface, cMaxResults);
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter(_this->u_iface, steamIDLobby);
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex(_this->u_iface, iLobby);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking009_CreateLobby(struct w_steam_iface *_this, ELobbyType eLobbyType, int cMaxMembers)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_CreateLobby(_this->u_iface, eLobbyType, cMaxMembers);
    return _ret;
}

SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking009_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_JoinLobby(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_LeaveLobby(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby(_this->u_iface, steamIDLobby, steamIDInvitee);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers(_this->u_iface, steamIDLobby);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(_this->u_iface, steamIDLobby, iMember);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_SetLobbyData(_this->u_iface, steamIDLobby, pchKey, pchValue);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex(struct w_steam_iface *_this, CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex(_this->u_iface, steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData(_this->u_iface, steamIDLobby, pchKey);
    return _ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData(_this->u_iface, steamIDLobby, steamIDUser, pchKey);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData(_this->u_iface, steamIDLobby, pchKey, pchValue);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg(_this->u_iface, steamIDLobby, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry(_this->u_iface, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyData(_this->u_iface, steamIDLobby);
    return _ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer(_this->u_iface, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer(_this->u_iface, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit(_this->u_iface, steamIDLobby, cMaxMembers);
    return _ret;
}

int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_SetLobbyType(_this->u_iface, steamIDLobby, eLobbyType);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable(struct w_steam_iface *_this, CSteamID steamIDLobby, bool bLobbyJoinable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable(_this->u_iface, steamIDLobby, bLobbyJoinable);
    return _ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner(_this->u_iface, steamIDLobby);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner(_this->u_iface, steamIDLobby, steamIDNewOwner);
    return _ret;
}

bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDLobbyDependent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby(_this->u_iface, steamIDLobby, steamIDLobbyDependent);
    return _ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMatchmaking_SteamMatchMaking009,
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_RequestLobbyList)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_CreateLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_JoinLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_LeaveLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SetLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_RequestLobbyData)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SetLobbyType)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner)
        VTABLE_ADD_FUNC(winISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking009_vtable, 38, "SteamMatchMaking009");
    r->u_iface = u_iface;
    return r;
}

