/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamFriends_SteamFriends001.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SetPersonaState, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_AddFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_RemoveFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_HasFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_AddFriendByName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SendMsgToFriend, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SetFriendRegValue, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendRegValue, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetChatMessage, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SendMsgToFriend_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_SetChatHistoryStart, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_ClearChatHistory, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_InviteFriendByEmail, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetBlockedFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendGamePlayed, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends001_GetFriendGamePlayed2, 28)

const char * __thiscall winISteamFriends_SteamFriends001_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends001_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends001_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetPersonaState(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends001_SetPersonaState(struct w_steam_iface *_this, EPersonaState ePersonaState)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SetPersonaState(_this->u_iface, ePersonaState);
}

bool __thiscall winISteamFriends_SteamFriends001_AddFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_AddFriend(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends001_RemoveFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_RemoveFriend(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends001_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_HasFriend(_this->u_iface, steamIDFriend);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends001_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, int32 *pnGameID, uint32 *punGameIP, uint16 *pusGamePort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pnGameID, punGameIP, pusGamePort);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

int32 __thiscall winISteamFriends_SteamFriends001_AddFriendByName(struct w_steam_iface *_this, const char *pchEmailOrAccountName)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_AddFriendByName(_this->u_iface, pchEmailOrAccountName);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends001_GetFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends001_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends001_GetFriendByIndex(_this->u_iface, iFriend);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends001_SendMsgToFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const char *pchMsgBody)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SendMsgToFriend(_this->u_iface, steamIDFriend, eChatEntryType, pchMsgBody);
}

void __thiscall winISteamFriends_SteamFriends001_SetFriendRegValue(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SetFriendRegValue(_this->u_iface, steamIDFriend, pchKey, pchValue);
}

const char * __thiscall winISteamFriends_SteamFriends001_GetFriendRegValue(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetFriendRegValue(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends001_GetChatMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iChatID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetChatMessage(_this->u_iface, steamIDFriend, iChatID, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends001_SendMsgToFriend_2(struct w_steam_iface *_this, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_SendMsgToFriend_2(_this->u_iface, steamIDFriend, eChatEntryType, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart(_this->u_iface, steamIDFriend);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends001_SetChatHistoryStart(struct w_steam_iface *_this, CSteamID steamIDFriend, int iChatID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_SetChatHistoryStart(_this->u_iface, steamIDFriend, iChatID);
}

void __thiscall winISteamFriends_SteamFriends001_ClearChatHistory(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends001_ClearChatHistory(_this->u_iface, steamIDFriend);
}

bool __thiscall winISteamFriends_SteamFriends001_InviteFriendByEmail(struct w_steam_iface *_this, const char *pchEmailAccount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_InviteFriendByEmail(_this->u_iface, pchEmailAccount);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends001_GetBlockedFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetBlockedFriendCount(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends001_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pulGameID, punGameIP, pusGamePort);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends001_GetFriendGamePlayed2(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends001_GetFriendGamePlayed2(_this->u_iface, steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends001,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_AddFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_RemoveFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_AddFriendByName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SendMsgToFriend_2)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SendMsgToFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SetFriendRegValue)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendRegValue)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_SetChatHistoryStart)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_ClearChatHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_InviteFriendByEmail)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetBlockedFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends001_GetFriendGamePlayed2)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends001_vtable, 27, "SteamFriends001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends002.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SetPersonaState, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SetFriendRegValue, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendRegValue, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendGamePlayed, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_AddFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_RemoveFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_AddFriendByName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_InviteFriendByEmail, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetChatMessage, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SendMsgToFriend, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_SetChatHistoryStart, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_ClearChatHistory, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_InviteFriendToClan, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_AcknowledgeInviteToClan, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends002_GetFriendFromSourceByIndex, 20)

const char * __thiscall winISteamFriends_SteamFriends002_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends002_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends002_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetPersonaState(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends002_SetPersonaState(struct w_steam_iface *_this, EPersonaState ePersonaState)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_SetPersonaState(_this->u_iface, ePersonaState);
}

int __thiscall winISteamFriends_SteamFriends002_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends002_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends002_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends002_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends002_SetFriendRegValue(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey, const char *pchValue)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_SetFriendRegValue(_this->u_iface, steamIDFriend, pchKey, pchValue);
}

const char * __thiscall winISteamFriends_SteamFriends002_GetFriendRegValue(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetFriendRegValue(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends002_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends002_AddFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_AddFriend(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends002_RemoveFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_RemoveFriend(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends002_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int32 __thiscall winISteamFriends_SteamFriends002_AddFriendByName(struct w_steam_iface *_this, const char *pchEmailOrAccountName)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_AddFriendByName(_this->u_iface, pchEmailOrAccountName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends002_InviteFriendByEmail(struct w_steam_iface *_this, const char *pchEmailAccount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_InviteFriendByEmail(_this->u_iface, pchEmailAccount);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends002_GetChatMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iChatID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetChatMessage(_this->u_iface, steamIDFriend, iChatID, pvData, cubData, peChatEntryType);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends002_SendMsgToFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, EChatEntryType eChatEntryType, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_SendMsgToFriend(_this->u_iface, steamIDFriend, eChatEntryType, pvMsgBody, cubMsgBody);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart(_this->u_iface, steamIDFriend);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends002_SetChatHistoryStart(struct w_steam_iface *_this, CSteamID steamIDFriend, int iChatID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_SetChatHistoryStart(_this->u_iface, steamIDFriend, iChatID);
}

void __thiscall winISteamFriends_SteamFriends002_ClearChatHistory(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends002_ClearChatHistory(_this->u_iface, steamIDFriend);
}

int __thiscall winISteamFriends_SteamFriends002_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends002_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends002_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends002_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends002_InviteFriendToClan(struct w_steam_iface *_this, CSteamID steamIDFriend, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_InviteFriendToClan(_this->u_iface, steamIDFriend, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends002_AcknowledgeInviteToClan(struct w_steam_iface *_this, CSteamID steamIDClan, bool bAcceptOrDenyClanInvite)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_AcknowledgeInviteToClan(_this->u_iface, steamIDClan, bAcceptOrDenyClanInvite);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends002_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends002_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends002_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends002_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends002,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SetFriendRegValue)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendRegValue)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_AddFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_RemoveFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_AddFriendByName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_InviteFriendByEmail)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SendMsgToFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_SetChatHistoryStart)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_ClearChatHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_InviteFriendToClan)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_AcknowledgeInviteToClan)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends002_GetFriendFromSourceByIndex)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends002_vtable, 30, "SteamFriends002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends003.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendGamePlayed, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends003_ActivateGameOverlay, 8)

const char * __thiscall winISteamFriends_SteamFriends003_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends003_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends003_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends003_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends003_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends003_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends003_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends003_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends003_GetFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends003_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends003_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends003_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends003_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends003_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends003_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends003_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends003_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends003_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends003_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends003_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends003_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends003_ActivateGameOverlay(_this->u_iface, pchDialog);
}

extern vtable_ptr winISteamFriends_SteamFriends003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends003,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends003_ActivateGameOverlay)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends003_vtable, 20, "SteamFriends003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends004.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendAvatar, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendGamePlayed, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends004_ActivateGameOverlay, 8)

