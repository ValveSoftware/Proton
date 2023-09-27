#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#include "steamworks_sdk_116/isteammasterserverupdater.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamMasterServerUpdater_SteamMasterServerUpdater001.h"
void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params *params )
{
    ((ISteamMasterServerUpdater*)params->linux_side)->SetActive( (bool)params->bActive );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params *params )
{
    ((ISteamMasterServerUpdater*)params->linux_side)->SetHeartbeatInterval( (int)params->iHeartbeatInterval );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params *params )
{
    params->_ret = ((ISteamMasterServerUpdater*)params->linux_side)->HandleIncomingPacket( (const void *)params->pData, (int)params->cbData, (uint32)params->srcIP, (uint16)params->srcPort );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params *params )
{
    params->_ret = ((ISteamMasterServerUpdater*)params->linux_side)->GetNextOutgoingPacket( (void *)params->pOut, (int)params->cbMaxOut, (uint32 *)params->pNetAdr, (uint16 *)params->pPort );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params *params )
{
    ((ISteamMasterServerUpdater*)params->linux_side)->SetBasicServerData( (unsigned short)params->nProtocolVersion, (bool)params->bDedicatedServer, (const char *)params->pRegionName, (const char *)params->pProductName, (unsigned short)params->nMaxReportedClients, (bool)params->bPasswordProtected, (const char *)params->pGameDescription );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues_params *params )
{
    ((ISteamMasterServerUpdater*)params->linux_side)->ClearAllKeyValues(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue_params *params )
{
    ((ISteamMasterServerUpdater*)params->linux_side)->SetKeyValue( (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown_params *params )
{
    ((ISteamMasterServerUpdater*)params->linux_side)->NotifyShutdown(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested_params *params )
{
    params->_ret = ((ISteamMasterServerUpdater*)params->linux_side)->WasRestartRequested(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat_params *params )
{
    ((ISteamMasterServerUpdater*)params->linux_side)->ForceHeartbeat(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer_params *params )
{
    params->_ret = ((ISteamMasterServerUpdater*)params->linux_side)->AddMasterServer( (const char *)params->pServerAddress );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer_params *params )
{
    params->_ret = ((ISteamMasterServerUpdater*)params->linux_side)->RemoveMasterServer( (const char *)params->pServerAddress );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params *params )
{
    params->_ret = ((ISteamMasterServerUpdater*)params->linux_side)->GetNumMasterServers(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params *params )
{
    params->_ret = ((ISteamMasterServerUpdater*)params->linux_side)->GetMasterServerAddress( (int)params->iServer, (char *)params->pOut, (int)params->outBufferSize );
}

#ifdef __cplusplus
}
#endif
