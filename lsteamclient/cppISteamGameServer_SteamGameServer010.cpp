#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#include "steamworks_sdk_116/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer010.h"
void cppISteamGameServer_SteamGameServer010_LogOn(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOn();
}

void cppISteamGameServer_SteamGameServer010_LogOff(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOff();
}

bool cppISteamGameServer_SteamGameServer010_BLoggedOn(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->BLoggedOn();
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer010_BSecure(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->BSecure();
    return (_ret);
}

CSteamID cppISteamGameServer_SteamGameServer010_GetSteamID(void *linux_side)
{
    CSteamID _ret;
    _ret = ((ISteamGameServer*)linux_side)->GetSteamID();
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate(void *linux_side, uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->SendUserConnectAndAuthenticate((uint32)unIPClient, (const void *)pvAuthBlob, (uint32)cubAuthBlobSize, (CSteamID *)pSteamIDUser);
    return (_ret);
}

CSteamID cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection(void *linux_side)
{
    CSteamID _ret;
    _ret = ((ISteamGameServer*)linux_side)->CreateUnauthenticatedUserConnection();
    return (_ret);
}

void cppISteamGameServer_SteamGameServer010_SendUserDisconnect(void *linux_side, CSteamID steamIDUser)
{
    ((ISteamGameServer*)linux_side)->SendUserDisconnect((CSteamID)steamIDUser);
}

bool cppISteamGameServer_SteamGameServer010_BUpdateUserData(void *linux_side, CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->BUpdateUserData((CSteamID)steamIDUser, (const char *)pchPlayerName, (uint32)uScore);
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer010_BSetServerType(void *linux_side, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->BSetServerType((uint32)unServerFlags, (uint32)unGameIP, (uint16)unGamePort, (uint16)unSpectatorPort, (uint16)usQueryPort, (const char *)pchGameDir, (const char *)pchVersion, (bool)bLANMode);
    return (_ret);
}

void cppISteamGameServer_SteamGameServer010_UpdateServerStatus(void *linux_side, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    ((ISteamGameServer*)linux_side)->UpdateServerStatus((int)cPlayers, (int)cPlayersMax, (int)cBotPlayers, (const char *)pchServerName, (const char *)pSpectatorServerName, (const char *)pchMapName);
}

void cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort(void *linux_side, uint16 unSpectatorPort)
{
    ((ISteamGameServer*)linux_side)->UpdateSpectatorPort((uint16)unSpectatorPort);
}

void cppISteamGameServer_SteamGameServer010_SetGameTags(void *linux_side, const char *pchGameTags)
{
    ((ISteamGameServer*)linux_side)->SetGameTags((const char *)pchGameTags);
}

void cppISteamGameServer_SteamGameServer010_GetGameplayStats(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->GetGameplayStats();
}

SteamAPICall_t cppISteamGameServer_SteamGameServer010_GetServerReputation(void *linux_side)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamGameServer*)linux_side)->GetServerReputation();
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus(void *linux_side, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->RequestUserGroupStatus((CSteamID)steamIDUser, (CSteamID)steamIDGroup);
    return (_ret);
}

uint32 cppISteamGameServer_SteamGameServer010_GetPublicIP(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamGameServer*)linux_side)->GetPublicIP();
    return (_ret);
}

void cppISteamGameServer_SteamGameServer010_SetGameData(void *linux_side, const char *pchGameData)
{
    ((ISteamGameServer*)linux_side)->SetGameData((const char *)pchGameData);
}

EUserHasLicenseForAppResult cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp(void *linux_side, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    _ret = ((ISteamGameServer*)linux_side)->UserHasLicenseForApp((CSteamID)steamID, (AppId_t)appID);
    return (_ret);
}

HAuthTicket cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket(void *linux_side, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    _ret = ((ISteamGameServer*)linux_side)->GetAuthSessionTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket);
    return (_ret);
}

EBeginAuthSessionResult cppISteamGameServer_SteamGameServer010_BeginAuthSession(void *linux_side, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    _ret = ((ISteamGameServer*)linux_side)->BeginAuthSession((const void *)pAuthTicket, (int)cbAuthTicket, (CSteamID)steamID);
    return (_ret);
}

void cppISteamGameServer_SteamGameServer010_EndAuthSession(void *linux_side, CSteamID steamID)
{
    ((ISteamGameServer*)linux_side)->EndAuthSession((CSteamID)steamID);
}

void cppISteamGameServer_SteamGameServer010_CancelAuthTicket(void *linux_side, HAuthTicket hAuthTicket)
{
    ((ISteamGameServer*)linux_side)->CancelAuthTicket((HAuthTicket)hAuthTicket);
}

#ifdef __cplusplus
}
#endif
