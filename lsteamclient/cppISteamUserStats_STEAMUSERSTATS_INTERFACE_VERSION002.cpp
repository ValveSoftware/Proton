#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002.h"
uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats(void *linux_side, CGameID nGameID)
{
    uint32 _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetNumStats((CGameID)nGameID);
    return (_ret);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName(void *linux_side, CGameID nGameID, uint32 iStat)
{
    const char *_ret;
    _ret = ((ISteamUserStats*)linux_side)->GetStatName((CGameID)nGameID, (uint32)iStat);
    return (_ret);
}

ESteamUserStatType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType(void *linux_side, CGameID nGameID, const char *pchName)
{
    ESteamUserStatType _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetStatType((CGameID)nGameID, (const char *)pchName);
    return (_ret);
}

uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements(void *linux_side, CGameID nGameID)
{
    uint32 _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetNumAchievements((CGameID)nGameID);
    return (_ret);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName(void *linux_side, CGameID nGameID, uint32 iAchievement)
{
    const char *_ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementName((CGameID)nGameID, (uint32)iAchievement);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats(void *linux_side, CGameID nGameID)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->RequestCurrentStats((CGameID)nGameID);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat(void *linux_side, CGameID nGameID, const char *pchName, int32 *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetStat((CGameID)nGameID, (const char *)pchName, (int32 *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2(void *linux_side, CGameID nGameID, const char *pchName, float *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetStat((CGameID)nGameID, (const char *)pchName, (float *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat(void *linux_side, CGameID nGameID, const char *pchName, int32 nData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetStat((CGameID)nGameID, (const char *)pchName, (int32)nData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2(void *linux_side, CGameID nGameID, const char *pchName, float fData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetStat((CGameID)nGameID, (const char *)pchName, (float)fData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat(void *linux_side, CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->UpdateAvgRateStat((CGameID)nGameID, (const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement(void *linux_side, CGameID nGameID, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievement((CGameID)nGameID, (const char *)pchName, (bool *)pbAchieved);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement(void *linux_side, CGameID nGameID, const char *pchName)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetAchievement((CGameID)nGameID, (const char *)pchName);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement(void *linux_side, CGameID nGameID, const char *pchName)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->ClearAchievement((CGameID)nGameID, (const char *)pchName);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats(void *linux_side, CGameID nGameID)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->StoreStats((CGameID)nGameID);
    return (_ret);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon(void *linux_side, CGameID nGameID, const char *pchName)
{
    int _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementIcon((CGameID)nGameID, (const char *)pchName);
    return (_ret);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute(void *linux_side, CGameID nGameID, const char *pchName, const char *pchKey)
{
    const char *_ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementDisplayAttribute((CGameID)nGameID, (const char *)pchName, (const char *)pchKey);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress(void *linux_side, CGameID nGameID, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->IndicateAchievementProgress((CGameID)nGameID, (const char *)pchName, (uint32)nCurProgress, (uint32)nMaxProgress);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
