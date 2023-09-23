#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#include "steamworks_sdk_099y/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer003.h"
void cppISteamGameServer_SteamGameServer003_LogOn(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOn();
}

void cppISteamGameServer_SteamGameServer003_LogOff(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOff();
}

bool cppISteamGameServer_SteamGameServer003_BLoggedOn(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->BLoggedOn();
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer003_BSecure(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->BSecure();
    return (_ret);
}

CSteamID cppISteamGameServer_SteamGameServer003_GetSteamID(void *linux_side)
{
    CSteamID _ret;
    _ret = ((ISteamGameServer*)linux_side)->GetSteamID();
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient(void *linux_side, void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSGetSteam2GetEncryptionKeyToSendToNewClient((void *)pvEncryptionKey, (uint32 *)pcbEncryptionKey, (uint32)cbMaxEncryptionKey);
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer003_GSSendUserConnect(void *linux_side, uint32 unUserID, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSSendUserConnect((uint32)unUserID, (uint32)unIPPublic, (uint16)usPort, (const void *)pvCookie, (uint32)cubCookie);
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect(void *linux_side, uint32 unUserID)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSRemoveUserConnect((uint32)unUserID);
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect(void *linux_side, CSteamID steamID, uint32 unUserID)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSSendUserDisconnect((CSteamID)steamID, (uint32)unUserID);
    return (_ret);
}

void cppISteamGameServer_SteamGameServer003_GSSetSpawnCount(void *linux_side, uint32 ucSpawn)
{
    ((ISteamGameServer*)linux_side)->GSSetSpawnCount((uint32)ucSpawn);
}

bool cppISteamGameServer_SteamGameServer003_GSSetServerType(void *linux_side, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSSetServerType((int32)nGameAppId, (uint32)unServerFlags, (uint32)unGameIP, (uint16)unGamePort, (uint16)unSpectatorPort, (uint16)usQueryPort, (const char *)pchGameDir, (const char *)pchVersion, (bool)bLANMode);
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer003_GSUpdateStatus(void *linux_side, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSUpdateStatus((int)cPlayers, (int)cPlayersMax, (int)cBotPlayers, (const char *)pchServerName, (const char *)pSpectatorServerName, (const char *)pchMapName);
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser(void *linux_side, CSteamID *pSteamID)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSCreateUnauthenticatedUser((CSteamID *)pSteamID);
    return (_ret);
}

bool cppISteamGameServer_SteamGameServer003_GSSetUserData(void *linux_side, CSteamID steamID, const char *pPlayerName, uint32 nFrags)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSSetUserData((CSteamID)steamID, (const char *)pPlayerName, (uint32)nFrags);
    return (_ret);
}

void cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort(void *linux_side, uint16 unSpectatorPort)
{
    ((ISteamGameServer*)linux_side)->GSUpdateSpectatorPort((uint16)unSpectatorPort);
}

void cppISteamGameServer_SteamGameServer003_GSSetGameType(void *linux_side, const char *pchType)
{
    ((ISteamGameServer*)linux_side)->GSSetGameType((const char *)pchType);
}

bool cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus(void *linux_side, CSteamID steamID, const char *pchAchievementName)
{
    bool _ret;
    _ret = ((ISteamGameServer*)linux_side)->GSGetUserAchievementStatus((CSteamID)steamID, (const char *)pchAchievementName);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
