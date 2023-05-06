#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_157/steam_api.h"
#include "steamworks_sdk_157/steamnetworkingtypes.h"
#include "steamworks_sdk_157/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_157
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer015.h"
bool cppISteamGameServer_SteamGameServer015_InitGameServer(void *linux_side, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char * pchVersionString)
{
    return ((ISteamGameServer*)linux_side)->InitGameServer((uint32)unIP, (uint16)usGamePort, (uint16)usQueryPort, (uint32)unFlags, (AppId_t)nGameAppId, (const char *)pchVersionString);
}

void cppISteamGameServer_SteamGameServer015_SetProduct(void *linux_side, const char * pszProduct)
{
    ((ISteamGameServer*)linux_side)->SetProduct((const char *)pszProduct);
}

void cppISteamGameServer_SteamGameServer015_SetGameDescription(void *linux_side, const char * pszGameDescription)
{
    ((ISteamGameServer*)linux_side)->SetGameDescription((const char *)pszGameDescription);
}

void cppISteamGameServer_SteamGameServer015_SetModDir(void *linux_side, const char * pszModDir)
{
    ((ISteamGameServer*)linux_side)->SetModDir((const char *)pszModDir);
}

void cppISteamGameServer_SteamGameServer015_SetDedicatedServer(void *linux_side, bool bDedicated)
{
    ((ISteamGameServer*)linux_side)->SetDedicatedServer((bool)bDedicated);
}

void cppISteamGameServer_SteamGameServer015_LogOn(void *linux_side, const char * pszToken)
{
    ((ISteamGameServer*)linux_side)->LogOn((const char *)pszToken);
}

void cppISteamGameServer_SteamGameServer015_LogOnAnonymous(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOnAnonymous();
}

void cppISteamGameServer_SteamGameServer015_LogOff(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->LogOff();
}

bool cppISteamGameServer_SteamGameServer015_BLoggedOn(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->BLoggedOn();
}

bool cppISteamGameServer_SteamGameServer015_BSecure(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->BSecure();
}

CSteamID cppISteamGameServer_SteamGameServer015_GetSteamID(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->GetSteamID();
}

bool cppISteamGameServer_SteamGameServer015_WasRestartRequested(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->WasRestartRequested();
}

void cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount(void *linux_side, int cPlayersMax)
{
    ((ISteamGameServer*)linux_side)->SetMaxPlayerCount((int)cPlayersMax);
}

void cppISteamGameServer_SteamGameServer015_SetBotPlayerCount(void *linux_side, int cBotplayers)
{
    ((ISteamGameServer*)linux_side)->SetBotPlayerCount((int)cBotplayers);
}

void cppISteamGameServer_SteamGameServer015_SetServerName(void *linux_side, const char * pszServerName)
{
    ((ISteamGameServer*)linux_side)->SetServerName((const char *)pszServerName);
}

void cppISteamGameServer_SteamGameServer015_SetMapName(void *linux_side, const char * pszMapName)
{
    ((ISteamGameServer*)linux_side)->SetMapName((const char *)pszMapName);
}

void cppISteamGameServer_SteamGameServer015_SetPasswordProtected(void *linux_side, bool bPasswordProtected)
{
    ((ISteamGameServer*)linux_side)->SetPasswordProtected((bool)bPasswordProtected);
}

void cppISteamGameServer_SteamGameServer015_SetSpectatorPort(void *linux_side, uint16 unSpectatorPort)
{
    ((ISteamGameServer*)linux_side)->SetSpectatorPort((uint16)unSpectatorPort);
}

void cppISteamGameServer_SteamGameServer015_SetSpectatorServerName(void *linux_side, const char * pszSpectatorServerName)
{
    ((ISteamGameServer*)linux_side)->SetSpectatorServerName((const char *)pszSpectatorServerName);
}

void cppISteamGameServer_SteamGameServer015_ClearAllKeyValues(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->ClearAllKeyValues();
}

void cppISteamGameServer_SteamGameServer015_SetKeyValue(void *linux_side, const char * pKey, const char * pValue)
{
    ((ISteamGameServer*)linux_side)->SetKeyValue((const char *)pKey, (const char *)pValue);
}

void cppISteamGameServer_SteamGameServer015_SetGameTags(void *linux_side, const char * pchGameTags)
{
    ((ISteamGameServer*)linux_side)->SetGameTags((const char *)pchGameTags);
}

void cppISteamGameServer_SteamGameServer015_SetGameData(void *linux_side, const char * pchGameData)
{
    ((ISteamGameServer*)linux_side)->SetGameData((const char *)pchGameData);
}

