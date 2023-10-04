/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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
    struct ISteamFriends_SteamFriends001_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends001_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends001_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends001_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends001_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetPersonaState, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends001_SetPersonaState(struct w_steam_iface *_this, uint32_t ePersonaState)
{
    struct ISteamFriends_SteamFriends001_SetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .ePersonaState = ePersonaState,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_SetPersonaState, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends001_AddFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends001_AddFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_AddFriend, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends001_RemoveFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends001_RemoveFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_RemoveFriend, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends001_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends001_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_HasFriend, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends001_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends001_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends001_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendPersonaState, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t *pnGameID, uint32_t *punGameIP, uint16_t *pusGamePort)
{
    struct ISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pnGameID = pnGameID,
        .punGameIP = punGameIP,
        .pusGamePort = pusGamePort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends001_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendPersonaName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends001_AddFriendByName(struct w_steam_iface *_this, const char *pchEmailOrAccountName)
{
    struct ISteamFriends_SteamFriends001_AddFriendByName_params params =
    {
        .linux_side = _this->u_iface,
        .pchEmailOrAccountName = pchEmailOrAccountName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_AddFriendByName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends001_GetFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends001_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends001_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends001_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendByIndex, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends001_SendMsgToFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, uint32_t eChatEntryType, const char *pchMsgBody)
{
    struct ISteamFriends_SteamFriends001_SendMsgToFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .eChatEntryType = eChatEntryType,
        .pchMsgBody = pchMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_SendMsgToFriend, &params );
}

void __thiscall winISteamFriends_SteamFriends001_SetFriendRegValue(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends001_SetFriendRegValue_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_SetFriendRegValue, &params );
}

const char * __thiscall winISteamFriends_SteamFriends001_GetFriendRegValue(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends001_GetFriendRegValue_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendRegValue, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends001_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends001_GetChatMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iChatID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends001_GetChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iChatID = iChatID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends001_SendMsgToFriend_2(struct w_steam_iface *_this, CSteamID steamIDFriend, uint32_t eChatEntryType, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamFriends_SteamFriends001_SendMsgToFriend_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .eChatEntryType = eChatEntryType,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_SendMsgToFriend_2, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends001_SetChatHistoryStart(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iChatID)
{
    struct ISteamFriends_SteamFriends001_SetChatHistoryStart_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iChatID = iChatID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_SetChatHistoryStart, &params );
}

void __thiscall winISteamFriends_SteamFriends001_ClearChatHistory(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends001_ClearChatHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_ClearChatHistory, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends001_InviteFriendByEmail(struct w_steam_iface *_this, const char *pchEmailAccount)
{
    struct ISteamFriends_SteamFriends001_InviteFriendByEmail_params params =
    {
        .linux_side = _this->u_iface,
        .pchEmailAccount = pchEmailAccount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_InviteFriendByEmail, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends001_GetBlockedFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends001_GetBlockedFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetBlockedFriendCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends001_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64_t *pulGameID, uint32_t *punGameIP, uint16_t *pusGamePort)
{
    struct ISteamFriends_SteamFriends001_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pulGameID = pulGameID,
        .punGameIP = punGameIP,
        .pusGamePort = pusGamePort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendGamePlayed, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends001_GetFriendGamePlayed2(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64_t *pulGameID, uint32_t *punGameIP, uint16_t *pusGamePort, uint16_t *pusQueryPort)
{
    struct ISteamFriends_SteamFriends001_GetFriendGamePlayed2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pulGameID = pulGameID,
        .punGameIP = punGameIP,
        .pusGamePort = pusGamePort,
        .pusQueryPort = pusQueryPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends001_GetFriendGamePlayed2, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends001_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends001, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends001_vtable, 27, "SteamFriends001");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends002_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends002_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends002_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends002_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends002_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetPersonaState, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends002_SetPersonaState(struct w_steam_iface *_this, uint32_t ePersonaState)
{
    struct ISteamFriends_SteamFriends002_SetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .ePersonaState = ePersonaState,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_SetPersonaState, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends002_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends002_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends002_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends002_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends002_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends002_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends002_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends002_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends002_SetFriendRegValue(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends002_SetFriendRegValue_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_SetFriendRegValue, &params );
}

const char * __thiscall winISteamFriends_SteamFriends002_GetFriendRegValue(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends002_GetFriendRegValue_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendRegValue, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends002_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64_t *pulGameID, uint32_t *punGameIP, uint16_t *pusGamePort, uint16_t *pusQueryPort)
{
    struct ISteamFriends_SteamFriends002_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pulGameID = pulGameID,
        .punGameIP = punGameIP,
        .pusGamePort = pusGamePort,
        .pusQueryPort = pusQueryPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends002_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends002_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends002_AddFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends002_AddFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_AddFriend, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends002_RemoveFriend(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends002_RemoveFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_RemoveFriend, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends002_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends002_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends002_AddFriendByName(struct w_steam_iface *_this, const char *pchEmailOrAccountName)
{
    struct ISteamFriends_SteamFriends002_AddFriendByName_params params =
    {
        .linux_side = _this->u_iface,
        .pchEmailOrAccountName = pchEmailOrAccountName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_AddFriendByName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends002_InviteFriendByEmail(struct w_steam_iface *_this, const char *pchEmailAccount)
{
    struct ISteamFriends_SteamFriends002_InviteFriendByEmail_params params =
    {
        .linux_side = _this->u_iface,
        .pchEmailAccount = pchEmailAccount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_InviteFriendByEmail, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends002_GetChatMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iChatID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends002_GetChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iChatID = iChatID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends002_SendMsgToFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, uint32_t eChatEntryType, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamFriends_SteamFriends002_SendMsgToFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .eChatEntryType = eChatEntryType,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_SendMsgToFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetChatIDOfChatHistoryStart, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends002_SetChatHistoryStart(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iChatID)
{
    struct ISteamFriends_SteamFriends002_SetChatHistoryStart_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iChatID = iChatID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_SetChatHistoryStart, &params );
}

void __thiscall winISteamFriends_SteamFriends002_ClearChatHistory(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends002_ClearChatHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_ClearChatHistory, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends002_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends002_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends002_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends002_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends002_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends002_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetClanName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends002_InviteFriendToClan(struct w_steam_iface *_this, CSteamID steamIDFriend, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends002_InviteFriendToClan_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_InviteFriendToClan, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends002_AcknowledgeInviteToClan(struct w_steam_iface *_this, CSteamID steamIDClan, int8_t bAcceptOrDenyClanInvite)
{
    struct ISteamFriends_SteamFriends002_AcknowledgeInviteToClan_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
        .bAcceptOrDenyClanInvite = bAcceptOrDenyClanInvite,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_AcknowledgeInviteToClan, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends002_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends002_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends002_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends002_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends002_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends002_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends002, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends002_vtable, 30, "SteamFriends002");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends003_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends003_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends003_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends003_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends003_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends003_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends003_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends003_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends003_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends003_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends003_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends003_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends003_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendPersonaName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends003_GetFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends003_GetFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends003_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64_t *pulGameID, uint32_t *punGameIP, uint16_t *pusGamePort, uint16_t *pusQueryPort)
{
    struct ISteamFriends_SteamFriends003_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pulGameID = pulGameID,
        .punGameIP = punGameIP,
        .pusGamePort = pusGamePort,
        .pusQueryPort = pusQueryPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends003_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends003_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends003_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends003_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends003_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends003_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends003_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends003_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends003_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends003_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetClanName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends003_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends003_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends003_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends003_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends003_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends003_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends003_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends003_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends003_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends003_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends003_ActivateGameOverlay, &params );
}

extern vtable_ptr winISteamFriends_SteamFriends003_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends003, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends003_vtable, 20, "SteamFriends003");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends004_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends004_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends004_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends004_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends004_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends004_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends004_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends004_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends004_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends004_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends004_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends004_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends004_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendPersonaName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends004_GetFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t eAvatarSize)
{
    struct ISteamFriends_SteamFriends004_GetFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .eAvatarSize = eAvatarSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends004_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, uint64_t *pulGameID, uint32_t *punGameIP, uint16_t *pusGamePort, uint16_t *pusQueryPort)
{
    struct ISteamFriends_SteamFriends004_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pulGameID = pulGameID,
        .punGameIP = punGameIP,
        .pusGamePort = pusGamePort,
        .pusQueryPort = pusQueryPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends004_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends004_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends004_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends004_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends004_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends004_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends004_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends004_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends004_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends004_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetClanName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends004_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends004_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends004_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends004_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends004_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends004_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends004_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends004_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends004_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends004_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends004_ActivateGameOverlay, &params );
}

extern vtable_ptr winISteamFriends_SteamFriends004_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends004, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends004_vtable, 20, "SteamFriends004");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends005_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends005_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends005_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends005_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends005_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends005_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends005_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends005_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends005_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends005_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends005_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends005_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends005_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendPersonaName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends005_GetFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t eAvatarSize)
{
    struct ISteamFriends_SteamFriends005_GetFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .eAvatarSize = eAvatarSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends005_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends005_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends005_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends005_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends005_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends005_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends005_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends005_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends005_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends005_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends005_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends005_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetClanName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends005_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends005_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends005_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends005_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends005_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends005_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends005_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends005_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends005_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends005_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends005_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamFriends_SteamFriends005_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends005_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends005_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends005_SetPlayedWith, &params );
}

extern vtable_ptr winISteamFriends_SteamFriends005_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends005, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends005_vtable, 24, "SteamFriends005");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends006_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends006_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends006_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends006_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends006_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends006_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends006_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends006_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends006_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends006_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends006_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends006_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends006_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendPersonaName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends006_GetFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t eAvatarSize)
{
    struct ISteamFriends_SteamFriends006_GetFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .eAvatarSize = eAvatarSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends006_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends006_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends006_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends006_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends006_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends006_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends006_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends006_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends006_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends006_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends006_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends006_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends006_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends006_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetClanTag, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends006_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends006_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends006_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends006_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends006_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends006_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends006_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends006_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends006_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends006_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog, &params );
}

