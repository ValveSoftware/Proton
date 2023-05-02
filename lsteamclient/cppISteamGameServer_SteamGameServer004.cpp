#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_100/steam_api.h"
#include "steamworks_sdk_100/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_100
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer004.h"
void cppISteamGameServer_SteamGameServer004_LogOn(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOn();
}

void cppISteamGameServer_SteamGameServer004_LogOff(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOff();
}

bool cppISteamGameServer_SteamGameServer004_BLoggedOn(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->BLoggedOn();
}

bool cppISteamGameServer_SteamGameServer004_BSecure(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->BSecure();
}

CSteamID cppISteamGameServer_SteamGameServer004_GetSteamID(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->GetSteamID();
}

void cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate(void *linux_side, CSteamID steamIDUser, uint32 unIPClient, void * pvAuthBlob, uint32 cubAuthBlobSize)
{
    ((ISteamGameServer*)linux_side)->SendUserConnectAndAuthenticate((CSteamID)steamIDUser, (uint32)unIPClient, (void *)pvAuthBlob, (uint32)cubAuthBlobSize);
}

CSteamID cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->CreateUnauthenticatedUserConnection();
}

void cppISteamGameServer_SteamGameServer004_SendUserDisconnect(void *linux_side, CSteamID steamIDUser)
{
    ((ISteamGameServer*)linux_side)->SendUserDisconnect((CSteamID)steamIDUser);
}

bool cppISteamGameServer_SteamGameServer004_BUpdateUserData(void *linux_side, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    return ((ISteamGameServer*)linux_side)->BUpdateUserData((CSteamID)steamIDUser, (const char *)pchPlayerName, (uint32)uScore);
}

bool cppISteamGameServer_SteamGameServer004_BSetServerType(void *linux_side, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    return ((ISteamGameServer*)linux_side)->BSetServerType((int32)nGameAppId, (uint32)unServerFlags, (uint32)unGameIP, (uint16)unGamePort, (uint16)unSpectatorPort, (uint16)usQueryPort, (const char *)pchGameDir, (const char *)pchVersion, (bool)bLANMode);
}

void cppISteamGameServer_SteamGameServer004_UpdateServerStatus(void *linux_side, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    ((ISteamGameServer*)linux_side)->UpdateServerStatus((int)cPlayers, (int)cPlayersMax, (int)cBotPlayers, (const char *)pchServerName, (const char *)pSpectatorServerName, (const char *)pchMapName);
}

void cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort(void *linux_side, uint16 unSpectatorPort)
{
    ((ISteamGameServer*)linux_side)->UpdateSpectatorPort((uint16)unSpectatorPort);
}

void cppISteamGameServer_SteamGameServer004_SetGameType(void *linux_side, const char * pchGameType)
{
    ((ISteamGameServer*)linux_side)->SetGameType((const char *)pchGameType);
}

bool cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus(void *linux_side, CSteamID steamID, const char * pchAchievementName)
{
    return ((ISteamGameServer*)linux_side)->BGetUserAchievementStatus((CSteamID)steamID, (const char *)pchAchievementName);
}

#ifdef __cplusplus
}
#endif
