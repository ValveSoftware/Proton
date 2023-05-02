#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099x/steam_api.h"
#include "steamworks_sdk_099x/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099x
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer002.h"
void cppISteamGameServer_SteamGameServer002_LogOn(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOn();
}

void cppISteamGameServer_SteamGameServer002_LogOff(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOff();
}

bool cppISteamGameServer_SteamGameServer002_BLoggedOn(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->BLoggedOn();
}

void cppISteamGameServer_SteamGameServer002_GSSetSpawnCount(void *linux_side, uint32 ucSpawn)
{
    ((ISteamGameServer*)linux_side)->GSSetSpawnCount((uint32)ucSpawn);
}

bool cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient(void *linux_side, void * pvEncryptionKey, uint32 * pcbEncryptionKey, uint32 cbMaxEncryptionKey)
{
    return ((ISteamGameServer*)linux_side)->GSGetSteam2GetEncryptionKeyToSendToNewClient((void *)pvEncryptionKey, (uint32 *)pcbEncryptionKey, (uint32)cbMaxEncryptionKey);
}

bool cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect(void *linux_side, uint32 unUserID, const void * pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void * pvCookie, uint32 cubCookie)
{
    return ((ISteamGameServer*)linux_side)->GSSendSteam2UserConnect((uint32)unUserID, (const void *)pvRawKey, (uint32)unKeyLen, (uint32)unIPPublic, (uint16)usPort, (const void *)pvCookie, (uint32)cubCookie);
}

bool cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect(void *linux_side, CSteamID steamID, uint32 unIPPublic, const void * pvCookie, uint32 cubCookie)
{
    return ((ISteamGameServer*)linux_side)->GSSendSteam3UserConnect((CSteamID)steamID, (uint32)unIPPublic, (const void *)pvCookie, (uint32)cubCookie);
}

bool cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect(void *linux_side, uint32 unUserID)
{
    return ((ISteamGameServer*)linux_side)->GSRemoveUserConnect((uint32)unUserID);
}

bool cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect(void *linux_side, CSteamID steamID, uint32 unUserID)
{
    return ((ISteamGameServer*)linux_side)->GSSendUserDisconnect((CSteamID)steamID, (uint32)unUserID);
}

bool cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse(void *linux_side, CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast)
{
    return ((ISteamGameServer*)linux_side)->GSSendUserStatusResponse((CSteamID)steamID, (int)nSecondsConnected, (int)nSecondsSinceLast);
}

bool cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus(void *linux_side, int32 nAppIdServed, uint32 unServerFlags, int cPlayers, int cPlayersMax, int cBotPlayers, int unGamePort, const char * pchServerName, const char * pchGameDir, const char * pchMapName, const char * pchVersion)
{
    return ((ISteamGameServer*)linux_side)->Obsolete_GSSetStatus((int32)nAppIdServed, (uint32)unServerFlags, (int)cPlayers, (int)cPlayersMax, (int)cBotPlayers, (int)unGamePort, (const char *)pchServerName, (const char *)pchGameDir, (const char *)pchMapName, (const char *)pchVersion);
}

bool cppISteamGameServer_SteamGameServer002_GSUpdateStatus(void *linux_side, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pchMapName)
{
    return ((ISteamGameServer*)linux_side)->GSUpdateStatus((int)cPlayers, (int)cPlayersMax, (int)cBotPlayers, (const char *)pchServerName, (const char *)pchMapName);
}

bool cppISteamGameServer_SteamGameServer002_BSecure(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->BSecure();
}

CSteamID cppISteamGameServer_SteamGameServer002_GetSteamID(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->GetSteamID();
}

bool cppISteamGameServer_SteamGameServer002_GSSetServerType(void *linux_side, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char * pchGameDir, const char * pchVersion)
{
    return ((ISteamGameServer*)linux_side)->GSSetServerType((int32)nGameAppId, (uint32)unServerFlags, (uint32)unGameIP, (uint32)unGamePort, (const char *)pchGameDir, (const char *)pchVersion);
}

bool cppISteamGameServer_SteamGameServer002_GSSetServerType2(void *linux_side, int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char * pchGameDir, const char * pchVersion, bool bLANMode)
{
    return ((ISteamGameServer*)linux_side)->GSSetServerType2((int32)nGameAppId, (uint32)unServerFlags, (uint32)unGameIP, (uint16)unGamePort, (uint16)unSpectatorPort, (uint16)usQueryPort, (const char *)pchGameDir, (const char *)pchVersion, (bool)bLANMode);
}

bool cppISteamGameServer_SteamGameServer002_GSUpdateStatus2(void *linux_side, int cPlayers, int cPlayersMax, int cBotPlayers, const char * pchServerName, const char * pSpectatorServerName, const char * pchMapName)
{
    return ((ISteamGameServer*)linux_side)->GSUpdateStatus2((int)cPlayers, (int)cPlayersMax, (int)cBotPlayers, (const char *)pchServerName, (const char *)pSpectatorServerName, (const char *)pchMapName);
}

bool cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser(void *linux_side, CSteamID * pSteamID)
{
    return ((ISteamGameServer*)linux_side)->GSCreateUnauthenticatedUser((CSteamID *)pSteamID);
}

bool cppISteamGameServer_SteamGameServer002_GSSetUserData(void *linux_side, CSteamID steamID, const char * pPlayerName, uint32 nFrags)
{
    return ((ISteamGameServer*)linux_side)->GSSetUserData((CSteamID)steamID, (const char *)pPlayerName, (uint32)nFrags);
}

void cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort(void *linux_side, uint16 unSpectatorPort)
{
    ((ISteamGameServer*)linux_side)->GSUpdateSpectatorPort((uint16)unSpectatorPort);
}

void cppISteamGameServer_SteamGameServer002_GSSetGameType(void *linux_side, const char * pchType)
{
    ((ISteamGameServer*)linux_side)->GSSetGameType((const char *)pchType);
}

#ifdef __cplusplus
}
#endif