extern vtable_ptr winISteamFriends_SteamFriends006_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends006, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends006_vtable, 26, "SteamFriends006");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends007_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends007_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends007_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends007_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends007_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends007_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends007_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends007_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends007_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends007_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends007_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends007_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends007_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends007_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends007_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends007_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends007_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends007_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends007_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends007_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends007_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends007_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends007_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends007_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends007_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends007_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends007_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetClanTag, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends007_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends007_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends007_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends007_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends007_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends007_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends007_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends007_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends007_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends007_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends007_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends007_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends007_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends007_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends007_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends007_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends007_GetLargeFriendAvatar, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends007_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends007, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends007_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends007_vtable, 28, "SteamFriends007");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends008_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends008_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends008_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends008_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends008_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends008_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends008_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends008_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends008_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends008_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends008_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends008_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends008_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends008_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends008_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends008_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends008_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends008_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends008_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends008_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends008_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends008_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends008_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends008_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends008_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetClanTag, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends008_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends008_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends008_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends008_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends008_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends008_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends008_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends008_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends008_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends008_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends008_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends008_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends008_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends008_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends008_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends008_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends008_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends008_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends008_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends008_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends008_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends008_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends008_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends008_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends008_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends008_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends008_GetUserRestrictions, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends008_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends008, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends008_vtable, 34, "SteamFriends008");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends009_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends009_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends009_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends009_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends009_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends009_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends009_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends009_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends009_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends009_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends009_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends009_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends009_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends009_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends009_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends009_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends009_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetClanTag, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends009_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends009_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends009_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends009_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends009_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends009_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends009_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends009_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends009_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends009_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends009_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends009_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends009_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends009_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends009_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends009_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends009_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetUserRestrictions, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends009_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends009_SetRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_SetRichPresence, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends009_ClearRichPresence(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends009_ClearRichPresence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_ClearRichPresence, &params );
}