const char * __thiscall winISteamFriends_SteamFriends004_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends004_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends004_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends004_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends004_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends004_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends004_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends004_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends004_GetFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend, int eAvatarSize)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetFriendAvatar(_this->u_iface, steamIDFriend, eAvatarSize);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends004_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends004_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends004_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends004_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends004_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends004_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends004_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends004_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends004_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends004_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends004_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends004_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends004_ActivateGameOverlay(_this->u_iface, pchDialog);
}

extern vtable_ptr winISteamFriends_SteamFriends004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends004,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends004_ActivateGameOverlay)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends004_vtable, 20, "SteamFriends004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends005.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendAvatar, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_ActivateGameOverlayToStore, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends005_SetPlayedWith, 12)

const char * __thiscall winISteamFriends_SteamFriends005_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends005_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends005_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends005_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends005_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends005_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends005_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends005_GetFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend, int eAvatarSize)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetFriendAvatar(_this->u_iface, steamIDFriend, eAvatarSize);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends005_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends005_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends005_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends005_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends005_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends005_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends005_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends005_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends005_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends005_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends005_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore(_this->u_iface, nAppID);
}

void __thiscall winISteamFriends_SteamFriends005_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends005_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

extern vtable_ptr winISteamFriends_SteamFriends005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends005,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends005_SetPlayedWith)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends005_vtable, 24, "SteamFriends005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends006.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendAvatar, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlayToStore, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog, 12)

const char * __thiscall winISteamFriends_SteamFriends006_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends006_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends006_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends006_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends006_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends006_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends006_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends006_GetFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend, int eAvatarSize)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetFriendAvatar(_this->u_iface, steamIDFriend, eAvatarSize);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends006_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends006_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends006_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends006_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends006_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends006_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends006_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends006_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends006_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends006_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends006_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends006_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends006_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlayToStore(_this->u_iface, nAppID);
}

void __thiscall winISteamFriends_SteamFriends006_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

extern vtable_ptr winISteamFriends_SteamFriends006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends006,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends006_vtable, 26, "SteamFriends006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends007.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlayToStore, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends007_GetLargeFriendAvatar, 12)

const char * __thiscall winISteamFriends_SteamFriends007_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends007_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends007_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends007_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends007_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends007_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends007_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends007_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends007_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends007_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends007_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends007_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends007_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends007_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends007_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends007_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends007_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends007_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore(_this->u_iface, nAppID);
}

void __thiscall winISteamFriends_SteamFriends007_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends007_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends007_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends007_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends007_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends007,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends007_GetLargeFriendAvatar)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends007_vtable, 28, "SteamFriends007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends008.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlayToStore, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends008_GetUserRestrictions, 4)

const char * __thiscall winISteamFriends_SteamFriends008_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends008_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends008_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends008_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends008_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends008_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends008_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends008_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends008_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends008_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends008_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends008_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends008_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends008_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends008_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends008_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlayToStore(_this->u_iface, nAppID);
}

void __thiscall winISteamFriends_SteamFriends008_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends008_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends008_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends008_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends008_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends008_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends008_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends008_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends008_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends008_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends008_GetUserRestrictions(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends008,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends008_GetUserRestrictions)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends008_vtable, 34, "SteamFriends008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends009.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlayToStore, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetUserRestrictions, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_SetRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_ClearRichPresence, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendRichPresence, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_InviteUserToGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetCoplayFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetCoplayFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendCoplayTime, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends009_GetFriendCoplayGame, 12)

