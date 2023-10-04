/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking001_RequestLobbyList(struct w_steam_iface *_this, uint64_t ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32_t nFilters)
{
    struct ISteamMatchmaking_SteamMatchMaking001_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
        .ulGameID = ulGameID,
        .pFilters = pFilters,
        .nFilters = nFilters,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_RequestLobbyList, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking001_CreateLobby(struct w_steam_iface *_this, uint64_t ulGameID, int8_t bPrivate)
{
    struct ISteamMatchmaking_SteamMatchMaking001_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .ulGameID = ulGameID,
        .bPrivate = bPrivate,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_CreateLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking001_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking001_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_JoinLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking001_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking001_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyData(struct w_steam_iface *_this, CSteamID SteamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .SteamIDLobby = SteamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking001_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_SetLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking001_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking001_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking001_RequestLobbyData, &params );
    return params._ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking001_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking001, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking001_vtable, 22, "SteamMatchMaking001");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_RequestLobbyList(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking002_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_RequestLobbyList, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_CreateLobby(struct w_steam_iface *_this, int8_t bPrivate)
{
    struct ISteamMatchmaking_SteamMatchMaking002_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .bPrivate = bPrivate,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_CreateLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking002_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_JoinLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking002_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking002_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking002_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_SetLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking002_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking002_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_RequestLobbyData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .unGameServerIP = unGameServerIP,
        .unGameServerPort = unGameServerPort,
        .steamIDGameServer = steamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer, &params );
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking002_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking002, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking002_vtable, 20, "SteamMatchMaking002");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestLobbyList(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking003_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_RequestLobbyList, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .pchValueToMatch = pchValueToMatch,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToMatch, int32_t nComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToMatch = nValueToMatch,
        .nComparisonType = nComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_CreateLobby(struct w_steam_iface *_this, int8_t bPrivate)
{
    struct ISteamMatchmaking_SteamMatchMaking003_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .bPrivate = bPrivate,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_CreateLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking003_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_JoinLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking003_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_SetLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking003_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_RequestLobbyData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .unGameServerIP = unGameServerIP,
        .unGameServerPort = unGameServerPort,
        .steamIDGameServer = steamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t *punGameServerIP, uint16_t *punGameServerPort, CSteamID *psteamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .punGameServerIP = punGameServerIP,
        .punGameServerPort = punGameServerPort,
        .psteamIDGameServer = psteamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled(struct w_steam_iface *_this, CSteamID steamIDLobby, int8_t bVoiceEnabled)
{
    struct ISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .bVoiceEnabled = bVoiceEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies, &params );
    return params._ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking003_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking003, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking003_vtable, 28, "SteamMatchMaking003");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_RemoveFavoriteGame, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestLobbyList(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking004_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_RequestLobbyList, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .pchValueToMatch = pchValueToMatch,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToMatch, int32_t nComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToMatch = nValueToMatch,
        .nComparisonType = nComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListNumericalFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_AddRequestLobbyListSlotsAvailableFilter, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetLobbyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_CreateLobby(struct w_steam_iface *_this, int8_t bPrivate)
{
    struct ISteamMatchmaking_SteamMatchMaking004_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .bPrivate = bPrivate,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_CreateLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking004_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_JoinLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking004_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_SetLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberData, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking004_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_RequestLobbyData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .unGameServerIP = unGameServerIP,
        .unGameServerPort = unGameServerPort,
        .steamIDGameServer = steamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_SetLobbyGameServer, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t *punGameServerIP, uint16_t *punGameServerPort, CSteamID *psteamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .punGameServerIP = punGameServerIP,
        .punGameServerPort = punGameServerPort,
        .psteamIDGameServer = psteamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetLobbyGameServer, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_SetLobbyMemberLimit, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_GetLobbyMemberLimit, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking004_RequestFriendsLobbies, &params );
    return params._ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking004_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking004, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking004_vtable, 27, "SteamMatchMaking004");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_RemoveFavoriteGame, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestLobbyList(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking005_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_RequestLobbyList, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .pchValueToMatch = pchValueToMatch,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToMatch, int32_t nComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToMatch = nValueToMatch,
        .nComparisonType = nComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNumericalFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListSlotsAvailableFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToBeCloseTo)
{
    struct ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToBeCloseTo = nValueToBeCloseTo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_AddRequestLobbyListNearValueFilter, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyByIndex, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_CreateLobby(struct w_steam_iface *_this, uint32_t eLobbyType)
{
    struct ISteamMatchmaking_SteamMatchMaking005_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .eLobbyType = eLobbyType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_CreateLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking005_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_JoinLobby, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking005_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_SetLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberData, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking005_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_RequestLobbyData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .unGameServerIP = unGameServerIP,
        .unGameServerPort = unGameServerPort,
        .steamIDGameServer = steamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_SetLobbyGameServer, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t *punGameServerIP, uint16_t *punGameServerPort, CSteamID *psteamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .punGameServerIP = punGameServerIP,
        .punGameServerPort = punGameServerPort,
        .psteamIDGameServer = psteamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyGameServer, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_SetLobbyMemberLimit, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyMemberLimit, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_RequestFriendsLobbies, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking005_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t eLobbyType)
{
    struct ISteamMatchmaking_SteamMatchMaking005_SetLobbyType_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .eLobbyType = eLobbyType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_SetLobbyType, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyOwner, &params );
    return params._ret;
}

float __thiscall winISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking005_GetLobbyDistance, &params );
    return params._ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking005_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking005, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking005_vtable, 31, "SteamMatchMaking005");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking006_RequestLobbyList(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking006_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_RequestLobbyList, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .pchValueToMatch = pchValueToMatch,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToMatch, int32_t nComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToMatch = nValueToMatch,
        .nComparisonType = nComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToBeCloseTo)
{
    struct ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToBeCloseTo = nValueToBeCloseTo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking006_CreateLobby(struct w_steam_iface *_this, uint32_t eLobbyType)
{
    struct ISteamMatchmaking_SteamMatchMaking006_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .eLobbyType = eLobbyType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_CreateLobby, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking006_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking006_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_JoinLobby, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking006_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_SetLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking006_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_RequestLobbyData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .unGameServerIP = unGameServerIP,
        .unGameServerPort = unGameServerPort,
        .steamIDGameServer = steamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t *punGameServerIP, uint16_t *punGameServerPort, CSteamID *psteamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .punGameServerIP = punGameServerIP,
        .punGameServerPort = punGameServerPort,
        .psteamIDGameServer = psteamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking006_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t eLobbyType)
{
    struct ISteamMatchmaking_SteamMatchMaking006_SetLobbyType_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .eLobbyType = eLobbyType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_SetLobbyType, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner, &params );
    return params._ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking006_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking006, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking006_vtable, 28, "SteamMatchMaking006");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking007_RequestLobbyList(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking007_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_RequestLobbyList, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch, uint32_t eComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .pchValueToMatch = pchValueToMatch,
        .eComparisonType = eComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToMatch, uint32_t eComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToMatch = nValueToMatch,
        .eComparisonType = eComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToBeCloseTo)
{
    struct ISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToBeCloseTo = nValueToBeCloseTo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable(struct w_steam_iface *_this, int32_t nSlotsAvailable)
{
    struct ISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .nSlotsAvailable = nSlotsAvailable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking007_CreateLobby(struct w_steam_iface *_this, uint32_t eLobbyType, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking007_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .eLobbyType = eLobbyType,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_CreateLobby, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking007_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking007_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_JoinLobby, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking007_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking007_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_SetLobbyData, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iLobbyData, char *pchKey, int32_t cchKeyBufferSize, char *pchValue, int32_t cchValueBufferSize)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iLobbyData = iLobbyData,
        .pchKey = pchKey,
        .cchKeyBufferSize = cchKeyBufferSize,
        .pchValue = pchValue,
        .cchValueBufferSize = cchValueBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking007_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_RequestLobbyData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .unGameServerIP = unGameServerIP,
        .unGameServerPort = unGameServerPort,
        .steamIDGameServer = steamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t *punGameServerIP, uint16_t *punGameServerPort, CSteamID *psteamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .punGameServerIP = punGameServerIP,
        .punGameServerPort = punGameServerPort,
        .psteamIDGameServer = psteamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t eLobbyType)
{
    struct ISteamMatchmaking_SteamMatchMaking007_SetLobbyType_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .eLobbyType = eLobbyType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_SetLobbyType, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable(struct w_steam_iface *_this, CSteamID steamIDLobby, int8_t bLobbyJoinable)
{
    struct ISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .bLobbyJoinable = bLobbyJoinable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    struct ISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDNewOwner = steamIDNewOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner, &params );
    return params._ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking007_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking007, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking007_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking007_vtable, 34, "SteamMatchMaking007");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking008_RequestLobbyList(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking008_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_RequestLobbyList, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch, uint32_t eComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .pchValueToMatch = pchValueToMatch,
        .eComparisonType = eComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToMatch, uint32_t eComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToMatch = nValueToMatch,
        .eComparisonType = eComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToBeCloseTo)
{
    struct ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToBeCloseTo = nValueToBeCloseTo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(struct w_steam_iface *_this, int32_t nSlotsAvailable)
{
    struct ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .nSlotsAvailable = nSlotsAvailable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter(struct w_steam_iface *_this, uint32_t eLobbyDistanceFilter)
{
    struct ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter_params params =
    {
        .linux_side = _this->u_iface,
        .eLobbyDistanceFilter = eLobbyDistanceFilter,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter(struct w_steam_iface *_this, int32_t cMaxResults)
{
    struct ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter_params params =
    {
        .linux_side = _this->u_iface,
        .cMaxResults = cMaxResults,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking008_CreateLobby(struct w_steam_iface *_this, uint32_t eLobbyType, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking008_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .eLobbyType = eLobbyType,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_CreateLobby, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking008_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking008_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_JoinLobby, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking008_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking008_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_SetLobbyData, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iLobbyData, char *pchKey, int32_t cchKeyBufferSize, char *pchValue, int32_t cchValueBufferSize)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iLobbyData = iLobbyData,
        .pchKey = pchKey,
        .cchKeyBufferSize = cchKeyBufferSize,
        .pchValue = pchValue,
        .cchValueBufferSize = cchValueBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking008_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_RequestLobbyData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .unGameServerIP = unGameServerIP,
        .unGameServerPort = unGameServerPort,
        .steamIDGameServer = steamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t *punGameServerIP, uint16_t *punGameServerPort, CSteamID *psteamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .punGameServerIP = punGameServerIP,
        .punGameServerPort = punGameServerPort,
        .psteamIDGameServer = psteamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t eLobbyType)
{
    struct ISteamMatchmaking_SteamMatchMaking008_SetLobbyType_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .eLobbyType = eLobbyType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_SetLobbyType, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable(struct w_steam_iface *_this, CSteamID steamIDLobby, int8_t bLobbyJoinable)
{
    struct ISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .bLobbyJoinable = bLobbyJoinable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    struct ISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDNewOwner = steamIDNewOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner, &params );
    return params._ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking008_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking008, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking008_vtable, 36, "SteamMatchMaking008");
    r->u_iface = u_iface;
    return r;
}

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

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGameCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame(struct w_steam_iface *_this, int32_t iGame, uint32_t *pnAppID, uint32_t *pnIP, uint16_t *pnConnPort, uint16_t *pnQueryPort, uint32_t *punFlags, uint32_t *pRTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .iGame = iGame,
        .pnAppID = pnAppID,
        .pnIP = pnIP,
        .pnConnPort = pnConnPort,
        .pnQueryPort = pnQueryPort,
        .punFlags = punFlags,
        .pRTime32LastPlayedOnServer = pRTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetFavoriteGame, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer)
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
        .rTime32LastPlayedOnServer = rTime32LastPlayedOnServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_AddFavoriteGame, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame(struct w_steam_iface *_this, uint32_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags)
{
    struct ISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .nIP = nIP,
        .nConnPort = nConnPort,
        .nQueryPort = nQueryPort,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_RemoveFavoriteGame, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking009_RequestLobbyList(struct w_steam_iface *_this)
{
    struct ISteamMatchmaking_SteamMatchMaking009_RequestLobbyList_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_RequestLobbyList, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, const char *pchValueToMatch, uint32_t eComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .pchValueToMatch = pchValueToMatch,
        .eComparisonType = eComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListStringFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToMatch, uint32_t eComparisonType)
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToMatch = nValueToMatch,
        .eComparisonType = eComparisonType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNumericalFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter(struct w_steam_iface *_this, const char *pchKeyToMatch, int32_t nValueToBeCloseTo)
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToMatch = pchKeyToMatch,
        .nValueToBeCloseTo = nValueToBeCloseTo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListNearValueFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable(struct w_steam_iface *_this, int32_t nSlotsAvailable)
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .nSlotsAvailable = nSlotsAvailable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListFilterSlotsAvailable, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter(struct w_steam_iface *_this, uint32_t eLobbyDistanceFilter)
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter_params params =
    {
        .linux_side = _this->u_iface,
        .eLobbyDistanceFilter = eLobbyDistanceFilter,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListDistanceFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter(struct w_steam_iface *_this, int32_t cMaxResults)
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter_params params =
    {
        .linux_side = _this->u_iface,
        .cMaxResults = cMaxResults,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListResultCountFilter, &params );
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_AddRequestLobbyListCompatibleMembersFilter, &params );
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex(struct w_steam_iface *_this, CSteamID *_ret, int32_t iLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .iLobby = iLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyByIndex, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking009_CreateLobby(struct w_steam_iface *_this, uint32_t eLobbyType, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking009_CreateLobby_params params =
    {
        .linux_side = _this->u_iface,
        .eLobbyType = eLobbyType,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_CreateLobby, &params );
    return params._ret;
}

uint64_t __thiscall winISteamMatchmaking_SteamMatchMaking009_JoinLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_JoinLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_JoinLobby, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_LeaveLobby(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_LeaveLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_LeaveLobby, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    struct ISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDInvitee = steamIDInvitee,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_InviteUserToLobby, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetNumLobbyMembers, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby, int32_t iMember)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
        .iMember = iMember,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberByIndex, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyData, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SetLobbyData, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataCount, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iLobbyData, char *pchKey, int32_t cchKeyBufferSize, char *pchValue, int32_t cchValueBufferSize)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iLobbyData = iLobbyData,
        .pchKey = pchKey,
        .cchKeyBufferSize = cchKeyBufferSize,
        .pchValue = pchValue,
        .cchValueBufferSize = cchValueBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyDataByIndex, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_DeleteLobbyData, &params );
    return params._ret;
}

const char * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDUser = steamIDUser,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData(struct w_steam_iface *_this, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberData, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg(struct w_steam_iface *_this, CSteamID steamIDLobby, const void *pvMsgBody, int32_t cubMsgBody)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .pvMsgBody = pvMsgBody,
        .cubMsgBody = cubMsgBody,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SendLobbyChatMsg, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t iChatID, CSteamID *pSteamIDUser, void *pvData, int32_t cubData, uint32_t *peChatEntryType)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .iChatID = iChatID,
        .pSteamIDUser = pSteamIDUser,
        .pvData = pvData,
        .cubData = cubData,
        .peChatEntryType = peChatEntryType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyChatEntry, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_RequestLobbyData(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_RequestLobbyData_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_RequestLobbyData, &params );
    return params._ret;
}

void __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .unGameServerIP = unGameServerIP,
        .unGameServerPort = unGameServerPort,
        .steamIDGameServer = steamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SetLobbyGameServer, &params );
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t *punGameServerIP, uint16_t *punGameServerPort, CSteamID *psteamIDGameServer)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .punGameServerIP = punGameServerIP,
        .punGameServerPort = punGameServerPort,
        .psteamIDGameServer = psteamIDGameServer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyGameServer, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t cMaxMembers)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .cMaxMembers = cMaxMembers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SetLobbyMemberLimit, &params );
    return params._ret;
}

