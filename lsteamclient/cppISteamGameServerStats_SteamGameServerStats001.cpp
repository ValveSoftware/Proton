#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#include "steamworks_sdk_147/isteamgameserverstats.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamGameServerStats_SteamGameServerStats001.h"
SteamAPICall_t cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats(void *linux_side, CSteamID steamIDUser)
{
    return ((ISteamGameServerStats*)linux_side)->RequestUserStats((CSteamID)steamIDUser);
}

bool cppISteamGameServerStats_SteamGameServerStats001_GetUserStat(void *linux_side, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    return ((ISteamGameServerStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (int32 *)pData);
}

bool cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2(void *linux_side, CSteamID steamIDUser, const char * pchName, float * pData)
{
    return ((ISteamGameServerStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (float *)pData);
}

bool cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement(void *linux_side, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    return ((ISteamGameServerStats*)linux_side)->GetUserAchievement((CSteamID)steamIDUser, (const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamGameServerStats_SteamGameServerStats001_SetUserStat(void *linux_side, CSteamID steamIDUser, const char * pchName, int32 nData)
{
    return ((ISteamGameServerStats*)linux_side)->SetUserStat((CSteamID)steamIDUser, (const char *)pchName, (int32)nData);
}

bool cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2(void *linux_side, CSteamID steamIDUser, const char * pchName, float fData)
{
    return ((ISteamGameServerStats*)linux_side)->SetUserStat((CSteamID)steamIDUser, (const char *)pchName, (float)fData);
}

bool cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat(void *linux_side, CSteamID steamIDUser, const char * pchName, float flCountThisSession, double dSessionLength)
{
    return ((ISteamGameServerStats*)linux_side)->UpdateUserAvgRateStat((CSteamID)steamIDUser, (const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
}

bool cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement(void *linux_side, CSteamID steamIDUser, const char * pchName)
{
    return ((ISteamGameServerStats*)linux_side)->SetUserAchievement((CSteamID)steamIDUser, (const char *)pchName);
}

bool cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement(void *linux_side, CSteamID steamIDUser, const char * pchName)
{
    return ((ISteamGameServerStats*)linux_side)->ClearUserAchievement((CSteamID)steamIDUser, (const char *)pchName);
}

SteamAPICall_t cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats(void *linux_side, CSteamID steamIDUser)
{
    return ((ISteamGameServerStats*)linux_side)->StoreUserStats((CSteamID)steamIDUser);
}

#ifdef __cplusplus
}
#endif
