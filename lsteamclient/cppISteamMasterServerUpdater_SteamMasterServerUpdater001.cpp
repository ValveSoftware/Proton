#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_116/steam_api.h"
#include "steamworks_sdk_116/isteammasterserverupdater.h"
#include "cppISteamMasterServerUpdater_SteamMasterServerUpdater001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive(void *linux_side, bool bActive)
{
    ((ISteamMasterServerUpdater*)linux_side)->SetActive((bool)bActive);
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval(void *linux_side, int iHeartbeatInterval)
{
    ((ISteamMasterServerUpdater*)linux_side)->SetHeartbeatInterval((int)iHeartbeatInterval);
}

bool cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket(void *linux_side, const void * pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    return ((ISteamMasterServerUpdater*)linux_side)->HandleIncomingPacket((const void *)pData, (int)cbData, (uint32)srcIP, (uint16)srcPort);
}

int cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket(void *linux_side, void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort)
{
    return ((ISteamMasterServerUpdater*)linux_side)->GetNextOutgoingPacket((void *)pOut, (int)cbMaxOut, (uint32 *)pNetAdr, (uint16 *)pPort);
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData(void *linux_side, unsigned short nProtocolVersion, bool bDedicatedServer, const char * pRegionName, const char * pProductName, unsigned short nMaxReportedClients, bool bPasswordProtected, const char * pGameDescription)
{
    ((ISteamMasterServerUpdater*)linux_side)->SetBasicServerData((unsigned short)nProtocolVersion, (bool)bDedicatedServer, (const char *)pRegionName, (const char *)pProductName, (unsigned short)nMaxReportedClients, (bool)bPasswordProtected, (const char *)pGameDescription);
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues(void *linux_side)
{
    ((ISteamMasterServerUpdater*)linux_side)->ClearAllKeyValues();
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue(void *linux_side, const char * pKey, const char * pValue)
{
    ((ISteamMasterServerUpdater*)linux_side)->SetKeyValue((const char *)pKey, (const char *)pValue);
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown(void *linux_side)
{
    ((ISteamMasterServerUpdater*)linux_side)->NotifyShutdown();
}

bool cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested(void *linux_side)
{
    return ((ISteamMasterServerUpdater*)linux_side)->WasRestartRequested();
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat(void *linux_side)
{
    ((ISteamMasterServerUpdater*)linux_side)->ForceHeartbeat();
}

bool cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer(void *linux_side, const char * pServerAddress)
{
    return ((ISteamMasterServerUpdater*)linux_side)->AddMasterServer((const char *)pServerAddress);
}

bool cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer(void *linux_side, const char * pServerAddress)
{
    return ((ISteamMasterServerUpdater*)linux_side)->RemoveMasterServer((const char *)pServerAddress);
}

int cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers(void *linux_side)
{
    return ((ISteamMasterServerUpdater*)linux_side)->GetNumMasterServers();
}

int cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress(void *linux_side, int iServer, char * pOut, int outBufferSize)
{
    return ((ISteamMasterServerUpdater*)linux_side)->GetMasterServerAddress((int)iServer, (char *)pOut, (int)outBufferSize);
}

#ifdef __cplusplus
}
#endif
