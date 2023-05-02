#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_104/steam_api.h"
#include "steamworks_sdk_104/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_104
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer008.h"
void cppISteamGameServer_SteamGameServer008_LogOn(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOn();
}

void cppISteamGameServer_SteamGameServer008_LogOff(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOff();
}

bool cppISteamGameServer_SteamGameServer008_BLoggedOn(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->BLoggedOn();
}

bool cppISteamGameServer_SteamGameServer008_BSecure(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->BSecure();
}

CSteamID cppISteamGameServer_SteamGameServer008_GetSteamID(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->GetSteamID();
}

bool cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate(void *linux_side, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    return ((ISteamGameServer*)linux_side)->SendUserConnectAndAuthenticate((uint32)unIPClient, (const void *)pvAuthBlob, (uint32)cubAuthBlobSize, (CSteamID *)pSteamIDUser);
}

CSteamID cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->CreateUnauthenticatedUserConnection();
}

void cppISteamGameServer_SteamGameServer008_SendUserDisconnect(void *linux_side, CSteamID steamIDUser)
{
    ((ISteamGameServer*)linux_side)->SendUserDisconnect((CSteamID)steamIDUser);
}

bool cppISteamGameServer_SteamGameServer008_BUpdateUserData(void *linux_side, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    return ((ISteamGameServer*)linux_side)->BUpdateUserData((CSteamID)steamIDUser, (const char *)pchPlayerName, (uint32)uScore);
}

bool cppISteamGameServer_SteamGameServer008_BSetServerType(void *linux_side, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    return ((ISteamGameServer*)linux_side)->BSetServerType((uint32)unServerFlags, (uint32)unGameIP, (uint16)unGamePort, (uint16)unSpectatorPort, (uint16)usQueryPort, (const char *)pchGameDir, (const char *)pchVersion, (bool)bLANMode);
}

void cppISteamGameServer_SteamGameServer008_UpdateServerStatus(void *linux_side, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    ((ISteamGameServer*)linux_side)->UpdateServerStatus((int)cPlayers, (int)cPlayersMax, (int)cBotPlayers, (const char *)pchServerName, (const char *)pSpectatorServerName, (const char *)pchMapName);
}

void cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort(void *linux_side, uint16 unSpectatorPort)
{
    ((ISteamGameServer*)linux_side)->UpdateSpectatorPort((uint16)unSpectatorPort);
}

void cppISteamGameServer_SteamGameServer008_SetGameType(void *linux_side, const char * pchGameType)
{
    ((ISteamGameServer*)linux_side)->SetGameType((const char *)pchGameType);
}

bool cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus(void *linux_side, CSteamID steamID, const char * pchAchievementName)
{
    return ((ISteamGameServer*)linux_side)->BGetUserAchievementStatus((CSteamID)steamID, (const char *)pchAchievementName);
}

void cppISteamGameServer_SteamGameServer008_GetGameplayStats(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->GetGameplayStats();
}

bool cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus(void *linux_side, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    return ((ISteamGameServer*)linux_side)->RequestUserGroupStatus((CSteamID)steamIDUser, (CSteamID)steamIDGroup);
}

uint32 cppISteamGameServer_SteamGameServer008_GetPublicIP(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->GetPublicIP();
}

#ifdef __cplusplus
}
#endif