void cppISteamGameServer_SteamGameServer015_SetRegion(void *linux_side, const char * pszRegion)
{
    ((ISteamGameServer*)linux_side)->SetRegion((const char *)pszRegion);
}

void cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive(void *linux_side, bool bActive)
{
    ((ISteamGameServer*)linux_side)->SetAdvertiseServerActive((bool)bActive);
}

HAuthTicket cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket(void *linux_side, void * pTicket, int cbMaxTicket, uint32 * pcbTicket, const SteamNetworkingIdentity * pSnid)
{
    return ((ISteamGameServer*)linux_side)->GetAuthSessionTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket, (const SteamNetworkingIdentity *)pSnid);
}

EBeginAuthSessionResult cppISteamGameServer_SteamGameServer015_BeginAuthSession(void *linux_side, const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    return ((ISteamGameServer*)linux_side)->BeginAuthSession((const void *)pAuthTicket, (int)cbAuthTicket, (CSteamID)steamID);
}

void cppISteamGameServer_SteamGameServer015_EndAuthSession(void *linux_side, CSteamID steamID)
{
    ((ISteamGameServer*)linux_side)->EndAuthSession((CSteamID)steamID);
}

void cppISteamGameServer_SteamGameServer015_CancelAuthTicket(void *linux_side, HAuthTicket hAuthTicket)
{
    ((ISteamGameServer*)linux_side)->CancelAuthTicket((HAuthTicket)hAuthTicket);
}

EUserHasLicenseForAppResult cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp(void *linux_side, CSteamID steamID, AppId_t appID)
{
    return ((ISteamGameServer*)linux_side)->UserHasLicenseForApp((CSteamID)steamID, (AppId_t)appID);
}

bool cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus(void *linux_side, CSteamID steamIDUser, CSteamID steamIDGroup)
{
    return ((ISteamGameServer*)linux_side)->RequestUserGroupStatus((CSteamID)steamIDUser, (CSteamID)steamIDGroup);
}

void cppISteamGameServer_SteamGameServer015_GetGameplayStats(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->GetGameplayStats();
}

SteamAPICall_t cppISteamGameServer_SteamGameServer015_GetServerReputation(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->GetServerReputation();
}

SteamIPAddress_t cppISteamGameServer_SteamGameServer015_GetPublicIP(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->GetPublicIP();
}

bool cppISteamGameServer_SteamGameServer015_HandleIncomingPacket(void *linux_side, const void * pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    return ((ISteamGameServer*)linux_side)->HandleIncomingPacket((const void *)pData, (int)cbData, (uint32)srcIP, (uint16)srcPort);
}

int cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket(void *linux_side, void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort)
{
    return ((ISteamGameServer*)linux_side)->GetNextOutgoingPacket((void *)pOut, (int)cbMaxOut, (uint32 *)pNetAdr, (uint16 *)pPort);
}

SteamAPICall_t cppISteamGameServer_SteamGameServer015_AssociateWithClan(void *linux_side, CSteamID steamIDClan)
{
    return ((ISteamGameServer*)linux_side)->AssociateWithClan((CSteamID)steamIDClan);
}

SteamAPICall_t cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility(void *linux_side, CSteamID steamIDNewPlayer)
{
    return ((ISteamGameServer*)linux_side)->ComputeNewPlayerCompatibility((CSteamID)steamIDNewPlayer);
}

bool cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED(void *linux_side, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)
{
    return ((ISteamGameServer*)linux_side)->SendUserConnectAndAuthenticate_DEPRECATED((uint32)unIPClient, (const void *)pvAuthBlob, (uint32)cubAuthBlobSize, (CSteamID *)pSteamIDUser);
}

CSteamID cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection(void *linux_side)
{
    return ((ISteamGameServer*)linux_side)->CreateUnauthenticatedUserConnection();
}

void cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED(void *linux_side, CSteamID steamIDUser)
{
    ((ISteamGameServer*)linux_side)->SendUserDisconnect_DEPRECATED((CSteamID)steamIDUser);
}

bool cppISteamGameServer_SteamGameServer015_BUpdateUserData(void *linux_side, CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
    return ((ISteamGameServer*)linux_side)->BUpdateUserData((CSteamID)steamIDUser, (const char *)pchPlayerName, (uint32)uScore);
}

void cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED(void *linux_side, int iHeartbeatInterval)
{
    ((ISteamGameServer*)linux_side)->SetMasterServerHeartbeatInterval_DEPRECATED((int)iHeartbeatInterval);
}

void cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED(void *linux_side)
{
    ((ISteamGameServer*)linux_side)->ForceMasterServerHeartbeat_DEPRECATED();
}

#ifdef __cplusplus
}
#endif
