/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamGameServerStats_SteamGameServerStats001.h"

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

SteamAPICall_t __thiscall winISteamGameServerStats_SteamGameServerStats001_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats( &params );
    return params._ret;
}

bool __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_GetUserStat( &params );
    return params._ret;
}

bool __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2( &params );
    return params._ret;
}

bool __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement( &params );
    return params._ret;
}

bool __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t nData)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_SetUserStat( &params );
    return params._ret;
}

bool __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float fData)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2( &params );
    return params._ret;
}

bool __thiscall winISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat( &params );
    return params._ret;
}

bool __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement( &params );
    return params._ret;
}

bool __thiscall winISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamGameServerStats_SteamGameServerStats001_StoreUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats( &params );
    return params._ret;
}

extern vtable_ptr winISteamGameServerStats_SteamGameServerStats001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamGameServerStats_SteamGameServerStats001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameServerStats001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameServerStats_SteamGameServerStats001_vtable, 10, "SteamGameServerStats001");
    r->u_iface = u_iface;
    return r;
}

