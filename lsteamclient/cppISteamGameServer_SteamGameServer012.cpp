/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer012.h"

struct u_ISteamGameServer_SteamGameServer012
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
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual uint32_t GetPublicIP(  ) = 0;
    virtual bool HandleIncomingPacket( const void *, int32_t, uint32_t, uint16_t ) = 0;
    virtual int32_t GetNextOutgoingPacket( void *, int32_t, uint32_t *, uint16_t * ) = 0;
    virtual void EnableHeartbeats( bool ) = 0;
    virtual void SetHeartbeatInterval( int32_t ) = 0;
    virtual void ForceHeartbeat(  ) = 0;
    virtual uint64_t AssociateWithClan( CSteamID ) = 0;
    virtual uint64_t ComputeNewPlayerCompatibility( CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameServer_SteamGameServer012_InitGameServer( struct cppISteamGameServer_SteamGameServer012_InitGameServer_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer012_SetProduct( struct cppISteamGameServer_SteamGameServer012_SetProduct_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetProduct( params->pszProduct );
}

void cppISteamGameServer_SteamGameServer012_SetGameDescription( struct cppISteamGameServer_SteamGameServer012_SetGameDescription_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetGameDescription( params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer012_SetModDir( struct cppISteamGameServer_SteamGameServer012_SetModDir_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetModDir( params->pszModDir );
}

void cppISteamGameServer_SteamGameServer012_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer012_SetDedicatedServer_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetDedicatedServer( params->bDedicated );
}

void cppISteamGameServer_SteamGameServer012_LogOn( struct cppISteamGameServer_SteamGameServer012_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->LogOn( params->pszToken );
}

void cppISteamGameServer_SteamGameServer012_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer012_LogOnAnonymous_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer012_LogOff( struct cppISteamGameServer_SteamGameServer012_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer012_BLoggedOn( struct cppISteamGameServer_SteamGameServer012_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer012_BSecure( struct cppISteamGameServer_SteamGameServer012_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer012_GetSteamID( struct cppISteamGameServer_SteamGameServer012_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer012_WasRestartRequested( struct cppISteamGameServer_SteamGameServer012_WasRestartRequested_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetMaxPlayerCount( params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer012_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer012_SetBotPlayerCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetBotPlayerCount( params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer012_SetServerName( struct cppISteamGameServer_SteamGameServer012_SetServerName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetServerName( params->pszServerName );
}

void cppISteamGameServer_SteamGameServer012_SetMapName( struct cppISteamGameServer_SteamGameServer012_SetMapName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetMapName( params->pszMapName );
}

void cppISteamGameServer_SteamGameServer012_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer012_SetPasswordProtected_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetPasswordProtected( params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer012_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer012_SetSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer012_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer012_SetSpectatorServerName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer012_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer012_ClearAllKeyValues_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer012_SetKeyValue( struct cppISteamGameServer_SteamGameServer012_SetKeyValue_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
}

void cppISteamGameServer_SteamGameServer012_SetGameTags( struct cppISteamGameServer_SteamGameServer012_SetGameTags_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer012_SetGameData( struct cppISteamGameServer_SteamGameServer012_SetGameData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
}

void cppISteamGameServer_SteamGameServer012_SetRegion( struct cppISteamGameServer_SteamGameServer012_SetRegion_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetRegion( params->pszRegion );
}

void cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer012_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer012_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer012_BUpdateUserData( struct cppISteamGameServer_SteamGameServer012_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer012_BeginAuthSession( struct cppISteamGameServer_SteamGameServer012_BeginAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamGameServer_SteamGameServer012_EndAuthSession( struct cppISteamGameServer_SteamGameServer012_EndAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamGameServer_SteamGameServer012_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer012_CancelAuthTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer012_GetGameplayStats( struct cppISteamGameServer_SteamGameServer012_GetGameplayStats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer012_GetServerReputation( struct cppISteamGameServer_SteamGameServer012_GetServerReputation_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer012_GetPublicIP( struct cppISteamGameServer_SteamGameServer012_GetPublicIP_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer012_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer012_HandleIncomingPacket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
}

void cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
}

void cppISteamGameServer_SteamGameServer012_EnableHeartbeats( struct cppISteamGameServer_SteamGameServer012_EnableHeartbeats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->EnableHeartbeats( params->bActive );
}

void cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval( struct cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer012_ForceHeartbeat( struct cppISteamGameServer_SteamGameServer012_ForceHeartbeat_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    iface->ForceHeartbeat(  );
}

void cppISteamGameServer_SteamGameServer012_AssociateWithClan( struct cppISteamGameServer_SteamGameServer012_AssociateWithClan_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility_params *params )
{
    struct u_ISteamGameServer_SteamGameServer012 *iface = (struct u_ISteamGameServer_SteamGameServer012 *)params->linux_side;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
}

