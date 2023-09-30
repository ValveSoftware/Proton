/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamMasterServerUpdater_SteamMasterServerUpdater001.h"

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetActive( params->bActive );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetBasicServerData( params->nProtocolVersion, params->bDedicatedServer, params->pRegionName, params->pProductName, params->nMaxReportedClients, params->bPasswordProtected, params->pGameDescription );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->ClearAllKeyValues(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->NotifyShutdown(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->ForceHeartbeat(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->AddMasterServer( params->pServerAddress );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->RemoveMasterServer( params->pServerAddress );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetNumMasterServers(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params *params )
{
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetMasterServerAddress( params->iServer, params->pOut, params->outBufferSize );
}