const char * __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends009_GetFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendRichPresence, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iKey)
{
    struct ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iKey = iKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends009_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends009_InviteUserToGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_InviteUserToGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends009_GetCoplayFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetCoplayFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends009_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int32_t iCoplayFriend)
{
    struct ISteamFriends_SteamFriends009_GetCoplayFriend_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iCoplayFriend = iCoplayFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetCoplayFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends009_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetFriendCoplayTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendCoplayTime, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends009_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends009_GetFriendCoplayGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends009_GetFriendCoplayGame, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends009_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends009, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends009_vtable, 44, "SteamFriends009");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends010_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends010_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends010_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends010_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends010_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends010_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends010_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends010_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends010_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends010_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends010_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends010_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends010_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends010_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends010_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting)
{
    struct ISteamFriends_SteamFriends010_GetClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
        .pnOnline = pnOnline,
        .pnInGame = pnInGame,
        .pnChatting = pnChatting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanActivityCounts, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends010_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int32_t cClansToRequest)
{
    struct ISteamFriends_SteamFriends010_DownloadClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .psteamIDClans = psteamIDClans,
        .cClansToRequest = cClansToRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_DownloadClanActivityCounts, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends010_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends010_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends010_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends010_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends010_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends010_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends010_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends010_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends010_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends010_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends010_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends010_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends010_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends010_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends010_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetUserRestrictions, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends010_SetRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_SetRichPresence, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends010_ClearRichPresence(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends010_ClearRichPresence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_ClearRichPresence, &params );
}

const char * __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends010_GetFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendRichPresence, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyCount, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iKey)
{
    struct ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iKey = iKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendRichPresenceKeyByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends010_InviteUserToGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_InviteUserToGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends010_GetCoplayFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetCoplayFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int32_t iCoplayFriend)
{
    struct ISteamFriends_SteamFriends010_GetCoplayFriend_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iCoplayFriend = iCoplayFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetCoplayFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetFriendCoplayTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendCoplayTime, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends010_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends010_GetFriendCoplayGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendCoplayGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends010_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends010_JoinClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_JoinClanChatRoom, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends010_LeaveClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_LeaveClanChatRoom, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends010_GetClanChatMemberCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanChatMemberCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends010_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iUser)
{
    struct ISteamFriends_SteamFriends010_GetChatMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iUser = iUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetChatMemberByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    struct ISteamFriends_SteamFriends010_SendClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .pchText = pchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_SendClanChatMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, uint32_t *_e, CSteamID *_f)
{
    struct ISteamFriends_SteamFriends010_GetClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .iMessage = iMessage,
        .prgchText = prgchText,
        .cchTextMax = cchTextMax,
        ._e = _e,
        ._f = _f,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetClanChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    struct ISteamFriends_SteamFriends010_IsClanChatAdmin_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_IsClanChatAdmin, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_IsClanChatWindowOpenInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends010_OpenClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_OpenClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends010_CloseClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_CloseClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_SetListenForFriendsMessages(struct w_steam_iface *_this, int8_t bInterceptEnabled)
{
    struct ISteamFriends_SteamFriends010_SetListenForFriendsMessages_params params =
    {
        .linux_side = _this->u_iface,
        .bInterceptEnabled = bInterceptEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_SetListenForFriendsMessages, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends010_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    struct ISteamFriends_SteamFriends010_ReplyToFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchMsgToSend = pchMsgToSend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_ReplyToFriendMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends010_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends010_GetFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iMessageID = iMessageID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends010_GetFriendMessage, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends010_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends010, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends010_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends010_vtable, 59, "SteamFriends010");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends011_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetPersonaName, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends011_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends011_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_SetPersonaName, &params );
}

uint32_t __thiscall winISteamFriends_SteamFriends011_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends011_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends011_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends011_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends011_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends011_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends011_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends011_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends011_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends011_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends011_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends011_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting)
{
    struct ISteamFriends_SteamFriends011_GetClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
        .pnOnline = pnOnline,
        .pnInGame = pnInGame,
        .pnChatting = pnChatting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanActivityCounts, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends011_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int32_t cClansToRequest)
{
    struct ISteamFriends_SteamFriends011_DownloadClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .psteamIDClans = psteamIDClans,
        .cClansToRequest = cClansToRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_DownloadClanActivityCounts, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends011_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends011_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends011_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends011_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends011_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends011_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends011_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamFriends_SteamFriends011_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends011_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends011_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends011_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends011_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends011_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends011_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends011_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends011_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends011_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends011_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetUserRestrictions, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends011_SetRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_SetRichPresence, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends011_ClearRichPresence(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends011_ClearRichPresence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_ClearRichPresence, &params );
}