const char * __thiscall winISteamFriends_SteamFriends009_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends009_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends009_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends009_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends009_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends009_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends009_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends009_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends009_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends009_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore(_this->u_iface, nAppID);
}

void __thiscall winISteamFriends_SteamFriends009_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends009_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends009_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends009_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends009_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends009_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends009_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetUserRestrictions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends009_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_SetRichPresence(_this->u_iface, pchKey, pchValue);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends009_ClearRichPresence(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends009_ClearRichPresence(_this->u_iface);
}

const char * __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendRichPresence(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int iKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex(_this->u_iface, steamIDFriend, iKey);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends009_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_InviteUserToGame(_this->u_iface, steamIDFriend, pchConnectString);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetCoplayFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends009_GetCoplayFriend(_this->u_iface, iCoplayFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends009_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendCoplayTime(_this->u_iface, steamIDFriend);
    return _ret;
}

AppId_t __thiscall winISteamFriends_SteamFriends009_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    AppId_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends009_GetFriendCoplayGame(_this->u_iface, steamIDFriend);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends009,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends009_GetFriendCoplayGame)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends009_vtable, 44, "SteamFriends009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends010.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanActivityCounts, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_DownloadClanActivityCounts, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlayToStore, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetUserRestrictions, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ClearRichPresence, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendRichPresence, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_InviteUserToGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetCoplayFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetCoplayFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendCoplayTime, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendCoplayGame, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_JoinClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_LeaveClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanChatMemberCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetChatMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SendClanChatMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetClanChatMessage, 32)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_IsClanChatAdmin, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_OpenClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_CloseClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_SetListenForFriendsMessages, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_ReplyToFriendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends010_GetFriendMessage, 28)

const char * __thiscall winISteamFriends_SteamFriends010_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends010_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends010_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends010_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends010_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends010_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetClanActivityCounts(_this->u_iface, steamIDClan, pnOnline, pnInGame, pnChatting);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends010_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int cClansToRequest)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_DownloadClanActivityCounts(_this->u_iface, psteamIDClans, cClansToRequest);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends010_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends010_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlayToStore(_this->u_iface, nAppID);
}

void __thiscall winISteamFriends_SteamFriends010_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends010_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends010_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends010_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends010_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends010_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetUserRestrictions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_SetRichPresence(_this->u_iface, pchKey, pchValue);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends010_ClearRichPresence(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends010_ClearRichPresence(_this->u_iface);
}

const char * __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendRichPresence(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int iKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex(_this->u_iface, steamIDFriend, iKey);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_InviteUserToGame(_this->u_iface, steamIDFriend, pchConnectString);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetCoplayFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends010_GetCoplayFriend(_this->u_iface, iCoplayFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendCoplayTime(_this->u_iface, steamIDFriend);
    return _ret;
}

AppId_t __thiscall winISteamFriends_SteamFriends010_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    AppId_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendCoplayGame(_this->u_iface, steamIDFriend);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends010_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_JoinClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_LeaveClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetClanChatMemberCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends010_GetChatMemberByIndex(_this->u_iface, steamIDClan, iUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_SendClanChatMessage(_this->u_iface, steamIDClanChat, pchText);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *_e, CSteamID *_f)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetClanChatMessage(_this->u_iface, steamIDClanChat, iMessage, prgchText, cchTextMax, _e, _f);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_IsClanChatAdmin(_this->u_iface, steamIDClanChat, steamIDUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_OpenClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_CloseClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_SetListenForFriendsMessages(struct w_steam_iface *_this, bool bInterceptEnabled)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_SetListenForFriendsMessages(_this->u_iface, bInterceptEnabled);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends010_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_ReplyToFriendMessage(_this->u_iface, steamIDFriend, pchMsgToSend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends010_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends010_GetFriendMessage(_this->u_iface, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends010,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends010_GetFriendMessage)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends010_vtable, 59, "SteamFriends010");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends011.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanActivityCounts, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_DownloadClanActivityCounts, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlayToStore, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetUserRestrictions, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ClearRichPresence, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendRichPresence, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_RequestFriendRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_InviteUserToGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetCoplayFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetCoplayFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendCoplayTime, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendCoplayGame, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_JoinClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_LeaveClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanChatMemberCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetChatMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SendClanChatMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetClanChatMessage, 32)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_IsClanChatAdmin, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_OpenClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_CloseClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_SetListenForFriendsMessages, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_ReplyToFriendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFriendMessage, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_GetFollowerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_IsFollowing, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends011_EnumerateFollowingList, 8)

const char * __thiscall winISteamFriends_SteamFriends011_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetPersonaName(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends011_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_SetPersonaName(_this->u_iface, pchPersonaName);
}

EPersonaState __thiscall winISteamFriends_SteamFriends011_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends011_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends011_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends011_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetClanActivityCounts(_this->u_iface, steamIDClan, pnOnline, pnInGame, pnChatting);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int cClansToRequest)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_DownloadClanActivityCounts(_this->u_iface, psteamIDClans, cClansToRequest);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends011_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends011_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlayToStore(_this->u_iface, nAppID);
}

