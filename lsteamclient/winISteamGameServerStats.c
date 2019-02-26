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

#include "cppISteamGameServerStats_SteamGameServerStats001.h"

typedef struct __winISteamGameServerStats_SteamGameServerStats001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameServerStats_SteamGameServerStats001;

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamGameServerStats_SteamGameServerStats001_RequestUserStats(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_GetUserStat, 20)
bool __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserStat(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_GetUserStat_2, 20)
bool __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserStat_2(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_GetUserAchievement, 20)
bool __thiscall winISteamGameServerStats_SteamGameServerStats001_GetUserAchievement(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_SetUserStat, 20)
bool __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserStat(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_SetUserStat(_this->linux_side, steamIDUser, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_SetUserStat_2, 20)
bool __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserStat_2(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2(_this->linux_side, steamIDUser, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat, 28)
bool __thiscall winISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat(_this->linux_side, steamIDUser, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_SetUserAchievement, 16)
bool __thiscall winISteamGameServerStats_SteamGameServerStats001_SetUserAchievement(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement(_this->linux_side, steamIDUser, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement, 16)
bool __thiscall winISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement(_this->linux_side, steamIDUser, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameServerStats_SteamGameServerStats001_StoreUserStats, 12)
SteamAPICall_t __thiscall winISteamGameServerStats_SteamGameServerStats001_StoreUserStats(winISteamGameServerStats_SteamGameServerStats001 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats(_this->linux_side, steamIDUser);
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

winISteamGameServerStats_SteamGameServerStats001 *create_winISteamGameServerStats_SteamGameServerStats001(void *linux_side)
{
    winISteamGameServerStats_SteamGameServerStats001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameServerStats_SteamGameServerStats001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameServerStats_SteamGameServerStats001_vtable;
    r->linux_side = linux_side;
    return r;
}

