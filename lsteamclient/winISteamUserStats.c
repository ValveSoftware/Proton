/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute, 20)

uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats(struct w_steam_iface *_this, CGameID nGameID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats(_this->u_iface, nGameID);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName(struct w_steam_iface *_this, CGameID nGameID, uint32 iStat)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName(_this->u_iface, nGameID, iStat);
    return _ret;
}

ESteamUserStatType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    ESteamUserStatType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType(_this->u_iface, nGameID, pchName);
    return _ret;
}

uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements(struct w_steam_iface *_this, CGameID nGameID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements(_this->u_iface, nGameID);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName(struct w_steam_iface *_this, CGameID nGameID, uint32 iAchievement)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName(_this->u_iface, nGameID, iAchievement);
    return _ret;
}

uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements(struct w_steam_iface *_this, CGameID nGameID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements(_this->u_iface, nGameID);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName(struct w_steam_iface *_this, CGameID nGameID, uint32 iAchievement)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName(_this->u_iface, nGameID, iAchievement);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats(struct w_steam_iface *_this, CGameID nGameID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats(_this->u_iface, nGameID);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat(_this->u_iface, nGameID, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2(_this->u_iface, nGameID, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat(_this->u_iface, nGameID, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2(_this->u_iface, nGameID, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat(_this->u_iface, nGameID, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement(_this->u_iface, nGameID, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement(_this->u_iface, nGameID, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement(_this->u_iface, nGameID, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement(_this->u_iface, nGameID, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats(struct w_steam_iface *_this, CGameID nGameID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats(_this->u_iface, nGameID);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement(_this->u_iface, nGameID, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement(_this->u_iface, nGameID, pchName);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon(_this->u_iface, nGameID, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute(_this->u_iface, nGameID, pchName, pchKey);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_vtable, 22, "STEAMUSERSTATS_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress, 24)

uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats(struct w_steam_iface *_this, CGameID nGameID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats(_this->u_iface, nGameID);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName(struct w_steam_iface *_this, CGameID nGameID, uint32 iStat)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName(_this->u_iface, nGameID, iStat);
    return _ret;
}

ESteamUserStatType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    ESteamUserStatType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType(_this->u_iface, nGameID, pchName);
    return _ret;
}

uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements(struct w_steam_iface *_this, CGameID nGameID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements(_this->u_iface, nGameID);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName(struct w_steam_iface *_this, CGameID nGameID, uint32 iAchievement)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName(_this->u_iface, nGameID, iAchievement);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats(struct w_steam_iface *_this, CGameID nGameID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats(_this->u_iface, nGameID);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat(_this->u_iface, nGameID, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2(_this->u_iface, nGameID, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat(_this->u_iface, nGameID, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2(_this->u_iface, nGameID, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat(_this->u_iface, nGameID, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement(_this->u_iface, nGameID, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement(_this->u_iface, nGameID, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement(_this->u_iface, nGameID, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats(struct w_steam_iface *_this, CGameID nGameID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats(_this->u_iface, nGameID);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon(_this->u_iface, nGameID, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute(_this->u_iface, nGameID, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress(_this->u_iface, nGameID, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_vtable, 18, "STEAMUSERSTATS_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress, 16)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_vtable, 13, "STEAMUSERSTATS_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement, 20)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_vtable, 17, "STEAMUSERSTATS_INTERFACE_VERSION004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore, 24)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats(struct w_steam_iface *_this, bool bAchievementsToo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats(_this->u_iface, bAchievementsToo);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard(_this->u_iface, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard(_this->u_iface, pchLeaderboardName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries(_this->u_iface, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry(_this->u_iface, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, int32 nScore, int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore(_this->u_iface, hSteamLeaderboard, nScore, pScoreDetails, cScoreDetailsCount);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_vtable, 27, "STEAMUSERSTATS_INTERFACE_VERSION005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers, 4)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats(struct w_steam_iface *_this, bool bAchievementsToo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats(_this->u_iface, bAchievementsToo);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard(_this->u_iface, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard(_this->u_iface, pchLeaderboardName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries(_this->u_iface, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry(_this->u_iface, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore(_this->u_iface, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_vtable, 28, "STEAMUSERSTATS_INTERFACE_VERSION006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers, 4)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime(_this->u_iface, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime(_this->u_iface, steamIDUser, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats(struct w_steam_iface *_this, bool bAchievementsToo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats(_this->u_iface, bAchievementsToo);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard(_this->u_iface, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard(_this->u_iface, pchLeaderboardName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries(_this->u_iface, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry(_this->u_iface, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore(_this->u_iface, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_vtable, 30, "STEAMUSERSTATS_INTERFACE_VERSION007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers, 4)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime(_this->u_iface, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime(_this->u_iface, steamIDUser, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats(struct w_steam_iface *_this, bool bAchievementsToo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats(_this->u_iface, bAchievementsToo);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard(_this->u_iface, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard(_this->u_iface, pchLeaderboardName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries(_this->u_iface, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_111x *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry(_this->u_iface, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore(_this->u_iface, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC(_this->u_iface, hSteamLeaderboard, hUGC);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_vtable, 31, "STEAMUSERSTATS_INTERFACE_VERSION008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers, 4)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime(_this->u_iface, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime(_this->u_iface, steamIDUser, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats(struct w_steam_iface *_this, bool bAchievementsToo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats(_this->u_iface, bAchievementsToo);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard(_this->u_iface, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard(_this->u_iface, pchLeaderboardName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries(_this->u_iface, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers(_this->u_iface, hSteamLeaderboard, prgUsers, cUsers);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_113 *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry(_this->u_iface, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore(_this->u_iface, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC(_this->u_iface, hSteamLeaderboard, hUGC);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_vtable, 32, "STEAMUSERSTATS_INTERFACE_VERSION009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2, 16)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime(_this->u_iface, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime(_this->u_iface, steamIDUser, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats(struct w_steam_iface *_this, bool bAchievementsToo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats(_this->u_iface, bAchievementsToo);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard(_this->u_iface, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard(_this->u_iface, pchLeaderboardName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries(_this->u_iface, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers(_this->u_iface, hSteamLeaderboard, prgUsers, cUsers);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_119 *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry(_this->u_iface, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore(_this->u_iface, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC(_this->u_iface, hSteamLeaderboard, hUGC);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo(struct w_steam_iface *_this, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo(_this->u_iface, pchName, unNameBufLen, pflPercent, pbAchieved);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo(struct w_steam_iface *_this, int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo(_this->u_iface, iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent(struct w_steam_iface *_this, const char *pchName, float *pflPercent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent(_this->u_iface, pchName, pflPercent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats(struct w_steam_iface *_this, int nHistoryDays)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats(_this->u_iface, nHistoryDays);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat(struct w_steam_iface *_this, const char *pchStatName, int64 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat(_this->u_iface, pchStatName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2(struct w_steam_iface *_this, const char *pchStatName, double *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2(_this->u_iface, pchStatName, pData);
    return _ret;
}

int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory(struct w_steam_iface *_this, const char *pchStatName, int64 *pData, uint32 cubData)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory(_this->u_iface, pchStatName, pData, cubData);
    return _ret;
}

int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2(struct w_steam_iface *_this, const char *pchStatName, double *pData, uint32 cubData)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2(_this->u_iface, pchStatName, pData, cubData);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_vtable, 41, "STEAMUSERSTATS_INTERFACE_VERSION010");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2, 16)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime(_this->u_iface, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName(struct w_steam_iface *_this, uint32 iAchievement)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName(_this->u_iface, iAchievement);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime(_this->u_iface, steamIDUser, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats(struct w_steam_iface *_this, bool bAchievementsToo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats(_this->u_iface, bAchievementsToo);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard(_this->u_iface, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard(_this->u_iface, pchLeaderboardName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries(_this->u_iface, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers(_this->u_iface, hSteamLeaderboard, prgUsers, cUsers);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_148a *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry(_this->u_iface, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore(_this->u_iface, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC(_this->u_iface, hSteamLeaderboard, hUGC);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo(struct w_steam_iface *_this, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo(_this->u_iface, pchName, unNameBufLen, pflPercent, pbAchieved);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo(struct w_steam_iface *_this, int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo(_this->u_iface, iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent(struct w_steam_iface *_this, const char *pchName, float *pflPercent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent(_this->u_iface, pchName, pflPercent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats(struct w_steam_iface *_this, int nHistoryDays)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats(_this->u_iface, nHistoryDays);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(struct w_steam_iface *_this, const char *pchStatName, int64 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(_this->u_iface, pchStatName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2(struct w_steam_iface *_this, const char *pchStatName, double *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2(_this->u_iface, pchStatName, pData);
    return _ret;
}

int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(struct w_steam_iface *_this, const char *pchStatName, int64 *pData, uint32 cubData)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(_this->u_iface, pchStatName, pData, cubData);
    return _ret;
}

int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2(struct w_steam_iface *_this, const char *pchStatName, double *pData, uint32 cubData)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2(_this->u_iface, pchStatName, pData, cubData);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_vtable, 43, "STEAMUSERSTATS_INTERFACE_VERSION011");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012.h"

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore, 28)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages, 4)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats, 8)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2, 12)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits, 16)
DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2, 16)

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat(struct w_steam_iface *_this, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2(_this->u_iface, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat(struct w_steam_iface *_this, const char *pchName, int32 nData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat(_this->u_iface, pchName, nData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2(_this->u_iface, pchName, fData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat(_this->u_iface, pchName, flCountThisSession, dSessionLength);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement(_this->u_iface, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement(_this->u_iface, pchName);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime(_this->u_iface, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon(_this->u_iface, pchName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute(_this->u_iface, pchName, pchKey);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress(_this->u_iface, pchName, nCurProgress, nMaxProgress);
    return _ret;
}

uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements(_this->u_iface);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName(struct w_steam_iface *_this, uint32 iAchievement)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName(_this->u_iface, iAchievement);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats(_this->u_iface, steamIDUser);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2(_this->u_iface, steamIDUser, pchName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement(_this->u_iface, steamIDUser, pchName, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime(_this->u_iface, steamIDUser, pchName, pbAchieved, punUnlockTime);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats(struct w_steam_iface *_this, bool bAchievementsToo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats(_this->u_iface, bAchievementsToo);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard(_this->u_iface, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard(_this->u_iface, pchLeaderboardName);
    return _ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType(_this->u_iface, hSteamLeaderboard);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries(_this->u_iface, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers(_this->u_iface, hSteamLeaderboard, prgUsers, cUsers);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_158 *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry(_this->u_iface, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore(_this->u_iface, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC(struct w_steam_iface *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC(_this->u_iface, hSteamLeaderboard, hUGC);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages(_this->u_iface);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo(struct w_steam_iface *_this, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo(_this->u_iface, pchName, unNameBufLen, pflPercent, pbAchieved);
    return _ret;
}

int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo(struct w_steam_iface *_this, int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo(_this->u_iface, iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent(struct w_steam_iface *_this, const char *pchName, float *pflPercent)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent(_this->u_iface, pchName, pflPercent);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats(struct w_steam_iface *_this, int nHistoryDays)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats(_this->u_iface, nHistoryDays);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat(struct w_steam_iface *_this, const char *pchStatName, int64 *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat(_this->u_iface, pchStatName, pData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2(struct w_steam_iface *_this, const char *pchStatName, double *pData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2(_this->u_iface, pchStatName, pData);
    return _ret;
}

int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory(struct w_steam_iface *_this, const char *pchStatName, int64 *pData, uint32 cubData)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory(_this->u_iface, pchStatName, pData, cubData);
    return _ret;
}

int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2(struct w_steam_iface *_this, const char *pchStatName, double *pData, uint32 cubData)
{
    int32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2(_this->u_iface, pchStatName, pData, cubData);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits(struct w_steam_iface *_this, const char *pchName, int32 *pnMinProgress, int32 *pnMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits(_this->u_iface, pchName, pnMinProgress, pnMaxProgress);
    return _ret;
}

bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2(struct w_steam_iface *_this, const char *pchName, float *pfMinProgress, float *pfMaxProgress)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2(_this->u_iface, pchName, pfMinProgress, pfMaxProgress);
    return _ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_vtable, 45, "STEAMUSERSTATS_INTERFACE_VERSION012");
    r->u_iface = u_iface;
    return r;
}

