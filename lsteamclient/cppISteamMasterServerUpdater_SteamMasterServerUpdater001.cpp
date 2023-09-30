/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetActive( params->bActive );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetBasicServerData( params->nProtocolVersion, params->bDedicatedServer, params->pRegionName, params->pProductName, params->nMaxReportedClients, params->bPasswordProtected, params->pGameDescription );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->ClearAllKeyValues(  );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->NotifyShutdown(  );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->ForceHeartbeat(  );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->AddMasterServer( params->pServerAddress );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->RemoveMasterServer( params->pServerAddress );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetNumMasterServers(  );
    return 0;
}

NTSTATUS ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress( void *args )
{
    struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params *params = (struct ISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params *)args;
    struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct u_ISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetMasterServerAddress( params->iServer, params->pOut, params->outBufferSize );
    return 0;
}

