/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats_params
{
    void *linux_side;
    uint32_t _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName_params
{
    void *linux_side;
    const char *_ret;
    CGameID nGameID;
    uint32_t iStat;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType_params
{
    void *linux_side;
    uint32_t _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements_params
{
    void *linux_side;
    uint32_t _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName_params
{
    void *linux_side;
    const char *_ret;
    CGameID nGameID;
    uint32_t iAchievement;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    int32_t nData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    float fData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon_params
{
    void *linux_side;
    int32_t _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute_params
{
    void *linux_side;
    const char *_ret;
    CGameID nGameID;
    const char *pchName;
    const char *pchKey;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    uint32_t nCurProgress;
    uint32_t nMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
