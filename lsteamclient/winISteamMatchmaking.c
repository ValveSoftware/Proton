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

#include "cppISteamMatchmaking_SteamMatchMaking009.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking009;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking009 *_this, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking009 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking009 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_RequestLobbyList, 4)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking009_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyList(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(winISteamMatchmaking_SteamMatchMaking009 *_this, const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(_this->linux_side, pchKeyToMatch, pchValueToMatch, eComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(winISteamMatchmaking_SteamMatchMaking009 *_this, const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(_this->linux_side, pchKeyToMatch, nValueToMatch, eComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(winISteamMatchmaking_SteamMatchMaking009 *_this, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(_this->linux_side, pchKeyToMatch, nValueToBeCloseTo);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(winISteamMatchmaking_SteamMatchMaking009 *_this, int nSlotsAvailable)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(_this->linux_side, nSlotsAvailable);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(winISteamMatchmaking_SteamMatchMaking009 *_this, ELobbyDistanceFilter eLobbyDistanceFilter)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(_this->linux_side, eLobbyDistanceFilter);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(winISteamMatchmaking_SteamMatchMaking009 *_this, int cMaxResults)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(_this->linux_side, cMaxResults);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_CreateLobby, 12)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking009_CreateLobby(winISteamMatchmaking_SteamMatchMaking009 *_this, ELobbyType eLobbyType, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_CreateLobby(_this->linux_side, eLobbyType, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_JoinLobby, 12)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking009_JoinLobby(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_LeaveLobby(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyData(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyData(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex(_this->linux_side, steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_RequestLobbyData(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer, 28)
void __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer(_this->linux_side, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer(_this->linux_side, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit(_this->linux_side, steamIDLobby, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyType, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyType(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_SetLobbyType(_this->linux_side, steamIDLobby, eLobbyType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, bool bLobbyJoinable)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable(_this->linux_side, steamIDLobby, bLobbyJoinable);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner, 16)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID *_r, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner(_this->linux_side, steamIDLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner(_this->linux_side, steamIDLobby, steamIDNewOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby(winISteamMatchmaking_SteamMatchMaking009 *_this, CSteamID steamIDLobby, CSteamID steamIDLobbyDependent)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby(_this->linux_side, steamIDLobby, steamIDLobbyDependent);
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

winISteamMatchmaking_SteamMatchMaking009 *create_winISteamMatchmaking_SteamMatchMaking009(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking009 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking009));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking009_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking008.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking008;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking008 *_this, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking008 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking008 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_RequestLobbyList, 4)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking008_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(winISteamMatchmaking_SteamMatchMaking008 *_this, const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(_this->linux_side, pchKeyToMatch, pchValueToMatch, eComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(winISteamMatchmaking_SteamMatchMaking008 *_this, const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(_this->linux_side, pchKeyToMatch, nValueToMatch, eComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(winISteamMatchmaking_SteamMatchMaking008 *_this, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(_this->linux_side, pchKeyToMatch, nValueToBeCloseTo);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(winISteamMatchmaking_SteamMatchMaking008 *_this, int nSlotsAvailable)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(_this->linux_side, nSlotsAvailable);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter(winISteamMatchmaking_SteamMatchMaking008 *_this, ELobbyDistanceFilter eLobbyDistanceFilter)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter(_this->linux_side, eLobbyDistanceFilter);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter(winISteamMatchmaking_SteamMatchMaking008 *_this, int cMaxResults)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter(_this->linux_side, cMaxResults);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_CreateLobby, 12)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking008_CreateLobby(winISteamMatchmaking_SteamMatchMaking008 *_this, ELobbyType eLobbyType, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_CreateLobby(_this->linux_side, eLobbyType, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_JoinLobby, 12)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking008_JoinLobby(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_LeaveLobby(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyData(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyData(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex(_this->linux_side, steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer, 28)
void __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer(_this->linux_side, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer(_this->linux_side, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit(_this->linux_side, steamIDLobby, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyType, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyType(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType(_this->linux_side, steamIDLobby, eLobbyType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, bool bLobbyJoinable)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable(_this->linux_side, steamIDLobby, bLobbyJoinable);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner, 16)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID *_r, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner(_this->linux_side, steamIDLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner(winISteamMatchmaking_SteamMatchMaking008 *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner(_this->linux_side, steamIDLobby, steamIDNewOwner);
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

winISteamMatchmaking_SteamMatchMaking008 *create_winISteamMatchmaking_SteamMatchMaking008(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking008 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking008));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking008_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking007.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking007;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking007 *_this, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking007 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking007 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_RequestLobbyList, 4)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking007_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyList(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter(winISteamMatchmaking_SteamMatchMaking007 *_this, const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter(_this->linux_side, pchKeyToMatch, pchValueToMatch, eComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter(winISteamMatchmaking_SteamMatchMaking007 *_this, const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter(_this->linux_side, pchKeyToMatch, nValueToMatch, eComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter(winISteamMatchmaking_SteamMatchMaking007 *_this, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter(_this->linux_side, pchKeyToMatch, nValueToBeCloseTo);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable(winISteamMatchmaking_SteamMatchMaking007 *_this, int nSlotsAvailable)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable(_this->linux_side, nSlotsAvailable);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_CreateLobby, 12)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking007_CreateLobby(winISteamMatchmaking_SteamMatchMaking007 *_this, ELobbyType eLobbyType, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_CreateLobby(_this->linux_side, eLobbyType, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_JoinLobby, 12)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking007_JoinLobby(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking007_LeaveLobby(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyData(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyData(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex(_this->linux_side, steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyData(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer, 28)
void __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer(_this->linux_side, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer(_this->linux_side, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit(_this->linux_side, steamIDLobby, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyType, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyType(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_SetLobbyType(_this->linux_side, steamIDLobby, eLobbyType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, bool bLobbyJoinable)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable(_this->linux_side, steamIDLobby, bLobbyJoinable);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner, 16)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID *_r, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner(_this->linux_side, steamIDLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner(winISteamMatchmaking_SteamMatchMaking007 *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner(_this->linux_side, steamIDLobby, steamIDNewOwner);
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

winISteamMatchmaking_SteamMatchMaking007 *create_winISteamMatchmaking_SteamMatchMaking007(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking007 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking007));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking007_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking006.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking006;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking006 *_this, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking006 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking006 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_RequestLobbyList, 4)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking006_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyList(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter(winISteamMatchmaking_SteamMatchMaking006 *_this, const char * pchKeyToMatch, const char * pchValueToMatch)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter(_this->linux_side, pchKeyToMatch, pchValueToMatch);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter(winISteamMatchmaking_SteamMatchMaking006 *_this, const char * pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter(_this->linux_side, pchKeyToMatch, nValueToMatch, nComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter(winISteamMatchmaking_SteamMatchMaking006 *_this, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter(_this->linux_side, pchKeyToMatch, nValueToBeCloseTo);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_CreateLobby, 8)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking006_CreateLobby(winISteamMatchmaking_SteamMatchMaking006 *_this, ELobbyType eLobbyType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_CreateLobby(_this->linux_side, eLobbyType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_JoinLobby, 12)
SteamAPICall_t __thiscall winISteamMatchmaking_SteamMatchMaking006_JoinLobby(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking006_LeaveLobby(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyData(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_GetLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyData(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyData(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer, 28)
void __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer(_this->linux_side, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer(_this->linux_side, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit(_this->linux_side, steamIDLobby, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_SetLobbyType, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyType(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking006_SetLobbyType(_this->linux_side, steamIDLobby, eLobbyType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner, 16)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner(winISteamMatchmaking_SteamMatchMaking006 *_this, CSteamID *_r, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner(_this->linux_side, steamIDLobby);
    return _r;
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

winISteamMatchmaking_SteamMatchMaking006 *create_winISteamMatchmaking_SteamMatchMaking006(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking006 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking006));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking006_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking005.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking005;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking005 *_this, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking005 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking005 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_RequestLobbyList, 4)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyList(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter(winISteamMatchmaking_SteamMatchMaking005 *_this, const char * pchKeyToMatch, const char * pchValueToMatch)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter(_this->linux_side, pchKeyToMatch, pchValueToMatch);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter(winISteamMatchmaking_SteamMatchMaking005 *_this, const char * pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter(_this->linux_side, pchKeyToMatch, nValueToMatch, nComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter, 4)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter(winISteamMatchmaking_SteamMatchMaking005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter(winISteamMatchmaking_SteamMatchMaking005 *_this, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter(_this->linux_side, pchKeyToMatch, nValueToBeCloseTo);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_CreateLobby, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_CreateLobby(winISteamMatchmaking_SteamMatchMaking005 *_this, ELobbyType eLobbyType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_CreateLobby(_this->linux_side, eLobbyType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_JoinLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_JoinLobby(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_LeaveLobby(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyData(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyData(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_RequestLobbyData(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer, 28)
void __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer(_this->linux_side, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer(_this->linux_side, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit(_this->linux_side, steamIDLobby, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies, 4)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies(winISteamMatchmaking_SteamMatchMaking005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_SetLobbyType, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyType(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby, ELobbyType eLobbyType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_SetLobbyType(_this->linux_side, steamIDLobby, eLobbyType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner, 16)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID *_r, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner(_this->linux_side, steamIDLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance, 12)
float __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance(winISteamMatchmaking_SteamMatchMaking005 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance(_this->linux_side, steamIDLobby);
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

winISteamMatchmaking_SteamMatchMaking005 *create_winISteamMatchmaking_SteamMatchMaking005(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking005));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking005_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking004.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking004;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking004 *_this, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking004 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking004 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_RequestLobbyList, 4)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking004 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyList(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter(winISteamMatchmaking_SteamMatchMaking004 *_this, const char * pchKeyToMatch, const char * pchValueToMatch)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter(_this->linux_side, pchKeyToMatch, pchValueToMatch);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter(winISteamMatchmaking_SteamMatchMaking004 *_this, const char * pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter(_this->linux_side, pchKeyToMatch, nValueToMatch, nComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter, 4)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter(winISteamMatchmaking_SteamMatchMaking004 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_CreateLobby, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_CreateLobby(winISteamMatchmaking_SteamMatchMaking004 *_this, bool bPrivate)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_CreateLobby(_this->linux_side, bPrivate);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_JoinLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_JoinLobby(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_LeaveLobby(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyData(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_GetLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyData(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_RequestLobbyData(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer, 28)
void __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer(_this->linux_side, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer(_this->linux_side, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit(_this->linux_side, steamIDLobby, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking004 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies, 4)
bool __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies(winISteamMatchmaking_SteamMatchMaking004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies(_this->linux_side);
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

winISteamMatchmaking_SteamMatchMaking004 *create_winISteamMatchmaking_SteamMatchMaking004(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking003.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking003;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking003 *_this, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking003 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking003 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_RequestLobbyList, 4)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking003 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter(winISteamMatchmaking_SteamMatchMaking003 *_this, const char * pchKeyToMatch, const char * pchValueToMatch)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter(_this->linux_side, pchKeyToMatch, pchValueToMatch);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter(winISteamMatchmaking_SteamMatchMaking003 *_this, const char * pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter(_this->linux_side, pchKeyToMatch, nValueToMatch, nComparisonType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter, 4)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter(winISteamMatchmaking_SteamMatchMaking003 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_CreateLobby, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_CreateLobby(winISteamMatchmaking_SteamMatchMaking003 *_this, bool bPrivate)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_CreateLobby(_this->linux_side, bPrivate);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_JoinLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_JoinLobby(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_LeaveLobby(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyData(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyData(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer, 28)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer(_this->linux_side, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer(_this->linux_side, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit, 16)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, int cMaxMembers)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit(_this->linux_side, steamIDLobby, cMaxMembers);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled(winISteamMatchmaking_SteamMatchMaking003 *_this, CSteamID steamIDLobby, bool bVoiceEnabled)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled(_this->linux_side, steamIDLobby, bVoiceEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies, 4)
bool __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies(winISteamMatchmaking_SteamMatchMaking003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies(_this->linux_side);
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

winISteamMatchmaking_SteamMatchMaking003 *create_winISteamMatchmaking_SteamMatchMaking003(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking002.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking002;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking002 *_this, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking002 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking002 *_this, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_RequestLobbyList, 4)
void __thiscall winISteamMatchmaking_SteamMatchMaking002_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking002 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyList(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_CreateLobby, 8)
void __thiscall winISteamMatchmaking_SteamMatchMaking002_CreateLobby(winISteamMatchmaking_SteamMatchMaking002 *_this, bool bPrivate)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_CreateLobby(_this->linux_side, bPrivate);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_JoinLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking002_JoinLobby(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking002_LeaveLobby(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyData(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_GetLobbyData(_this->linux_side, steamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyData(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking002_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyData(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer, 28)
void __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer(winISteamMatchmaking_SteamMatchMaking002 *_this, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer(_this->linux_side, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
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

winISteamMatchmaking_SteamMatchMaking002 *create_winISteamMatchmaking_SteamMatchMaking002(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamMatchmaking_SteamMatchMaking001.h"

typedef struct __winISteamMatchmaking_SteamMatchMaking001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMatchmaking_SteamMatchMaking001;

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount, 4)
int __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount(winISteamMatchmaking_SteamMatchMaking001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame, 28)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame(winISteamMatchmaking_SteamMatchMaking001 *_this, int iGame, uint32 * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame, 24)
int __thiscall winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame(winISteamMatchmaking_SteamMatchMaking001 *_this, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame(winISteamMatchmaking_SteamMatchMaking001 *_this, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame(_this->linux_side, nAppID, nIP, nConnPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2, 32)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2(winISteamMatchmaking_SteamMatchMaking001 *_this, int iGame, uint32 * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2(_this->linux_side, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2, 28)
int __thiscall winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2(winISteamMatchmaking_SteamMatchMaking001 *_this, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2, 24)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2(winISteamMatchmaking_SteamMatchMaking001 *_this, uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2(_this->linux_side, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_RequestLobbyList, 20)
void __thiscall winISteamMatchmaking_SteamMatchMaking001_RequestLobbyList(winISteamMatchmaking_SteamMatchMaking001 *_this, uint64 ulGameID, MatchMakingKeyValuePair_t * pFilters, uint32 nFilters)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList(_this->linux_side, ulGameID, pFilters, nFilters);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex, 12)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID *_r, int iLobby)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex(_this->linux_side, iLobby);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_CreateLobby, 16)
void __thiscall winISteamMatchmaking_SteamMatchMaking001_CreateLobby(winISteamMatchmaking_SteamMatchMaking001 *_this, uint64 ulGameID, bool bPrivate)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking001_CreateLobby(_this->linux_side, ulGameID, bPrivate);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_JoinLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking001_JoinLobby(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking001_JoinLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_LeaveLobby, 12)
void __thiscall winISteamMatchmaking_SteamMatchMaking001_LeaveLobby(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby(_this->linux_side, steamIDLobby, steamIDInvitee);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers, 12)
int __thiscall winISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers(_this->linux_side, steamIDLobby);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex, 20)
CSteamID *__thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID *_r, CSteamID steamIDLobby, int iMember)
{
    TRACE("%p\n", _this);
    *_r = cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex(_this->linux_side, steamIDLobby, iMember);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyData, 16)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyData(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID SteamIDLobby, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData(_this->linux_side, SteamIDLobby, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_SetLobbyData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_SetLobbyData(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData, 24)
const char * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData(_this->linux_side, steamIDLobby, steamIDUser, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData(_this->linux_side, steamIDLobby, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg, 20)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg(_this->linux_side, steamIDLobby, pvMsgBody, cubMsgBody);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry, 32)
int __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry(_this->linux_side, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

DEFINE_THISCALL_WRAPPER(winISteamMatchmaking_SteamMatchMaking001_RequestLobbyData, 12)
bool __thiscall winISteamMatchmaking_SteamMatchMaking001_RequestLobbyData(winISteamMatchmaking_SteamMatchMaking001 *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    return cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData(_this->linux_side, steamIDLobby);
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

winISteamMatchmaking_SteamMatchMaking001 *create_winISteamMatchmaking_SteamMatchMaking001(void *linux_side)
{
    winISteamMatchmaking_SteamMatchMaking001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMatchmaking_SteamMatchMaking001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMatchmaking_SteamMatchMaking001_vtable;
    r->linux_side = linux_side;
    return r;
}

