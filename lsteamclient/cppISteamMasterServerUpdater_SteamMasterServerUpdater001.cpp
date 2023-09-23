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

struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001
{
#ifdef __cplusplus
    virtual void SetActive( bool ) = 0;
    virtual void SetHeartbeatInterval( int32_t ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual void SetBasicServerData( uint16_t, bool, const char *, const char *, uint16_t, bool, const char * ) = 0;
    virtual void ClearAllKeyValues(  ) = 0;
    virtual void SetKeyValue( const char *, const char * ) = 0;
    virtual void NotifyShutdown(  ) = 0;
    virtual bool WasRestartRequested(  ) = 0;
    virtual void ForceHeartbeat(  ) = 0;
    virtual bool AddMasterServer( const char * ) = 0;
    virtual bool RemoveMasterServer( const char * ) = 0;
    virtual int32_t GetNumMasterServers(  ) = 0;
    virtual int32_t GetMasterServerAddress( int32_t, char *, int32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetActive_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetActive( params->bActive );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetHeartbeatInterval_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_HandleIncomingPacket_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNextOutgoingPacket_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetBasicServerData_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetBasicServerData( params->nProtocolVersion, params->bDedicatedServer, params->pRegionName, params->pProductName, params->nMaxReportedClients, params->bPasswordProtected, params->pGameDescription );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ClearAllKeyValues_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->ClearAllKeyValues(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_SetKeyValue_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_NotifyShutdown_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->NotifyShutdown(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_WasRestartRequested_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_ForceHeartbeat_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    iface->ForceHeartbeat(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_AddMasterServer_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->AddMasterServer( params->pServerAddress );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_RemoveMasterServer_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->RemoveMasterServer( params->pServerAddress );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetNumMasterServers_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetNumMasterServers(  );
}

void cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress( struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001_GetMasterServerAddress_params *params )
{
    struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *iface = (struct cppISteamMasterServerUpdater_SteamMasterServerUpdater001 *)params->linux_side;
    params->_ret = iface->GetMasterServerAddress( params->iServer, params->pOut, params->outBufferSize );
}

#ifdef __cplusplus
}
#endif
