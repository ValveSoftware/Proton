/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName(struct w_steam_iface *_this, CGameID nGameID, uint32_t iStat)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .iStat = iStat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName(struct w_steam_iface *_this, CGameID nGameID, uint32_t iAchievement)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .iAchievement = iAchievement,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName(struct w_steam_iface *_this, CGameID nGameID, uint32_t iAchievement)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .iAchievement = iAchievement,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_vtable, 22, "STEAMUSERSTATS_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

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

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName(struct w_steam_iface *_this, CGameID nGameID, uint32_t iStat)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .iStat = iStat,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName(struct w_steam_iface *_this, CGameID nGameID, uint32_t iAchievement)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .iAchievement = iAchievement,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats(struct w_steam_iface *_this, CGameID nGameID)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon(struct w_steam_iface *_this, CGameID nGameID, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress(struct w_steam_iface *_this, CGameID nGameID, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_vtable, 18, "STEAMUSERSTATS_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_vtable, 13, "STEAMUSERSTATS_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_vtable, 17, "STEAMUSERSTATS_INTERFACE_VERSION004");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats(struct w_steam_iface *_this, int8_t bAchievementsToo)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats_params params =
    {
        .linux_side = _this->u_iface,
        .bAchievementsToo = bAchievementsToo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
        .eLeaderboardSortMethod = eLeaderboardSortMethod,
        .eLeaderboardDisplayType = eLeaderboardDisplayType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardDataRequest = eLeaderboardDataRequest,
        .nRangeStart = nRangeStart,
        .nRangeEnd = nRangeEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, uint64_t hSteamLeaderboardEntries, int32_t index, w_LeaderboardEntry_t_104 *pLeaderboardEntry, int32_t *pDetails, int32_t cDetailsMax)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboardEntries = hSteamLeaderboardEntries,
        .index = index,
        .pLeaderboardEntry = pLeaderboardEntry,
        .pDetails = pDetails,
        .cDetailsMax = cDetailsMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, int32_t nScore, int32_t *pScoreDetails, int32_t cScoreDetailsCount)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .nScore = nScore,
        .pScoreDetails = pScoreDetails,
        .cScoreDetailsCount = cScoreDetailsCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_vtable, 27, "STEAMUSERSTATS_INTERFACE_VERSION005");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats(struct w_steam_iface *_this, int8_t bAchievementsToo)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats_params params =
    {
        .linux_side = _this->u_iface,
        .bAchievementsToo = bAchievementsToo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
        .eLeaderboardSortMethod = eLeaderboardSortMethod,
        .eLeaderboardDisplayType = eLeaderboardDisplayType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardDataRequest = eLeaderboardDataRequest,
        .nRangeStart = nRangeStart,
        .nRangeEnd = nRangeEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, uint64_t hSteamLeaderboardEntries, int32_t index, w_LeaderboardEntry_t_104 *pLeaderboardEntry, int32_t *pDetails, int32_t cDetailsMax)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboardEntries = hSteamLeaderboardEntries,
        .index = index,
        .pLeaderboardEntry = pLeaderboardEntry,
        .pDetails = pDetails,
        .cDetailsMax = cDetailsMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardUploadScoreMethod, int32_t nScore, const int32_t *pScoreDetails, int32_t cScoreDetailsCount)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardUploadScoreMethod = eLeaderboardUploadScoreMethod,
        .nScore = nScore,
        .pScoreDetails = pScoreDetails,
        .cScoreDetailsCount = cScoreDetailsCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_vtable, 28, "STEAMUSERSTATS_INTERFACE_VERSION006");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats(struct w_steam_iface *_this, int8_t bAchievementsToo)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats_params params =
    {
        .linux_side = _this->u_iface,
        .bAchievementsToo = bAchievementsToo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
        .eLeaderboardSortMethod = eLeaderboardSortMethod,
        .eLeaderboardDisplayType = eLeaderboardDisplayType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardDataRequest = eLeaderboardDataRequest,
        .nRangeStart = nRangeStart,
        .nRangeEnd = nRangeEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, uint64_t hSteamLeaderboardEntries, int32_t index, w_LeaderboardEntry_t_104 *pLeaderboardEntry, int32_t *pDetails, int32_t cDetailsMax)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboardEntries = hSteamLeaderboardEntries,
        .index = index,
        .pLeaderboardEntry = pLeaderboardEntry,
        .pDetails = pDetails,
        .cDetailsMax = cDetailsMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardUploadScoreMethod, int32_t nScore, const int32_t *pScoreDetails, int32_t cScoreDetailsCount)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardUploadScoreMethod = eLeaderboardUploadScoreMethod,
        .nScore = nScore,
        .pScoreDetails = pScoreDetails,
        .cScoreDetailsCount = cScoreDetailsCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_vtable, 30, "STEAMUSERSTATS_INTERFACE_VERSION007");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats(struct w_steam_iface *_this, int8_t bAchievementsToo)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats_params params =
    {
        .linux_side = _this->u_iface,
        .bAchievementsToo = bAchievementsToo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
        .eLeaderboardSortMethod = eLeaderboardSortMethod,
        .eLeaderboardDisplayType = eLeaderboardDisplayType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardDataRequest = eLeaderboardDataRequest,
        .nRangeStart = nRangeStart,
        .nRangeEnd = nRangeEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, uint64_t hSteamLeaderboardEntries, int32_t index, w_LeaderboardEntry_t_111x *pLeaderboardEntry, int32_t *pDetails, int32_t cDetailsMax)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboardEntries = hSteamLeaderboardEntries,
        .index = index,
        .pLeaderboardEntry = pLeaderboardEntry,
        .pDetails = pDetails,
        .cDetailsMax = cDetailsMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardUploadScoreMethod, int32_t nScore, const int32_t *pScoreDetails, int32_t cScoreDetailsCount)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardUploadScoreMethod = eLeaderboardUploadScoreMethod,
        .nScore = nScore,
        .pScoreDetails = pScoreDetails,
        .cScoreDetailsCount = cScoreDetailsCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint64_t hUGC)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .hUGC = hUGC,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_vtable, 31, "STEAMUSERSTATS_INTERFACE_VERSION008");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats(struct w_steam_iface *_this, int8_t bAchievementsToo)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats_params params =
    {
        .linux_side = _this->u_iface,
        .bAchievementsToo = bAchievementsToo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
        .eLeaderboardSortMethod = eLeaderboardSortMethod,
        .eLeaderboardDisplayType = eLeaderboardDisplayType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardDataRequest = eLeaderboardDataRequest,
        .nRangeStart = nRangeStart,
        .nRangeEnd = nRangeEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, CSteamID *prgUsers, int32_t cUsers)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .prgUsers = prgUsers,
        .cUsers = cUsers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, uint64_t hSteamLeaderboardEntries, int32_t index, w_LeaderboardEntry_t_111x *pLeaderboardEntry, int32_t *pDetails, int32_t cDetailsMax)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboardEntries = hSteamLeaderboardEntries,
        .index = index,
        .pLeaderboardEntry = pLeaderboardEntry,
        .pDetails = pDetails,
        .cDetailsMax = cDetailsMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardUploadScoreMethod, int32_t nScore, const int32_t *pScoreDetails, int32_t cScoreDetailsCount)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardUploadScoreMethod = eLeaderboardUploadScoreMethod,
        .nScore = nScore,
        .pScoreDetails = pScoreDetails,
        .cScoreDetailsCount = cScoreDetailsCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint64_t hUGC)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .hUGC = hUGC,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_vtable, 32, "STEAMUSERSTATS_INTERFACE_VERSION009");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats(struct w_steam_iface *_this, int8_t bAchievementsToo)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats_params params =
    {
        .linux_side = _this->u_iface,
        .bAchievementsToo = bAchievementsToo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
        .eLeaderboardSortMethod = eLeaderboardSortMethod,
        .eLeaderboardDisplayType = eLeaderboardDisplayType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardDataRequest = eLeaderboardDataRequest,
        .nRangeStart = nRangeStart,
        .nRangeEnd = nRangeEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, CSteamID *prgUsers, int32_t cUsers)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .prgUsers = prgUsers,
        .cUsers = cUsers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, uint64_t hSteamLeaderboardEntries, int32_t index, w_LeaderboardEntry_t_111x *pLeaderboardEntry, int32_t *pDetails, int32_t cDetailsMax)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboardEntries = hSteamLeaderboardEntries,
        .index = index,
        .pLeaderboardEntry = pLeaderboardEntry,
        .pDetails = pDetails,
        .cDetailsMax = cDetailsMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardUploadScoreMethod, int32_t nScore, const int32_t *pScoreDetails, int32_t cScoreDetailsCount)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardUploadScoreMethod = eLeaderboardUploadScoreMethod,
        .nScore = nScore,
        .pScoreDetails = pScoreDetails,
        .cScoreDetailsCount = cScoreDetailsCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint64_t hUGC)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .hUGC = hUGC,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo(struct w_steam_iface *_this, char *pchName, uint32_t unNameBufLen, float *pflPercent, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .unNameBufLen = unNameBufLen,
        .pflPercent = pflPercent,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo(struct w_steam_iface *_this, int32_t iIteratorPrevious, char *pchName, uint32_t unNameBufLen, float *pflPercent, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo_params params =
    {
        .linux_side = _this->u_iface,
        .iIteratorPrevious = iIteratorPrevious,
        .pchName = pchName,
        .unNameBufLen = unNameBufLen,
        .pflPercent = pflPercent,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent(struct w_steam_iface *_this, const char *pchName, float *pflPercent)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pflPercent = pflPercent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats(struct w_steam_iface *_this, int32_t nHistoryDays)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats_params params =
    {
        .linux_side = _this->u_iface,
        .nHistoryDays = nHistoryDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat(struct w_steam_iface *_this, const char *pchStatName, int64_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2(struct w_steam_iface *_this, const char *pchStatName, double *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory(struct w_steam_iface *_this, const char *pchStatName, int64_t *pData, uint32_t cubData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2(struct w_steam_iface *_this, const char *pchStatName, double *pData, uint32_t cubData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_vtable, 41, "STEAMUSERSTATS_INTERFACE_VERSION010");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName(struct w_steam_iface *_this, uint32_t iAchievement)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName_params params =
    {
        .linux_side = _this->u_iface,
        .iAchievement = iAchievement,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats(struct w_steam_iface *_this, int8_t bAchievementsToo)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats_params params =
    {
        .linux_side = _this->u_iface,
        .bAchievementsToo = bAchievementsToo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
        .eLeaderboardSortMethod = eLeaderboardSortMethod,
        .eLeaderboardDisplayType = eLeaderboardDisplayType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardDataRequest = eLeaderboardDataRequest,
        .nRangeStart = nRangeStart,
        .nRangeEnd = nRangeEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, CSteamID *prgUsers, int32_t cUsers)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .prgUsers = prgUsers,
        .cUsers = cUsers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, uint64_t hSteamLeaderboardEntries, int32_t index, w_LeaderboardEntry_t_123 *pLeaderboardEntry, int32_t *pDetails, int32_t cDetailsMax)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboardEntries = hSteamLeaderboardEntries,
        .index = index,
        .pLeaderboardEntry = pLeaderboardEntry,
        .pDetails = pDetails,
        .cDetailsMax = cDetailsMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardUploadScoreMethod, int32_t nScore, const int32_t *pScoreDetails, int32_t cScoreDetailsCount)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardUploadScoreMethod = eLeaderboardUploadScoreMethod,
        .nScore = nScore,
        .pScoreDetails = pScoreDetails,
        .cScoreDetailsCount = cScoreDetailsCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint64_t hUGC)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .hUGC = hUGC,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo(struct w_steam_iface *_this, char *pchName, uint32_t unNameBufLen, float *pflPercent, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .unNameBufLen = unNameBufLen,
        .pflPercent = pflPercent,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo(struct w_steam_iface *_this, int32_t iIteratorPrevious, char *pchName, uint32_t unNameBufLen, float *pflPercent, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo_params params =
    {
        .linux_side = _this->u_iface,
        .iIteratorPrevious = iIteratorPrevious,
        .pchName = pchName,
        .unNameBufLen = unNameBufLen,
        .pflPercent = pflPercent,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent(struct w_steam_iface *_this, const char *pchName, float *pflPercent)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pflPercent = pflPercent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats(struct w_steam_iface *_this, int32_t nHistoryDays)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats_params params =
    {
        .linux_side = _this->u_iface,
        .nHistoryDays = nHistoryDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(struct w_steam_iface *_this, const char *pchStatName, int64_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2(struct w_steam_iface *_this, const char *pchStatName, double *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(struct w_steam_iface *_this, const char *pchStatName, int64_t *pData, uint32_t cubData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2(struct w_steam_iface *_this, const char *pchStatName, double *pData, uint32_t cubData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_vtable, 43, "STEAMUSERSTATS_INTERFACE_VERSION011");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat(struct w_steam_iface *_this, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2(struct w_steam_iface *_this, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat(struct w_steam_iface *_this, const char *pchName, int32_t nData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2(struct w_steam_iface *_this, const char *pchName, float fData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat(struct w_steam_iface *_this, const char *pchName, float flCountThisSession, double dSessionLength)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .flCountThisSession = flCountThisSession,
        .dSessionLength = dSessionLength,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime(struct w_steam_iface *_this, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon(struct w_steam_iface *_this, const char *pchName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute(struct w_steam_iface *_this, const char *pchName, const char *pchKey)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress(struct w_steam_iface *_this, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .nCurProgress = nCurProgress,
        .nMaxProgress = nMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName(struct w_steam_iface *_this, uint32_t iAchievement)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName_params params =
    {
        .linux_side = _this->u_iface,
        .iAchievement = iAchievement,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats(struct w_steam_iface *_this, CSteamID steamIDUser)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, float *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime(struct w_steam_iface *_this, CSteamID steamIDUser, const char *pchName, int8_t *pbAchieved, uint32_t *punUnlockTime)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDUser = steamIDUser,
        .pchName = pchName,
        .pbAchieved = pbAchieved,
        .punUnlockTime = punUnlockTime,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats(struct w_steam_iface *_this, int8_t bAchievementsToo)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats_params params =
    {
        .linux_side = _this->u_iface,
        .bAchievementsToo = bAchievementsToo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
        .eLeaderboardSortMethod = eLeaderboardSortMethod,
        .eLeaderboardDisplayType = eLeaderboardDisplayType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard(struct w_steam_iface *_this, const char *pchLeaderboardName)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard_params params =
    {
        .linux_side = _this->u_iface,
        .pchLeaderboardName = pchLeaderboardName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard, &params );
    return params._ret;
}

const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType(struct w_steam_iface *_this, uint64_t hSteamLeaderboard)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int32_t nRangeStart, int32_t nRangeEnd)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardDataRequest = eLeaderboardDataRequest,
        .nRangeStart = nRangeStart,
        .nRangeEnd = nRangeEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, CSteamID *prgUsers, int32_t cUsers)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .prgUsers = prgUsers,
        .cUsers = cUsers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry(struct w_steam_iface *_this, uint64_t hSteamLeaderboardEntries, int32_t index, w_LeaderboardEntry_t_123 *pLeaderboardEntry, int32_t *pDetails, int32_t cDetailsMax)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboardEntries = hSteamLeaderboardEntries,
        .index = index,
        .pLeaderboardEntry = pLeaderboardEntry,
        .pDetails = pDetails,
        .cDetailsMax = cDetailsMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint32_t eLeaderboardUploadScoreMethod, int32_t nScore, const int32_t *pScoreDetails, int32_t cScoreDetailsCount)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .eLeaderboardUploadScoreMethod = eLeaderboardUploadScoreMethod,
        .nScore = nScore,
        .pScoreDetails = pScoreDetails,
        .cScoreDetailsCount = cScoreDetailsCount,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC(struct w_steam_iface *_this, uint64_t hSteamLeaderboard, uint64_t hUGC)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamLeaderboard = hSteamLeaderboard,
        .hUGC = hUGC,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages(struct w_steam_iface *_this)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo(struct w_steam_iface *_this, char *pchName, uint32_t unNameBufLen, float *pflPercent, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .unNameBufLen = unNameBufLen,
        .pflPercent = pflPercent,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo(struct w_steam_iface *_this, int32_t iIteratorPrevious, char *pchName, uint32_t unNameBufLen, float *pflPercent, int8_t *pbAchieved)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo_params params =
    {
        .linux_side = _this->u_iface,
        .iIteratorPrevious = iIteratorPrevious,
        .pchName = pchName,
        .unNameBufLen = unNameBufLen,
        .pflPercent = pflPercent,
        .pbAchieved = pbAchieved,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent(struct w_steam_iface *_this, const char *pchName, float *pflPercent)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pflPercent = pflPercent,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats(struct w_steam_iface *_this, int32_t nHistoryDays)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats_params params =
    {
        .linux_side = _this->u_iface,
        .nHistoryDays = nHistoryDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat(struct w_steam_iface *_this, const char *pchStatName, int64_t *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2(struct w_steam_iface *_this, const char *pchStatName, double *pData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory(struct w_steam_iface *_this, const char *pchStatName, int64_t *pData, uint32_t cubData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory, &params );
    return params._ret;
}

int32_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2(struct w_steam_iface *_this, const char *pchStatName, double *pData, uint32_t cubData)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchStatName = pchStatName,
        .pData = pData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits(struct w_steam_iface *_this, const char *pchName, int32_t *pnMinProgress, int32_t *pnMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pnMinProgress = pnMinProgress,
        .pnMaxProgress = pnMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits, &params );
    return params._ret;
}

int8_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2(struct w_steam_iface *_this, const char *pchName, float *pfMinProgress, float *pfMaxProgress)
{
    struct ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .pfMinProgress = pfMinProgress,
        .pfMaxProgress = pfMaxProgress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2, &params );
    return params._ret;
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_vtable;

DEFINE_RTTI_DATA0(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012, 0, ".?AVISteamUserStats@@")

__ASM_BLOCK_BEGIN(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUSERSTATS_INTERFACE_VERSION012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_vtable, 45, "STEAMUSERSTATS_INTERFACE_VERSION012");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamUserStats_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_rtti( base );
    init_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_rtti( base );
#endif /* __x86_64__ */
}
