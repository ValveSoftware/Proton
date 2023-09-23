#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer015.h"

struct cppISteamGameServer_SteamGameServer015
{
#ifdef __cplusplus
    virtual bool InitGameServer( uint32_t, uint16_t, uint16_t, uint32_t, uint32_t, const char * ) = 0;
    virtual void SetProduct( const char * ) = 0;
    virtual void SetGameDescription( const char * ) = 0;
    virtual void SetModDir( const char * ) = 0;
    virtual void SetDedicatedServer( bool ) = 0;
    virtual void LogOn( const char * ) = 0;
    virtual void LogOnAnonymous(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool WasRestartRequested(  ) = 0;
    virtual void SetMaxPlayerCount( int32_t ) = 0;
    virtual void SetBotPlayerCount( int32_t ) = 0;
    virtual void SetServerName( const char * ) = 0;
    virtual void SetMapName( const char * ) = 0;
    virtual void SetPasswordProtected( bool ) = 0;
    virtual void SetSpectatorPort( uint16_t ) = 0;
    virtual void SetSpectatorServerName( const char * ) = 0;
    virtual void ClearAllKeyValues(  ) = 0;
    virtual void SetKeyValue( const char *, const char * ) = 0;
    virtual void SetGameTags( const char * ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual void SetRegion( const char * ) = 0;
    virtual void SetAdvertiseServerActive( bool ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t *, const SteamNetworkingIdentity * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual SteamIPAddress_t GetPublicIP(  ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual uint64_t AssociateWithClan( CSteamID ) = 0;
    virtual uint64_t ComputeNewPlayerCompatibility( CSteamID ) = 0;
    virtual bool SendUserConnectAndAuthenticate_DEPRECATED( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect_DEPRECATED( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual void SetMasterServerHeartbeatInterval_DEPRECATED( int32_t ) = 0;
    virtual void ForceMasterServerHeartbeat_DEPRECATED(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameServer_SteamGameServer015_InitGameServer( struct cppISteamGameServer_SteamGameServer015_InitGameServer_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer015_SetProduct( struct cppISteamGameServer_SteamGameServer015_SetProduct_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetProduct( params->pszProduct );
}

void cppISteamGameServer_SteamGameServer015_SetGameDescription( struct cppISteamGameServer_SteamGameServer015_SetGameDescription_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetGameDescription( params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer015_SetModDir( struct cppISteamGameServer_SteamGameServer015_SetModDir_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetModDir( params->pszModDir );
}

void cppISteamGameServer_SteamGameServer015_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer015_SetDedicatedServer_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetDedicatedServer( params->bDedicated );
}

void cppISteamGameServer_SteamGameServer015_LogOn( struct cppISteamGameServer_SteamGameServer015_LogOn_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->LogOn( params->pszToken );
}

void cppISteamGameServer_SteamGameServer015_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer015_LogOnAnonymous_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer015_LogOff( struct cppISteamGameServer_SteamGameServer015_LogOff_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer015_BLoggedOn( struct cppISteamGameServer_SteamGameServer015_BLoggedOn_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer015_BSecure( struct cppISteamGameServer_SteamGameServer015_BSecure_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer015_GetSteamID( struct cppISteamGameServer_SteamGameServer015_GetSteamID_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer015_WasRestartRequested( struct cppISteamGameServer_SteamGameServer015_WasRestartRequested_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetMaxPlayerCount( params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer015_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer015_SetBotPlayerCount_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetBotPlayerCount( params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer015_SetServerName( struct cppISteamGameServer_SteamGameServer015_SetServerName_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetServerName( params->pszServerName );
}

void cppISteamGameServer_SteamGameServer015_SetMapName( struct cppISteamGameServer_SteamGameServer015_SetMapName_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetMapName( params->pszMapName );
}

void cppISteamGameServer_SteamGameServer015_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer015_SetPasswordProtected_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetPasswordProtected( params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer015_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer015_SetSpectatorPort_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer015_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer015_SetSpectatorServerName_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer015_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer015_ClearAllKeyValues_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer015_SetKeyValue( struct cppISteamGameServer_SteamGameServer015_SetKeyValue_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
}

void cppISteamGameServer_SteamGameServer015_SetGameTags( struct cppISteamGameServer_SteamGameServer015_SetGameTags_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer015_SetGameData( struct cppISteamGameServer_SteamGameServer015_SetGameData_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
}

void cppISteamGameServer_SteamGameServer015_SetRegion( struct cppISteamGameServer_SteamGameServer015_SetRegion_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetRegion( params->pszRegion );
}

void cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive( struct cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetAdvertiseServerActive( params->bActive );
}

void cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket, params->pSnid );
}

void cppISteamGameServer_SteamGameServer015_BeginAuthSession( struct cppISteamGameServer_SteamGameServer015_BeginAuthSession_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamGameServer_SteamGameServer015_EndAuthSession( struct cppISteamGameServer_SteamGameServer015_EndAuthSession_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamGameServer_SteamGameServer015_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer015_CancelAuthTicket_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer015_GetGameplayStats( struct cppISteamGameServer_SteamGameServer015_GetGameplayStats_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer015_GetServerReputation( struct cppISteamGameServer_SteamGameServer015_GetServerReputation_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer015_GetPublicIP( struct cppISteamGameServer_SteamGameServer015_GetPublicIP_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    *params->_ret = iface->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer015_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer015_HandleIncomingPacket_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
}

void cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
}

void cppISteamGameServer_SteamGameServer015_AssociateWithClan( struct cppISteamGameServer_SteamGameServer015_AssociateWithClan_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
}

void cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate_DEPRECATED( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SendUserDisconnect_DEPRECATED( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer015_BUpdateUserData( struct cppISteamGameServer_SteamGameServer015_BUpdateUserData_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->SetMasterServerHeartbeatInterval_DEPRECATED( params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED_params *params )
{
    struct cppISteamGameServer_SteamGameServer015 *iface = (struct cppISteamGameServer_SteamGameServer015 *)params->linux_side;
    iface->ForceMasterServerHeartbeat_DEPRECATED(  );
}

#ifdef __cplusplus
}
#endif
