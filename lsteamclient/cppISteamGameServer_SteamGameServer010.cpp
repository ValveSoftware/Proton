/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer010.h"

struct u_ISteamGameServer_SteamGameServer010
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool SendUserConnectAndAuthenticate( uint32_t, const void *, uint32_t, CSteamID * ) = 0;
    virtual CSteamID CreateUnauthenticatedUserConnection(  ) = 0;
    virtual void SendUserDisconnect( CSteamID ) = 0;
    virtual bool BUpdateUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual bool BSetServerType( uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual void UpdateServerStatus( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual void UpdateSpectatorPort( uint16_t ) = 0;
    virtual void SetGameTags( const char * ) = 0;
    virtual void GetGameplayStats(  ) = 0;
    virtual uint64_t GetServerReputation(  ) = 0;
    virtual bool RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
    virtual uint32_t GetPublicIP(  ) = 0;
    virtual void SetGameData( const char * ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameServer_SteamGameServer010_LogOn( struct cppISteamGameServer_SteamGameServer010_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer010_LogOff( struct cppISteamGameServer_SteamGameServer010_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer010_BLoggedOn( struct cppISteamGameServer_SteamGameServer010_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer010_BSecure( struct cppISteamGameServer_SteamGameServer010_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer010_GetSteamID( struct cppISteamGameServer_SteamGameServer010_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer010_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer010_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer010_BUpdateUserData( struct cppISteamGameServer_SteamGameServer010_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer010_BSetServerType( struct cppISteamGameServer_SteamGameServer010_BSetServerType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer010_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer010_UpdateServerStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer010_SetGameTags( struct cppISteamGameServer_SteamGameServer010_SetGameTags_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer010_GetGameplayStats( struct cppISteamGameServer_SteamGameServer010_GetGameplayStats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer010_GetServerReputation( struct cppISteamGameServer_SteamGameServer010_GetServerReputation_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer010_GetPublicIP( struct cppISteamGameServer_SteamGameServer010_GetPublicIP_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer010_SetGameData( struct cppISteamGameServer_SteamGameServer010_SetGameData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
}

void cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer010_BeginAuthSession( struct cppISteamGameServer_SteamGameServer010_BeginAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamGameServer_SteamGameServer010_EndAuthSession( struct cppISteamGameServer_SteamGameServer010_EndAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamGameServer_SteamGameServer010_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer010_CancelAuthTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