void __thiscall winISteamFriends_SteamFriends011_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends011_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends011_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends011_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends011_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetUserRestrictions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_SetRichPresence(_this->u_iface, pchKey, pchValue);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends011_ClearRichPresence(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_ClearRichPresence(_this->u_iface);
}

const char * __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendRichPresence(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int iKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex(_this->u_iface, steamIDFriend, iKey);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends011_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends011_RequestFriendRichPresence(_this->u_iface, steamIDFriend);
}

bool __thiscall winISteamFriends_SteamFriends011_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_InviteUserToGame(_this->u_iface, steamIDFriend, pchConnectString);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetCoplayFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends011_GetCoplayFriend(_this->u_iface, iCoplayFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendCoplayTime(_this->u_iface, steamIDFriend);
    return _ret;
}

AppId_t __thiscall winISteamFriends_SteamFriends011_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    AppId_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendCoplayGame(_this->u_iface, steamIDFriend);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_JoinClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_LeaveClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetClanChatMemberCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends011_GetChatMemberByIndex(_this->u_iface, steamIDClan, iUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_SendClanChatMessage(_this->u_iface, steamIDClanChat, pchText);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *_e, CSteamID *_f)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetClanChatMessage(_this->u_iface, steamIDClanChat, iMessage, prgchText, cchTextMax, _e, _f);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_IsClanChatAdmin(_this->u_iface, steamIDClanChat, steamIDUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_OpenClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_CloseClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_SetListenForFriendsMessages(struct w_steam_iface *_this, bool bInterceptEnabled)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_SetListenForFriendsMessages(_this->u_iface, bInterceptEnabled);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends011_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_ReplyToFriendMessage(_this->u_iface, steamIDFriend, pchMsgToSend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends011_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFriendMessage(_this->u_iface, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_GetFollowerCount(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_IsFollowing(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends011_EnumerateFollowingList(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends011_EnumerateFollowingList(_this->u_iface, unStartIndex);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends011,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends011_EnumerateFollowingList)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends011_vtable, 63, "SteamFriends011");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends012.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanActivityCounts, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_DownloadClanActivityCounts, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlayToStore, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetUserRestrictions, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ClearRichPresence, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendRichPresence, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_RequestFriendRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_InviteUserToGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetCoplayFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetCoplayFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendCoplayTime, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendCoplayGame, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_JoinClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_LeaveClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanChatMemberCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetChatMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SendClanChatMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetClanChatMessage, 32)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_IsClanChatAdmin, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_OpenClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_CloseClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_SetListenForFriendsMessages, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_ReplyToFriendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFriendMessage, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_GetFollowerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_IsFollowing, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends012_EnumerateFollowingList, 8)

const char * __thiscall winISteamFriends_SteamFriends012_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetPersonaName(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_SetPersonaName(_this->u_iface, pchPersonaName);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends012_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends012_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends012_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends012_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetClanActivityCounts(_this->u_iface, steamIDClan, pnOnline, pnInGame, pnChatting);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int cClansToRequest)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_DownloadClanActivityCounts(_this->u_iface, psteamIDClans, cClansToRequest);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends012_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends012_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlayToStore(_this->u_iface, nAppID);
}

void __thiscall winISteamFriends_SteamFriends012_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends012_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends012_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends012_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends012_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetUserRestrictions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_SetRichPresence(_this->u_iface, pchKey, pchValue);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends012_ClearRichPresence(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_ClearRichPresence(_this->u_iface);
}

const char * __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendRichPresence(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int iKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex(_this->u_iface, steamIDFriend, iKey);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends012_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends012_RequestFriendRichPresence(_this->u_iface, steamIDFriend);
}

bool __thiscall winISteamFriends_SteamFriends012_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_InviteUserToGame(_this->u_iface, steamIDFriend, pchConnectString);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetCoplayFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends012_GetCoplayFriend(_this->u_iface, iCoplayFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendCoplayTime(_this->u_iface, steamIDFriend);
    return _ret;
}

AppId_t __thiscall winISteamFriends_SteamFriends012_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    AppId_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendCoplayGame(_this->u_iface, steamIDFriend);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_JoinClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_LeaveClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetClanChatMemberCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends012_GetChatMemberByIndex(_this->u_iface, steamIDClan, iUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_SendClanChatMessage(_this->u_iface, steamIDClanChat, pchText);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *_e, CSteamID *_f)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetClanChatMessage(_this->u_iface, steamIDClanChat, iMessage, prgchText, cchTextMax, _e, _f);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_IsClanChatAdmin(_this->u_iface, steamIDClanChat, steamIDUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_OpenClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_CloseClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_SetListenForFriendsMessages(struct w_steam_iface *_this, bool bInterceptEnabled)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_SetListenForFriendsMessages(_this->u_iface, bInterceptEnabled);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends012_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_ReplyToFriendMessage(_this->u_iface, steamIDFriend, pchMsgToSend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends012_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFriendMessage(_this->u_iface, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_GetFollowerCount(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_IsFollowing(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends012_EnumerateFollowingList(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends012_EnumerateFollowingList(_this->u_iface, unStartIndex);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends012,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends012_EnumerateFollowingList)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends012_vtable, 63, "SteamFriends012");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends013.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanActivityCounts, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_DownloadClanActivityCounts, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlayToStore, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetUserRestrictions, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ClearRichPresence, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendRichPresence, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_RequestFriendRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_InviteUserToGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetCoplayFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetCoplayFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendCoplayTime, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendCoplayGame, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_JoinClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_LeaveClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanChatMemberCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetChatMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SendClanChatMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetClanChatMessage, 32)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_IsClanChatAdmin, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_OpenClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_CloseClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_SetListenForFriendsMessages, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_ReplyToFriendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFriendMessage, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_GetFollowerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_IsFollowing, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends013_EnumerateFollowingList, 8)

const char * __thiscall winISteamFriends_SteamFriends013_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetPersonaName(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_SetPersonaName(_this->u_iface, pchPersonaName);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends013_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends013_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends013_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends013_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetClanActivityCounts(_this->u_iface, steamIDClan, pnOnline, pnInGame, pnChatting);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int cClansToRequest)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_DownloadClanActivityCounts(_this->u_iface, psteamIDClans, cClansToRequest);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends013_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends013_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlayToStore(_this->u_iface, nAppID, eFlag);
}

void __thiscall winISteamFriends_SteamFriends013_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends013_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends013_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends013_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends013_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetUserRestrictions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_SetRichPresence(_this->u_iface, pchKey, pchValue);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends013_ClearRichPresence(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_ClearRichPresence(_this->u_iface);
}

const char * __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendRichPresence(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int iKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex(_this->u_iface, steamIDFriend, iKey);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends013_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends013_RequestFriendRichPresence(_this->u_iface, steamIDFriend);
}

bool __thiscall winISteamFriends_SteamFriends013_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_InviteUserToGame(_this->u_iface, steamIDFriend, pchConnectString);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetCoplayFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends013_GetCoplayFriend(_this->u_iface, iCoplayFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendCoplayTime(_this->u_iface, steamIDFriend);
    return _ret;
}

AppId_t __thiscall winISteamFriends_SteamFriends013_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    AppId_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendCoplayGame(_this->u_iface, steamIDFriend);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_JoinClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_LeaveClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetClanChatMemberCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends013_GetChatMemberByIndex(_this->u_iface, steamIDClan, iUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_SendClanChatMessage(_this->u_iface, steamIDClanChat, pchText);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *_e, CSteamID *_f)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetClanChatMessage(_this->u_iface, steamIDClanChat, iMessage, prgchText, cchTextMax, _e, _f);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_IsClanChatAdmin(_this->u_iface, steamIDClanChat, steamIDUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_OpenClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_CloseClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_SetListenForFriendsMessages(struct w_steam_iface *_this, bool bInterceptEnabled)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_SetListenForFriendsMessages(_this->u_iface, bInterceptEnabled);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends013_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_ReplyToFriendMessage(_this->u_iface, steamIDFriend, pchMsgToSend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends013_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFriendMessage(_this->u_iface, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_GetFollowerCount(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_IsFollowing(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends013_EnumerateFollowingList(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends013_EnumerateFollowingList(_this->u_iface, unStartIndex);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends013,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends013_EnumerateFollowingList)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends013_vtable, 63, "SteamFriends013");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends014.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetPlayerNickname, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanActivityCounts, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_DownloadClanActivityCounts, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlayToStore, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetUserRestrictions, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ClearRichPresence, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendRichPresence, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_RequestFriendRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_InviteUserToGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetCoplayFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetCoplayFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendCoplayTime, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendCoplayGame, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_JoinClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_LeaveClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanChatMemberCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetChatMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SendClanChatMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetClanChatMessage, 32)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_IsClanChatAdmin, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_OpenClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_CloseClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_SetListenForFriendsMessages, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_ReplyToFriendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFriendMessage, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_GetFollowerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_IsFollowing, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends014_EnumerateFollowingList, 8)

const char * __thiscall winISteamFriends_SteamFriends014_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetPersonaName(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_SetPersonaName(_this->u_iface, pchPersonaName);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends014_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends014_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends014_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetPlayerNickname(struct w_steam_iface *_this, CSteamID steamIDPlayer)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetPlayerNickname(_this->u_iface, steamIDPlayer);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends014_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetClanActivityCounts(_this->u_iface, steamIDClan, pnOnline, pnInGame, pnChatting);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int cClansToRequest)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_DownloadClanActivityCounts(_this->u_iface, psteamIDClans, cClansToRequest);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends014_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends014_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlayToStore(_this->u_iface, nAppID, eFlag);
}

void __thiscall winISteamFriends_SteamFriends014_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends014_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends014_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends014_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends014_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetUserRestrictions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_SetRichPresence(_this->u_iface, pchKey, pchValue);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends014_ClearRichPresence(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_ClearRichPresence(_this->u_iface);
}

const char * __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendRichPresence(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int iKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex(_this->u_iface, steamIDFriend, iKey);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends014_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends014_RequestFriendRichPresence(_this->u_iface, steamIDFriend);
}

bool __thiscall winISteamFriends_SteamFriends014_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_InviteUserToGame(_this->u_iface, steamIDFriend, pchConnectString);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetCoplayFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends014_GetCoplayFriend(_this->u_iface, iCoplayFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendCoplayTime(_this->u_iface, steamIDFriend);
    return _ret;
}

AppId_t __thiscall winISteamFriends_SteamFriends014_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    AppId_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendCoplayGame(_this->u_iface, steamIDFriend);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_JoinClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_LeaveClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetClanChatMemberCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends014_GetChatMemberByIndex(_this->u_iface, steamIDClan, iUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_SendClanChatMessage(_this->u_iface, steamIDClanChat, pchText);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetClanChatMessage(_this->u_iface, steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_IsClanChatAdmin(_this->u_iface, steamIDClanChat, steamIDUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_OpenClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_CloseClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_SetListenForFriendsMessages(struct w_steam_iface *_this, bool bInterceptEnabled)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_SetListenForFriendsMessages(_this->u_iface, bInterceptEnabled);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends014_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_ReplyToFriendMessage(_this->u_iface, steamIDFriend, pchMsgToSend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends014_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFriendMessage(_this->u_iface, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_GetFollowerCount(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_IsFollowing(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends014_EnumerateFollowingList(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends014_EnumerateFollowingList(_this->u_iface, unStartIndex);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends014,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetPlayerNickname)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends014_EnumerateFollowingList)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends014_vtable, 64, "SteamFriends014");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends015.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendSteamLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetPlayerNickname, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupMembersCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendsGroupMembersList, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanActivityCounts, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_DownloadClanActivityCounts, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlayToStore, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetUserRestrictions, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ClearRichPresence, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendRichPresence, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_RequestFriendRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_InviteUserToGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetCoplayFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetCoplayFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendCoplayTime, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendCoplayGame, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_JoinClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_LeaveClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanChatMemberCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetChatMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SendClanChatMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetClanChatMessage, 32)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsClanChatAdmin, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_OpenClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_CloseClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_SetListenForFriendsMessages, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_ReplyToFriendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFriendMessage, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_GetFollowerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsFollowing, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_EnumerateFollowingList, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsClanPublic, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends015_IsClanOfficialGameGroup, 12)

const char * __thiscall winISteamFriends_SteamFriends015_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetPersonaName(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_SetPersonaName(_this->u_iface, pchPersonaName);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends015_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends015_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends015_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetFriendSteamLevel(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendSteamLevel(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetPlayerNickname(struct w_steam_iface *_this, CSteamID steamIDPlayer)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetPlayerNickname(_this->u_iface, steamIDPlayer);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendsGroupCount(_this->u_iface);
    return _ret;
}

FriendsGroupID_t __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex(struct w_steam_iface *_this, int iFG)
{
    FriendsGroupID_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex(_this->u_iface, iFG);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupName(struct w_steam_iface *_this, FriendsGroupID_t friendsGroupID)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendsGroupName(_this->u_iface, friendsGroupID);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupMembersCount(struct w_steam_iface *_this, FriendsGroupID_t friendsGroupID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendsGroupMembersCount(_this->u_iface, friendsGroupID);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupMembersList(struct w_steam_iface *_this, FriendsGroupID_t friendsGroupID, CSteamID *pOutSteamIDMembers, int nMembersCount)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_GetFriendsGroupMembersList(_this->u_iface, friendsGroupID, pOutSteamIDMembers, nMembersCount);
}

bool __thiscall winISteamFriends_SteamFriends015_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends015_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetClanActivityCounts(_this->u_iface, steamIDClan, pnOnline, pnInGame, pnChatting);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int cClansToRequest)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_DownloadClanActivityCounts(_this->u_iface, psteamIDClans, cClansToRequest);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends015_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends015_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage(_this->u_iface, pchURL);
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlayToStore(_this->u_iface, nAppID, eFlag);
}

void __thiscall winISteamFriends_SteamFriends015_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends015_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends015_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends015_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends015_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetUserRestrictions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_SetRichPresence(_this->u_iface, pchKey, pchValue);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends015_ClearRichPresence(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_ClearRichPresence(_this->u_iface);
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendRichPresence(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int iKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex(_this->u_iface, steamIDFriend, iKey);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends015_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends015_RequestFriendRichPresence(_this->u_iface, steamIDFriend);
}

bool __thiscall winISteamFriends_SteamFriends015_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_InviteUserToGame(_this->u_iface, steamIDFriend, pchConnectString);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetCoplayFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends015_GetCoplayFriend(_this->u_iface, iCoplayFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendCoplayTime(_this->u_iface, steamIDFriend);
    return _ret;
}

AppId_t __thiscall winISteamFriends_SteamFriends015_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    AppId_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendCoplayGame(_this->u_iface, steamIDFriend);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_JoinClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_LeaveClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetClanChatMemberCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends015_GetChatMemberByIndex(_this->u_iface, steamIDClan, iUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_SendClanChatMessage(_this->u_iface, steamIDClanChat, pchText);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetClanChatMessage(_this->u_iface, steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_IsClanChatAdmin(_this->u_iface, steamIDClanChat, steamIDUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_OpenClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_CloseClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_SetListenForFriendsMessages(struct w_steam_iface *_this, bool bInterceptEnabled)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_SetListenForFriendsMessages(_this->u_iface, bInterceptEnabled);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_ReplyToFriendMessage(_this->u_iface, steamIDFriend, pchMsgToSend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends015_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFriendMessage(_this->u_iface, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_GetFollowerCount(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_IsFollowing(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends015_EnumerateFollowingList(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_EnumerateFollowingList(_this->u_iface, unStartIndex);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_IsClanPublic(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_IsClanPublic(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends015_IsClanOfficialGameGroup(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends015_IsClanOfficialGameGroup(_this->u_iface, steamIDClan);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends015,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendSteamLevel)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetPlayerNickname)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupMembersCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendsGroupMembersList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_EnumerateFollowingList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsClanPublic)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends015_IsClanOfficialGameGroup)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends015_vtable, 72, "SteamFriends015");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamFriends_SteamFriends017.h"

DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetPersonaName, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetPersonaName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetPersonaState, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendRelationship, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendPersonaState, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendPersonaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendGamePlayed, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendPersonaNameHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendSteamLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetPlayerNickname, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupName, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupMembersCount, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendsGroupMembersList, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_HasFriend, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanByIndex, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanName, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanTag, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanActivityCounts, 24)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_DownloadClanActivityCounts, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendCountFromSource, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendFromSourceByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsUserInSource, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetInGameVoiceSpeaking, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlay, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayToUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayToStore, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetPlayedWith, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetSmallFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetMediumFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetLargeFriendAvatar, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RequestUserInformation, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RequestClanOfficerList, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanOwner, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanOfficerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanOfficerByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetUserRestrictions, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ClearRichPresence, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendRichPresence, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RequestFriendRichPresence, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_InviteUserToGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetCoplayFriendCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetCoplayFriend, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendCoplayTime, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendCoplayGame, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_JoinClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_LeaveClanChatRoom, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanChatMemberCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetChatMemberByIndex, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SendClanChatMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetClanChatMessage, 32)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsClanChatAdmin, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_OpenClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_CloseClanChatWindowInSteam, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_SetListenForFriendsMessages, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ReplyToFriendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFriendMessage, 28)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetFollowerCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsFollowing, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_EnumerateFollowingList, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsClanPublic, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_IsClanOfficialGameGroup, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages, 4)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString, 8)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_RequestEquippedProfileItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_BHasEquippedProfileItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetProfileItemPropertyString, 20)
DEFINE_THISCALL_WRAPPER(winISteamFriends_SteamFriends017_GetProfileItemPropertyUint, 20)

const char * __thiscall winISteamFriends_SteamFriends017_GetPersonaName(struct w_steam_iface *_this)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetPersonaName(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_SetPersonaName(_this->u_iface, pchPersonaName);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends017_GetPersonaState(struct w_steam_iface *_this)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetPersonaState(_this->u_iface);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetFriendCount(struct w_steam_iface *_this, int iFriendFlags)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendCount(_this->u_iface, iFriendFlags);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iFriend, int iFriendFlags)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends017_GetFriendByIndex(_this->u_iface, iFriend, iFriendFlags);
    return _ret;
}

EFriendRelationship __thiscall winISteamFriends_SteamFriends017_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EFriendRelationship _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendRelationship(_this->u_iface, steamIDFriend);
    return _ret;
}

EPersonaState __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    EPersonaState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendPersonaState(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendPersonaName(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendGamePlayed(_this->u_iface, steamIDFriend, pFriendGameInfo);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int iPersonaName)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory(_this->u_iface, steamIDFriend, iPersonaName);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetFriendSteamLevel(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendSteamLevel(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetPlayerNickname(struct w_steam_iface *_this, CSteamID steamIDPlayer)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetPlayerNickname(_this->u_iface, steamIDPlayer);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendsGroupCount(_this->u_iface);
    return _ret;
}

FriendsGroupID_t __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex(struct w_steam_iface *_this, int iFG)
{
    FriendsGroupID_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex(_this->u_iface, iFG);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupName(struct w_steam_iface *_this, FriendsGroupID_t friendsGroupID)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendsGroupName(_this->u_iface, friendsGroupID);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupMembersCount(struct w_steam_iface *_this, FriendsGroupID_t friendsGroupID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount(_this->u_iface, friendsGroupID);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupMembersList(struct w_steam_iface *_this, FriendsGroupID_t friendsGroupID, CSteamID *pOutSteamIDMembers, int nMembersCount)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList(_this->u_iface, friendsGroupID, pOutSteamIDMembers, nMembersCount);
}

bool __thiscall winISteamFriends_SteamFriends017_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int iFriendFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_HasFriend(_this->u_iface, steamIDFriend, iFriendFlags);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetClanCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetClanCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int iClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends017_GetClanByIndex(_this->u_iface, iClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetClanName(_this->u_iface, steamIDClan);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetClanTag(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetClanActivityCounts(_this->u_iface, steamIDClan, pnOnline, pnInGame, pnChatting);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int cClansToRequest)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_DownloadClanActivityCounts(_this->u_iface, psteamIDClans, cClansToRequest);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendCountFromSource(_this->u_iface, steamIDSource);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int iFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex(_this->u_iface, steamIDSource, iFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_IsUserInSource(_this->u_iface, steamIDUser, steamIDSource);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends017_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, bool bSpeaking)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking(_this->u_iface, steamIDUser, bSpeaking);
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlay(_this->u_iface, pchDialog);
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser(_this->u_iface, pchDialog, steamID);
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL, EActivateGameOverlayToWebPageMode eMode)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage(_this->u_iface, pchURL, eMode);
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToStore(struct w_steam_iface *_this, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore(_this->u_iface, nAppID, eFlag);
}

void __thiscall winISteamFriends_SteamFriends017_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_SetPlayedWith(_this->u_iface, steamIDUserPlayedWith);
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog(_this->u_iface, steamIDLobby);
}

int __thiscall winISteamFriends_SteamFriends017_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetSmallFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetMediumFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetLargeFriendAvatar(_this->u_iface, steamIDFriend);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, bool bRequireNameOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_RequestUserInformation(_this->u_iface, steamIDUser, bRequireNameOnly);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_RequestClanOfficerList(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends017_GetClanOwner(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetClanOfficerCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iOfficer)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends017_GetClanOfficerByIndex(_this->u_iface, steamIDClan, iOfficer);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends017_GetUserRestrictions(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetUserRestrictions(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_SetRichPresence(_this->u_iface, pchKey, pchValue);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends017_ClearRichPresence(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ClearRichPresence(_this->u_iface);
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendRichPresence(_this->u_iface, steamIDFriend, pchKey);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount(_this->u_iface, steamIDFriend);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int iKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex(_this->u_iface, steamIDFriend, iKey);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends017_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_RequestFriendRichPresence(_this->u_iface, steamIDFriend);
}

bool __thiscall winISteamFriends_SteamFriends017_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_InviteUserToGame(_this->u_iface, steamIDFriend, pchConnectString);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetCoplayFriendCount(_this->u_iface);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int iCoplayFriend)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends017_GetCoplayFriend(_this->u_iface, iCoplayFriend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendCoplayTime(_this->u_iface, steamIDFriend);
    return _ret;
}

AppId_t __thiscall winISteamFriends_SteamFriends017_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    AppId_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendCoplayGame(_this->u_iface, steamIDFriend);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_JoinClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_LeaveClanChatRoom(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetClanChatMemberCount(_this->u_iface, steamIDClan);
    return _ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int iUser)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamFriends_SteamFriends017_GetChatMemberByIndex(_this->u_iface, steamIDClan, iUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_SendClanChatMessage(_this->u_iface, steamIDClanChat, pchText);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *psteamidChatter)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetClanChatMessage(_this->u_iface, steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_IsClanChatAdmin(_this->u_iface, steamIDClanChat, steamIDUser);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam(_this->u_iface, steamIDClanChat);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_SetListenForFriendsMessages(struct w_steam_iface *_this, bool bInterceptEnabled)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_SetListenForFriendsMessages(_this->u_iface, bInterceptEnabled);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_ReplyToFriendMessage(_this->u_iface, steamIDFriend, pchMsgToSend);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFriendMessage(_this->u_iface, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetFollowerCount(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_IsFollowing(_this->u_iface, steamID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_EnumerateFollowingList(struct w_steam_iface *_this, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_EnumerateFollowingList(_this->u_iface, unStartIndex);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_IsClanPublic(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_IsClanPublic(_this->u_iface, steamIDClan);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_IsClanOfficialGameGroup(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup(_this->u_iface, steamIDClan);
    return _ret;
}

int __thiscall winISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages(struct w_steam_iface *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages(_this->u_iface);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog(_this->u_iface, steamIDLobby);
}

bool __thiscall winISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser(struct w_steam_iface *_this, const char *pchProtocol)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser(_this->u_iface, pchProtocol);
    return _ret;
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString(struct w_steam_iface *_this, const char *pchConnectString)
{
    TRACE("%p\n", _this);
    cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString(_this->u_iface, pchConnectString);
}

SteamAPICall_t __thiscall winISteamFriends_SteamFriends017_RequestEquippedProfileItems(struct w_steam_iface *_this, CSteamID steamID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_RequestEquippedProfileItems(_this->u_iface, steamID);
    return _ret;
}

bool __thiscall winISteamFriends_SteamFriends017_BHasEquippedProfileItem(struct w_steam_iface *_this, CSteamID steamID, ECommunityProfileItemType itemType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_BHasEquippedProfileItem(_this->u_iface, steamID, itemType);
    return _ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetProfileItemPropertyString(struct w_steam_iface *_this, CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetProfileItemPropertyString(_this->u_iface, steamID, itemType, prop);
    return _ret;
}

uint32 __thiscall winISteamFriends_SteamFriends017_GetProfileItemPropertyUint(struct w_steam_iface *_this, CSteamID steamID, ECommunityProfileItemType itemType, ECommunityProfileItemProperty prop)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamFriends_SteamFriends017_GetProfileItemPropertyUint(_this->u_iface, steamID, itemType, prop);
    return _ret;
}

extern vtable_ptr winISteamFriends_SteamFriends017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamFriends_SteamFriends017,
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendRelationship)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendPersonaState)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendPersonaName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendGamePlayed)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendPersonaNameHistory)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendSteamLevel)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetPlayerNickname)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupMembersCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendsGroupMembersList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_HasFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanName)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanTag)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_DownloadClanActivityCounts)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendCountFromSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendFromSourceByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsUserInSource)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetInGameVoiceSpeaking)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlay)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayToUser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayToStore)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetPlayedWith)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetSmallFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetMediumFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetLargeFriendAvatar)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RequestUserInformation)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RequestClanOfficerList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanOwner)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanOfficerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanOfficerByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetUserRestrictions)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ClearRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RequestFriendRichPresence)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_InviteUserToGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetCoplayFriendCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetCoplayFriend)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendCoplayTime)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendCoplayGame)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_JoinClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_LeaveClanChatRoom)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanChatMemberCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetChatMemberByIndex)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SendClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetClanChatMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsClanChatAdmin)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_OpenClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_CloseClanChatWindowInSteam)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_SetListenForFriendsMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ReplyToFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFriendMessage)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetFollowerCount)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsFollowing)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_EnumerateFollowingList)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsClanPublic)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_IsClanOfficialGameGroup)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_RequestEquippedProfileItems)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_BHasEquippedProfileItem)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetProfileItemPropertyString)
        VTABLE_ADD_FUNC(winISteamFriends_SteamFriends017_GetProfileItemPropertyUint)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamFriends_SteamFriends017(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends017_vtable, 80, "SteamFriends017");
    r->u_iface = u_iface;
    return r;
}