int32_t __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit(struct w_steam_iface *_this, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyMemberLimit, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyType(struct w_steam_iface *_this, CSteamID steamIDLobby, uint32_t eLobbyType)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyType_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .eLobbyType = eLobbyType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SetLobbyType, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable(struct w_steam_iface *_this, CSteamID steamIDLobby, int8_t bLobbyJoinable)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .bLobbyJoinable = bLobbyJoinable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SetLobbyJoinable, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner(struct w_steam_iface *_this, CSteamID *_ret, CSteamID steamIDLobby)
{
    struct ISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .steamIDLobby = steamIDLobby,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_GetLobbyOwner, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDNewOwner = steamIDNewOwner,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SetLobbyOwner, &params );
    return params._ret;
}

int8_t __thiscall winISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, CSteamID steamIDLobbyDependent)
{
    struct ISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .steamIDLobbyDependent = steamIDLobbyDependent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmaking_SteamMatchMaking009_SetLinkedLobby, &params );
    return params._ret;
}

extern vtable_ptr winISteamMatchmaking_SteamMatchMaking009_vtable;

DEFINE_RTTI_DATA0(winISteamMatchmaking_SteamMatchMaking009, 0, ".?AVISteamMatchmaking@@")

__ASM_BLOCK_BEGIN(winISteamMatchmaking_SteamMatchMaking009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMatchmaking_SteamMatchMaking009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchMaking009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMatchmaking_SteamMatchMaking009_vtable, 38, "SteamMatchMaking009");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamMatchmaking_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamMatchmaking_SteamMatchMaking001_rtti( base );
    init_winISteamMatchmaking_SteamMatchMaking002_rtti( base );
    init_winISteamMatchmaking_SteamMatchMaking003_rtti( base );
    init_winISteamMatchmaking_SteamMatchMaking004_rtti( base );
    init_winISteamMatchmaking_SteamMatchMaking005_rtti( base );
    init_winISteamMatchmaking_SteamMatchMaking006_rtti( base );
    init_winISteamMatchmaking_SteamMatchMaking007_rtti( base );
    init_winISteamMatchmaking_SteamMatchMaking008_rtti( base );
    init_winISteamMatchmaking_SteamMatchMaking009_rtti( base );
#endif /* __x86_64__ */
}