const char * __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends011_GetFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendRichPresence, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iKey)
{
    struct ISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iKey = iKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends011_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_RequestFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_RequestFriendRichPresence, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends011_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends011_InviteUserToGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_InviteUserToGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends011_GetCoplayFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetCoplayFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int32_t iCoplayFriend)
{
    struct ISteamFriends_SteamFriends011_GetCoplayFriend_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iCoplayFriend = iCoplayFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetCoplayFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetFriendCoplayTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendCoplayTime, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends011_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends011_GetFriendCoplayGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendCoplayGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends011_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends011_JoinClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_JoinClanChatRoom, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends011_LeaveClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_LeaveClanChatRoom, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends011_GetClanChatMemberCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanChatMemberCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends011_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iUser)
{
    struct ISteamFriends_SteamFriends011_GetChatMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iUser = iUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetChatMemberByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    struct ISteamFriends_SteamFriends011_SendClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .pchText = pchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_SendClanChatMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, uint32_t *_e, CSteamID *_f)
{
    struct ISteamFriends_SteamFriends011_GetClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .iMessage = iMessage,
        .prgchText = prgchText,
        .cchTextMax = cchTextMax,
        ._e = _e,
        ._f = _f,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetClanChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    struct ISteamFriends_SteamFriends011_IsClanChatAdmin_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_IsClanChatAdmin, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends011_OpenClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_OpenClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends011_CloseClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_CloseClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_SetListenForFriendsMessages(struct w_steam_iface *_this, int8_t bInterceptEnabled)
{
    struct ISteamFriends_SteamFriends011_SetListenForFriendsMessages_params params =
    {
        .linux_side = _this->u_iface,
        .bInterceptEnabled = bInterceptEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_SetListenForFriendsMessages, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends011_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    struct ISteamFriends_SteamFriends011_ReplyToFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchMsgToSend = pchMsgToSend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_ReplyToFriendMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends011_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends011_GetFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iMessageID = iMessageID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFriendMessage, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends011_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends011_GetFollowerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_GetFollowerCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends011_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends011_IsFollowing_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_IsFollowing, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends011_EnumerateFollowingList(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamFriends_SteamFriends011_EnumerateFollowingList_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends011_EnumerateFollowingList, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends011_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends011, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends011_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends011_vtable, 63, "SteamFriends011");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends012_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetPersonaName, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends012_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends012_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_SetPersonaName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends012_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends012_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends012_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends012_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends012_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends012_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends012_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends012_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends012_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends012_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends012_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends012_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting)
{
    struct ISteamFriends_SteamFriends012_GetClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
        .pnOnline = pnOnline,
        .pnInGame = pnInGame,
        .pnChatting = pnChatting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanActivityCounts, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends012_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int32_t cClansToRequest)
{
    struct ISteamFriends_SteamFriends012_DownloadClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .psteamIDClans = psteamIDClans,
        .cClansToRequest = cClansToRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_DownloadClanActivityCounts, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends012_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends012_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends012_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends012_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends012_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends012_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends012_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends012_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends012_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends012_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends012_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends012_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends012_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends012_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends012_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetUserRestrictions, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends012_SetRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_SetRichPresence, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends012_ClearRichPresence(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends012_ClearRichPresence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_ClearRichPresence, &params );
}

const char * __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends012_GetFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendRichPresence, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iKey)
{
    struct ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iKey = iKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends012_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_RequestFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_RequestFriendRichPresence, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends012_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends012_InviteUserToGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_InviteUserToGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends012_GetCoplayFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetCoplayFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int32_t iCoplayFriend)
{
    struct ISteamFriends_SteamFriends012_GetCoplayFriend_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iCoplayFriend = iCoplayFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetCoplayFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetFriendCoplayTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendCoplayTime, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends012_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends012_GetFriendCoplayGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendCoplayGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends012_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends012_JoinClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_JoinClanChatRoom, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends012_LeaveClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_LeaveClanChatRoom, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends012_GetClanChatMemberCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanChatMemberCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends012_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iUser)
{
    struct ISteamFriends_SteamFriends012_GetChatMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iUser = iUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetChatMemberByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    struct ISteamFriends_SteamFriends012_SendClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .pchText = pchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_SendClanChatMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, uint32_t *_e, CSteamID *_f)
{
    struct ISteamFriends_SteamFriends012_GetClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .iMessage = iMessage,
        .prgchText = prgchText,
        .cchTextMax = cchTextMax,
        ._e = _e,
        ._f = _f,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetClanChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    struct ISteamFriends_SteamFriends012_IsClanChatAdmin_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_IsClanChatAdmin, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends012_OpenClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_OpenClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends012_CloseClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_CloseClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_SetListenForFriendsMessages(struct w_steam_iface *_this, int8_t bInterceptEnabled)
{
    struct ISteamFriends_SteamFriends012_SetListenForFriendsMessages_params params =
    {
        .linux_side = _this->u_iface,
        .bInterceptEnabled = bInterceptEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_SetListenForFriendsMessages, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends012_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    struct ISteamFriends_SteamFriends012_ReplyToFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchMsgToSend = pchMsgToSend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_ReplyToFriendMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends012_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends012_GetFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iMessageID = iMessageID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFriendMessage, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends012_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends012_GetFollowerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_GetFollowerCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends012_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends012_IsFollowing_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_IsFollowing, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends012_EnumerateFollowingList(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamFriends_SteamFriends012_EnumerateFollowingList_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends012_EnumerateFollowingList, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends012_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends012, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends012_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends012_vtable, 63, "SteamFriends012");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends013_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetPersonaName, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends013_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends013_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_SetPersonaName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends013_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends013_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends013_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends013_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends013_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends013_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends013_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends013_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends013_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends013_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends013_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends013_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting)
{
    struct ISteamFriends_SteamFriends013_GetClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
        .pnOnline = pnOnline,
        .pnInGame = pnInGame,
        .pnChatting = pnChatting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanActivityCounts, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends013_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int32_t cClansToRequest)
{
    struct ISteamFriends_SteamFriends013_DownloadClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .psteamIDClans = psteamIDClans,
        .cClansToRequest = cClansToRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_DownloadClanActivityCounts, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends013_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends013_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends013_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends013_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends013_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID, uint32_t eFlag)
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .eFlag = eFlag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends013_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends013_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends013_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends013_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends013_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends013_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends013_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends013_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends013_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends013_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetUserRestrictions, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends013_SetRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_SetRichPresence, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends013_ClearRichPresence(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends013_ClearRichPresence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_ClearRichPresence, &params );
}

const char * __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends013_GetFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendRichPresence, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iKey)
{
    struct ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iKey = iKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends013_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_RequestFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_RequestFriendRichPresence, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends013_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends013_InviteUserToGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_InviteUserToGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends013_GetCoplayFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetCoplayFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int32_t iCoplayFriend)
{
    struct ISteamFriends_SteamFriends013_GetCoplayFriend_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iCoplayFriend = iCoplayFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetCoplayFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetFriendCoplayTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendCoplayTime, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends013_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends013_GetFriendCoplayGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendCoplayGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends013_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends013_JoinClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_JoinClanChatRoom, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends013_LeaveClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_LeaveClanChatRoom, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends013_GetClanChatMemberCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanChatMemberCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends013_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iUser)
{
    struct ISteamFriends_SteamFriends013_GetChatMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iUser = iUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetChatMemberByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    struct ISteamFriends_SteamFriends013_SendClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .pchText = pchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_SendClanChatMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, uint32_t *_e, CSteamID *_f)
{
    struct ISteamFriends_SteamFriends013_GetClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .iMessage = iMessage,
        .prgchText = prgchText,
        .cchTextMax = cchTextMax,
        ._e = _e,
        ._f = _f,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetClanChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    struct ISteamFriends_SteamFriends013_IsClanChatAdmin_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_IsClanChatAdmin, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends013_OpenClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_OpenClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends013_CloseClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_CloseClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_SetListenForFriendsMessages(struct w_steam_iface *_this, int8_t bInterceptEnabled)
{
    struct ISteamFriends_SteamFriends013_SetListenForFriendsMessages_params params =
    {
        .linux_side = _this->u_iface,
        .bInterceptEnabled = bInterceptEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_SetListenForFriendsMessages, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends013_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    struct ISteamFriends_SteamFriends013_ReplyToFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchMsgToSend = pchMsgToSend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_ReplyToFriendMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends013_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends013_GetFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iMessageID = iMessageID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFriendMessage, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends013_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends013_GetFollowerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_GetFollowerCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends013_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends013_IsFollowing_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_IsFollowing, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends013_EnumerateFollowingList(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamFriends_SteamFriends013_EnumerateFollowingList_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends013_EnumerateFollowingList, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends013_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends013, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends013_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends013_vtable, 63, "SteamFriends013");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends014_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetPersonaName, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends014_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends014_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_SetPersonaName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends014_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends014_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends014_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends014_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends014_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends014_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends014_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetPlayerNickname(struct w_steam_iface *_this, CSteamID steamIDPlayer)
{
    struct ISteamFriends_SteamFriends014_GetPlayerNickname_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDPlayer = steamIDPlayer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetPlayerNickname, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends014_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends014_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends014_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends014_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends014_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting)
{
    struct ISteamFriends_SteamFriends014_GetClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
        .pnOnline = pnOnline,
        .pnInGame = pnInGame,
        .pnChatting = pnChatting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanActivityCounts, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends014_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int32_t cClansToRequest)
{
    struct ISteamFriends_SteamFriends014_DownloadClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .psteamIDClans = psteamIDClans,
        .cClansToRequest = cClansToRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_DownloadClanActivityCounts, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends014_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends014_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends014_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends014_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends014_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends014_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends014_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID, uint32_t eFlag)
{
    struct ISteamFriends_SteamFriends014_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .eFlag = eFlag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends014_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends014_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends014_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends014_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends014_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends014_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends014_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends014_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends014_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends014_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetUserRestrictions, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends014_SetRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_SetRichPresence, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends014_ClearRichPresence(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends014_ClearRichPresence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_ClearRichPresence, &params );
}

const char * __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends014_GetFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendRichPresence, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendRichPresenceKeyCount, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iKey)
{
    struct ISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iKey = iKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendRichPresenceKeyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends014_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_RequestFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_RequestFriendRichPresence, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends014_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends014_InviteUserToGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_InviteUserToGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends014_GetCoplayFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetCoplayFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int32_t iCoplayFriend)
{
    struct ISteamFriends_SteamFriends014_GetCoplayFriend_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iCoplayFriend = iCoplayFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetCoplayFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetFriendCoplayTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendCoplayTime, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends014_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends014_GetFriendCoplayGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendCoplayGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends014_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends014_JoinClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_JoinClanChatRoom, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends014_LeaveClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_LeaveClanChatRoom, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends014_GetClanChatMemberCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanChatMemberCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends014_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iUser)
{
    struct ISteamFriends_SteamFriends014_GetChatMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iUser = iUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetChatMemberByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    struct ISteamFriends_SteamFriends014_SendClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .pchText = pchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_SendClanChatMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, uint32_t *peChatEntryType, CSteamID *psteamidChatter)
{
    struct ISteamFriends_SteamFriends014_GetClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .iMessage = iMessage,
        .prgchText = prgchText,
        .cchTextMax = cchTextMax,
        .peChatEntryType = peChatEntryType,
        .psteamidChatter = psteamidChatter,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetClanChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    struct ISteamFriends_SteamFriends014_IsClanChatAdmin_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_IsClanChatAdmin, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_IsClanChatWindowOpenInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends014_OpenClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_OpenClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends014_CloseClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_CloseClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_SetListenForFriendsMessages(struct w_steam_iface *_this, int8_t bInterceptEnabled)
{
    struct ISteamFriends_SteamFriends014_SetListenForFriendsMessages_params params =
    {
        .linux_side = _this->u_iface,
        .bInterceptEnabled = bInterceptEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_SetListenForFriendsMessages, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends014_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    struct ISteamFriends_SteamFriends014_ReplyToFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchMsgToSend = pchMsgToSend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_ReplyToFriendMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends014_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends014_GetFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iMessageID = iMessageID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFriendMessage, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends014_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends014_GetFollowerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_GetFollowerCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends014_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends014_IsFollowing_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_IsFollowing, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends014_EnumerateFollowingList(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamFriends_SteamFriends014_EnumerateFollowingList_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends014_EnumerateFollowingList, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends014_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends014, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends014_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends014_vtable, 64, "SteamFriends014");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends015_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetPersonaName, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends015_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends015_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_SetPersonaName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends015_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends015_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends015_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends015_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends015_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends015_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends015_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetFriendSteamLevel(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetFriendSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendSteamLevel, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetPlayerNickname(struct w_steam_iface *_this, CSteamID steamIDPlayer)
{
    struct ISteamFriends_SteamFriends015_GetPlayerNickname_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDPlayer = steamIDPlayer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetPlayerNickname, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendsGroupCount, &params );
    return params._ret;
}

int16_t __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex(struct w_steam_iface *_this, int32_t iFG)
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .iFG = iFG,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendsGroupIDByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupName(struct w_steam_iface *_this, int16_t friendsGroupID)
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupName_params params =
    {
        .linux_side = _this->u_iface,
        .friendsGroupID = friendsGroupID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendsGroupName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupMembersCount(struct w_steam_iface *_this, int16_t friendsGroupID)
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupMembersCount_params params =
    {
        .linux_side = _this->u_iface,
        .friendsGroupID = friendsGroupID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendsGroupMembersCount, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends015_GetFriendsGroupMembersList(struct w_steam_iface *_this, int16_t friendsGroupID, CSteamID *pOutSteamIDMembers, int32_t nMembersCount)
{
    struct ISteamFriends_SteamFriends015_GetFriendsGroupMembersList_params params =
    {
        .linux_side = _this->u_iface,
        .friendsGroupID = friendsGroupID,
        .pOutSteamIDMembers = pOutSteamIDMembers,
        .nMembersCount = nMembersCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendsGroupMembersList, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends015_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends015_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends015_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends015_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting)
{
    struct ISteamFriends_SteamFriends015_GetClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
        .pnOnline = pnOnline,
        .pnInGame = pnInGame,
        .pnChatting = pnChatting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanActivityCounts, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends015_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int32_t cClansToRequest)
{
    struct ISteamFriends_SteamFriends015_DownloadClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .psteamIDClans = psteamIDClans,
        .cClansToRequest = cClansToRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_DownloadClanActivityCounts, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends015_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends015_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends015_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends015_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends015_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL)
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID, uint32_t eFlag)
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .eFlag = eFlag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends015_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends015_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends015_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends015_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends015_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends015_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends015_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetUserRestrictions, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends015_SetRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_SetRichPresence, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends015_ClearRichPresence(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends015_ClearRichPresence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_ClearRichPresence, &params );
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends015_GetFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendRichPresence, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyCount, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iKey)
{
    struct ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iKey = iKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendRichPresenceKeyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends015_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_RequestFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_RequestFriendRichPresence, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends015_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends015_InviteUserToGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_InviteUserToGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends015_GetCoplayFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetCoplayFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int32_t iCoplayFriend)
{
    struct ISteamFriends_SteamFriends015_GetCoplayFriend_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iCoplayFriend = iCoplayFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetCoplayFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetFriendCoplayTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendCoplayTime, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends015_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends015_GetFriendCoplayGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendCoplayGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends015_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_JoinClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_JoinClanChatRoom, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_LeaveClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_LeaveClanChatRoom, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_GetClanChatMemberCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanChatMemberCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends015_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iUser)
{
    struct ISteamFriends_SteamFriends015_GetChatMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iUser = iUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetChatMemberByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    struct ISteamFriends_SteamFriends015_SendClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .pchText = pchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_SendClanChatMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, uint32_t *peChatEntryType, CSteamID *psteamidChatter)
{
    struct ISteamFriends_SteamFriends015_GetClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .iMessage = iMessage,
        .prgchText = prgchText,
        .cchTextMax = cchTextMax,
        .peChatEntryType = peChatEntryType,
        .psteamidChatter = psteamidChatter,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetClanChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    struct ISteamFriends_SteamFriends015_IsClanChatAdmin_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_IsClanChatAdmin, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_IsClanChatWindowOpenInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends015_OpenClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_OpenClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends015_CloseClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_CloseClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_SetListenForFriendsMessages(struct w_steam_iface *_this, int8_t bInterceptEnabled)
{
    struct ISteamFriends_SteamFriends015_SetListenForFriendsMessages_params params =
    {
        .linux_side = _this->u_iface,
        .bInterceptEnabled = bInterceptEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_SetListenForFriendsMessages, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    struct ISteamFriends_SteamFriends015_ReplyToFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchMsgToSend = pchMsgToSend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_ReplyToFriendMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends015_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends015_GetFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iMessageID = iMessageID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFriendMessage, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends015_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends015_GetFollowerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_GetFollowerCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends015_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends015_IsFollowing_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_IsFollowing, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends015_EnumerateFollowingList(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamFriends_SteamFriends015_EnumerateFollowingList_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_EnumerateFollowingList, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_IsClanPublic(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_IsClanPublic_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_IsClanPublic, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends015_IsClanOfficialGameGroup(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends015_IsClanOfficialGameGroup_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends015_IsClanOfficialGameGroup, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends015_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends015, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends015_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends015_vtable, 72, "SteamFriends015");
    r->u_iface = u_iface;
    return r;
}

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
    struct ISteamFriends_SteamFriends017_GetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetPersonaName, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends017_SetPersonaName(struct w_steam_iface *_this, const char *pchPersonaName)
{
    struct ISteamFriends_SteamFriends017_SetPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchPersonaName = pchPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_SetPersonaName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends017_GetPersonaState(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends017_GetPersonaState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetPersonaState, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetFriendCount(struct w_steam_iface *_this, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends017_GetFriendCount_params params =
    {
        .linux_side = _this->u_iface,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetFriendByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends017_GetFriendByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iFriend = iFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends017_GetFriendRelationship(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetFriendRelationship_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendRelationship, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaState(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetFriendPersonaState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendPersonaState, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaName(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetFriendPersonaName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendPersonaName, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_GetFriendGamePlayed(struct w_steam_iface *_this, CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
    struct ISteamFriends_SteamFriends017_GetFriendGamePlayed_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pFriendGameInfo = pFriendGameInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendGamePlayed, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendPersonaNameHistory(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iPersonaName)
{
    struct ISteamFriends_SteamFriends017_GetFriendPersonaNameHistory_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iPersonaName = iPersonaName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendPersonaNameHistory, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetFriendSteamLevel(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetFriendSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendSteamLevel, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetPlayerNickname(struct w_steam_iface *_this, CSteamID steamIDPlayer)
{
    struct ISteamFriends_SteamFriends017_GetPlayerNickname_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDPlayer = steamIDPlayer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetPlayerNickname, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendsGroupCount, &params );
    return params._ret;
}

int16_t __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex(struct w_steam_iface *_this, int32_t iFG)
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .iFG = iFG,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupName(struct w_steam_iface *_this, int16_t friendsGroupID)
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupName_params params =
    {
        .linux_side = _this->u_iface,
        .friendsGroupID = friendsGroupID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendsGroupName, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupMembersCount(struct w_steam_iface *_this, int16_t friendsGroupID)
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupMembersCount_params params =
    {
        .linux_side = _this->u_iface,
        .friendsGroupID = friendsGroupID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendsGroupMembersCount, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends017_GetFriendsGroupMembersList(struct w_steam_iface *_this, int16_t friendsGroupID, CSteamID *pOutSteamIDMembers, int32_t nMembersCount)
{
    struct ISteamFriends_SteamFriends017_GetFriendsGroupMembersList_params params =
    {
        .linux_side = _this->u_iface,
        .friendsGroupID = friendsGroupID,
        .pOutSteamIDMembers = pOutSteamIDMembers,
        .nMembersCount = nMembersCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendsGroupMembersList, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends017_HasFriend(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iFriendFlags)
{
    struct ISteamFriends_SteamFriends017_HasFriend_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iFriendFlags = iFriendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_HasFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetClanCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends017_GetClanCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetClanByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iClan)
{
    struct ISteamFriends_SteamFriends017_GetClanByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iClan = iClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetClanName(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_GetClanName_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanName, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetClanTag(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_GetClanTag_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_GetClanActivityCounts(struct w_steam_iface *_this, CSteamID steamIDClan, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting)
{
    struct ISteamFriends_SteamFriends017_GetClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
        .pnOnline = pnOnline,
        .pnInGame = pnInGame,
        .pnChatting = pnChatting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanActivityCounts, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends017_DownloadClanActivityCounts(struct w_steam_iface *_this, CSteamID *psteamIDClans, int32_t cClansToRequest)
{
    struct ISteamFriends_SteamFriends017_DownloadClanActivityCounts_params params =
    {
        .linux_side = _this->u_iface,
        .psteamIDClans = psteamIDClans,
        .cClansToRequest = cClansToRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_DownloadClanActivityCounts, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetFriendCountFromSource(struct w_steam_iface *_this, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends017_GetFriendCountFromSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendCountFromSource, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetFriendFromSourceByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDSource, int32_t iFriend)
{
    struct ISteamFriends_SteamFriends017_GetFriendFromSourceByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDSource = steamIDSource,
        .iFriend = iFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendFromSourceByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_IsUserInSource(struct w_steam_iface *_this, CSteamID steamIDUser, CSteamID steamIDSource)
{
    struct ISteamFriends_SteamFriends017_IsUserInSource_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .steamIDSource = steamIDSource,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_IsUserInSource, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends017_SetInGameVoiceSpeaking(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bSpeaking)
{
    struct ISteamFriends_SteamFriends017_SetInGameVoiceSpeaking_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bSpeaking = bSpeaking,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_SetInGameVoiceSpeaking, &params );
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlay(struct w_steam_iface *_this, const char *pchDialog)
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ActivateGameOverlay, &params );
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToUser(struct w_steam_iface *_this, const char *pchDialog, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayToUser_params params =
    {
        .linux_side = _this->u_iface,
        .pchDialog = pchDialog,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ActivateGameOverlayToUser, &params );
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage(struct w_steam_iface *_this, const char *pchURL, uint32_t eMode)
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage_params params =
    {
        .linux_side = _this->u_iface,
        .pchURL = pchURL,
        .eMode = eMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage, &params );
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayToStore(struct w_steam_iface *_this, uint32_t nAppID, uint32_t eFlag)
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayToStore_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .eFlag = eFlag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ActivateGameOverlayToStore, &params );
}

void __thiscall winISteamFriends_SteamFriends017_SetPlayedWith(struct w_steam_iface *_this, CSteamID steamIDUserPlayedWith)
{
    struct ISteamFriends_SteamFriends017_SetPlayedWith_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUserPlayedWith = steamIDUserPlayedWith,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_SetPlayedWith, &params );
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog, &params );
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetSmallFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetSmallFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetSmallFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetMediumFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetMediumFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetMediumFriendAvatar, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetLargeFriendAvatar(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetLargeFriendAvatar_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetLargeFriendAvatar, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_RequestUserInformation(struct w_steam_iface *_this, CSteamID steamIDUser, int8_t bRequireNameOnly)
{
    struct ISteamFriends_SteamFriends017_RequestUserInformation_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .bRequireNameOnly = bRequireNameOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_RequestUserInformation, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends017_RequestClanOfficerList(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_RequestClanOfficerList_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_RequestClanOfficerList, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetClanOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_GetClanOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanOwner, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetClanOfficerCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_GetClanOfficerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanOfficerCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetClanOfficerByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iOfficer)
{
    struct ISteamFriends_SteamFriends017_GetClanOfficerByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iOfficer = iOfficer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanOfficerByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends017_GetUserRestrictions(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends017_GetUserRestrictions_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetUserRestrictions, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_SetRichPresence(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamFriends_SteamFriends017_SetRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_SetRichPresence, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends017_ClearRichPresence(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends017_ClearRichPresence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ClearRichPresence, &params );
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchKey)
{
    struct ISteamFriends_SteamFriends017_GetFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendRichPresence, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iKey)
{
    struct ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iKey = iKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends017_RequestFriendRichPresence(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_RequestFriendRichPresence_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_RequestFriendRichPresence, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends017_InviteUserToGame(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends017_InviteUserToGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_InviteUserToGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetCoplayFriendCount(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends017_GetCoplayFriendCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetCoplayFriendCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetCoplayFriend(struct w_steam_iface *_this, CSteamID *_ret, int32_t iCoplayFriend)
{
    struct ISteamFriends_SteamFriends017_GetCoplayFriend_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iCoplayFriend = iCoplayFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetCoplayFriend, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetFriendCoplayTime(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetFriendCoplayTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendCoplayTime, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends017_GetFriendCoplayGame(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamFriends_SteamFriends017_GetFriendCoplayGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendCoplayGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends017_JoinClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_JoinClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_JoinClanChatRoom, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_LeaveClanChatRoom(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_LeaveClanChatRoom_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_LeaveClanChatRoom, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetClanChatMemberCount(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_GetClanChatMemberCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanChatMemberCount, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamFriends_SteamFriends017_GetChatMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDClan, int32_t iUser)
{
    struct ISteamFriends_SteamFriends017_GetChatMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDClan = steamIDClan,
        .iUser = iUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetChatMemberByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_SendClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, const char *pchText)
{
    struct ISteamFriends_SteamFriends017_SendClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .pchText = pchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_SendClanChatMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetClanChatMessage(struct w_steam_iface *_this, CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, uint32_t *peChatEntryType, CSteamID *psteamidChatter)
{
    struct ISteamFriends_SteamFriends017_GetClanChatMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .iMessage = iMessage,
        .prgchText = prgchText,
        .cchTextMax = cchTextMax,
        .peChatEntryType = peChatEntryType,
        .psteamidChatter = psteamidChatter,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetClanChatMessage, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_IsClanChatAdmin(struct w_steam_iface *_this, CSteamID steamIDClanChat, CSteamID steamIDUser)
{
    struct ISteamFriends_SteamFriends017_IsClanChatAdmin_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_IsClanChatAdmin, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_OpenClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends017_OpenClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_OpenClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_CloseClanChatWindowInSteam(struct w_steam_iface *_this, CSteamID steamIDClanChat)
{
    struct ISteamFriends_SteamFriends017_CloseClanChatWindowInSteam_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClanChat = steamIDClanChat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_CloseClanChatWindowInSteam, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_SetListenForFriendsMessages(struct w_steam_iface *_this, int8_t bInterceptEnabled)
{
    struct ISteamFriends_SteamFriends017_SetListenForFriendsMessages_params params =
    {
        .linux_side = _this->u_iface,
        .bInterceptEnabled = bInterceptEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_SetListenForFriendsMessages, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_ReplyToFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, const char *pchMsgToSend)
{
    struct ISteamFriends_SteamFriends017_ReplyToFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .pchMsgToSend = pchMsgToSend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ReplyToFriendMessage, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetFriendMessage(struct w_steam_iface *_this, CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamFriends_SteamFriends017_GetFriendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
        .iMessageID = iMessageID,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFriendMessage, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends017_GetFollowerCount(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends017_GetFollowerCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetFollowerCount, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends017_IsFollowing(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends017_IsFollowing_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_IsFollowing, &params );
    return params._ret;
}

uint64_t __thiscall winISteamFriends_SteamFriends017_EnumerateFollowingList(struct w_steam_iface *_this, uint32_t unStartIndex)
{
    struct ISteamFriends_SteamFriends017_EnumerateFollowingList_params params =
    {
        .linux_side = _this->u_iface,
        .unStartIndex = unStartIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_EnumerateFollowingList, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_IsClanPublic(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_IsClanPublic_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_IsClanPublic, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_IsClanOfficialGameGroup(struct w_steam_iface *_this, CSteamID steamIDClan)
{
    struct ISteamFriends_SteamFriends017_IsClanOfficialGameGroup_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDClan = steamIDClan,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_IsClanOfficialGameGroup, &params );
    return params._ret;
}

int32_t __thiscall winISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages(struct w_steam_iface *_this)
{
    struct ISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog, &params );
}

int8_t __thiscall winISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser(struct w_steam_iface *_this, const char *pchProtocol)
{
    struct ISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser_params params =
    {
        .linux_side = _this->u_iface,
        .pchProtocol = pchProtocol,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser, &params );
    return params._ret;
}

void __thiscall winISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString(struct w_steam_iface *_this, const char *pchConnectString)
{
    struct ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString_params params =
    {
        .linux_side = _this->u_iface,
        .pchConnectString = pchConnectString,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString, &params );
}

uint64_t __thiscall winISteamFriends_SteamFriends017_RequestEquippedProfileItems(struct w_steam_iface *_this, CSteamID steamID)
{
    struct ISteamFriends_SteamFriends017_RequestEquippedProfileItems_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_RequestEquippedProfileItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamFriends_SteamFriends017_BHasEquippedProfileItem(struct w_steam_iface *_this, CSteamID steamID, uint32_t itemType)
{
    struct ISteamFriends_SteamFriends017_BHasEquippedProfileItem_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .itemType = itemType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_BHasEquippedProfileItem, &params );
    return params._ret;
}

const char * __thiscall winISteamFriends_SteamFriends017_GetProfileItemPropertyString(struct w_steam_iface *_this, CSteamID steamID, uint32_t itemType, uint32_t prop)
{
    struct ISteamFriends_SteamFriends017_GetProfileItemPropertyString_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .itemType = itemType,
        .prop = prop,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetProfileItemPropertyString, &params );
    return params._ret;
}

uint32_t __thiscall winISteamFriends_SteamFriends017_GetProfileItemPropertyUint(struct w_steam_iface *_this, CSteamID steamID, uint32_t itemType, uint32_t prop)
{
    struct ISteamFriends_SteamFriends017_GetProfileItemPropertyUint_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .itemType = itemType,
        .prop = prop,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamFriends_SteamFriends017_GetProfileItemPropertyUint, &params );
    return params._ret;
}

extern vtable_ptr winISteamFriends_SteamFriends017_vtable;

DEFINE_RTTI_DATA0(winISteamFriends_SteamFriends017, 0, ".?AVISteamFriends@@")

__ASM_BLOCK_BEGIN(winISteamFriends_SteamFriends017_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamFriends_SteamFriends017(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamFriends017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamFriends_SteamFriends017_vtable, 80, "SteamFriends017");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamFriends_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamFriends_SteamFriends001_rtti( base );
    init_winISteamFriends_SteamFriends002_rtti( base );
    init_winISteamFriends_SteamFriends003_rtti( base );
    init_winISteamFriends_SteamFriends004_rtti( base );
    init_winISteamFriends_SteamFriends005_rtti( base );
    init_winISteamFriends_SteamFriends006_rtti( base );
    init_winISteamFriends_SteamFriends007_rtti( base );
    init_winISteamFriends_SteamFriends008_rtti( base );
    init_winISteamFriends_SteamFriends009_rtti( base );
    init_winISteamFriends_SteamFriends010_rtti( base );
    init_winISteamFriends_SteamFriends011_rtti( base );
    init_winISteamFriends_SteamFriends012_rtti( base );
    init_winISteamFriends_SteamFriends013_rtti( base );
    init_winISteamFriends_SteamFriends014_rtti( base );
    init_winISteamFriends_SteamFriends015_rtti( base );
    init_winISteamFriends_SteamFriends017_rtti( base );
#endif /* __x86_64__ */
}
