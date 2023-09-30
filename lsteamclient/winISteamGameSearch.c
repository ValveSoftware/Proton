/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_AcceptGame, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_DeclineGame, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_EndGameSearch, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame, 4)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameSearch_SteamMatchGameSearch001_EndGame, 12)

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams(struct w_steam_iface *_this, const char *pchKeyToFind, const char *pchValuesToFind)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams_params params =
    {
        .linux_side = _this->u_iface,
        .pchKeyToFind = pchKeyToFind,
        .pchValuesToFind = pchValuesToFind,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby(struct w_steam_iface *_this, CSteamID steamIDLobby, int32_t nPlayerMin, int32_t nPlayerMax)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDLobby = steamIDLobby,
        .nPlayerMin = nPlayerMin,
        .nPlayerMax = nPlayerMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo(struct w_steam_iface *_this, int32_t nPlayerMin, int32_t nPlayerMax)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo_params params =
    {
        .linux_side = _this->u_iface,
        .nPlayerMin = nPlayerMin,
        .nPlayerMax = nPlayerMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_AcceptGame(struct w_steam_iface *_this)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_AcceptGame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_AcceptGame, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_DeclineGame(struct w_steam_iface *_this)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_DeclineGame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_DeclineGame, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails(struct w_steam_iface *_this, CSteamID steamIDHost, char *pchConnectionDetails, int32_t cubConnectionDetails)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDHost = steamIDHost,
        .pchConnectionDetails = pchConnectionDetails,
        .cubConnectionDetails = cubConnectionDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_EndGameSearch(struct w_steam_iface *_this)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_EndGameSearch_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_EndGameSearch, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams(struct w_steam_iface *_this, const char *pchKey, const char *pchValue)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails(struct w_steam_iface *_this, const char *pchConnectionDetails, int32_t cubConnectionDetails)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails_params params =
    {
        .linux_side = _this->u_iface,
        .pchConnectionDetails = pchConnectionDetails,
        .cubConnectionDetails = cubConnectionDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame(struct w_steam_iface *_this, int32_t nPlayerMin, int32_t nPlayerMax, int32_t nMaxTeamSize)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame_params params =
    {
        .linux_side = _this->u_iface,
        .nPlayerMin = nPlayerMin,
        .nPlayerMax = nPlayerMax,
        .nMaxTeamSize = nMaxTeamSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart(struct w_steam_iface *_this, uint64_t ullUniqueGameID)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart_params params =
    {
        .linux_side = _this->u_iface,
        .ullUniqueGameID = ullUniqueGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame(struct w_steam_iface *_this)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult(struct w_steam_iface *_this, uint64_t ullUniqueGameID, CSteamID steamIDPlayer, uint32_t EPlayerResult)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult_params params =
    {
        .linux_side = _this->u_iface,
        .ullUniqueGameID = ullUniqueGameID,
        .steamIDPlayer = steamIDPlayer,
        .EPlayerResult = EPlayerResult,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult, &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameSearch_SteamMatchGameSearch001_EndGame(struct w_steam_iface *_this, uint64_t ullUniqueGameID)
{
    struct ISteamGameSearch_SteamMatchGameSearch001_EndGame_params params =
    {
        .linux_side = _this->u_iface,
        .ullUniqueGameID = ullUniqueGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameSearch_SteamMatchGameSearch001_EndGame, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameSearch_SteamMatchGameSearch001_vtable;

DEFINE_RTTI_DATA0(winISteamGameSearch_SteamMatchGameSearch001, 0, ".?AVISteamGameSearch@@")

__ASM_BLOCK_BEGIN(winISteamGameSearch_SteamMatchGameSearch001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameSearch_SteamMatchGameSearch001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamMatchGameSearch001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameSearch_SteamMatchGameSearch001_vtable, 14, "SteamMatchGameSearch001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamGameSearch_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamGameSearch_SteamMatchGameSearch001_rtti( base );
#endif /* __x86_64__ */
}
