/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_SetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_SetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat, 28)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_SetUserAchievement, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_StoreUserStats, 12)

uint64_t __thiscall winISteamGameServerStats_SteamGameServerStats001_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamGameServerStats_SteamGameServerStats001_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t nData)
{
    struct ISteamGameServerStats_SteamGameServerStats001_SetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_SetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float fData)
{
    struct ISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_SetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName)
{
    struct ISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_SetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName)
{
    struct ISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement, &params );
    return params._ret;
}

uint64_t __thiscall winISteamGameServerStats_SteamGameServerStats001_StoreUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamGameServerStats_SteamGameServerStats001_StoreUserStats, &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServerStats_SteamGameServerStats001_vtable;

DEFINE_RTTI_DATA0(winISteamGameServerStats_SteamGameServerStats001, 0, ".?AVISteamGameServerStats@@")

__ASM_BLOCK_BEGIN(winISteamGameServerStats_SteamGameServerStats001_vtables)
    __ASM_VTABLE(winISteamGameServerStats_SteamGameServerStats001,
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_GetUserStat)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_SetUserStat_2)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_SetUserStat)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_SetUserAchievement)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement)
        VTABLE_ADD_FUNC(winISteamGameServerStats_SteamGameServerStats001_StoreUserStats)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamGameServerStats_SteamGameServerStats001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServerStats001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServerStats_SteamGameServerStats001_vtable, 10, "SteamGameServerStats001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamGameServerStats_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamGameServerStats_SteamGameServerStats001_rtti( base );
#endif /* __x86_64__ */
}
