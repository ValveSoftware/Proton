/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer014.h"

void cppISteamGameServer_SteamGameServer014_InitGameServer( struct cppISteamGameServer_SteamGameServer014_InitGameServer_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer014_SetProduct( struct cppISteamGameServer_SteamGameServer014_SetProduct_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetProduct( params->pszProduct );
}

void cppISteamGameServer_SteamGameServer014_SetGameDescription( struct cppISteamGameServer_SteamGameServer014_SetGameDescription_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetGameDescription( params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer014_SetModDir( struct cppISteamGameServer_SteamGameServer014_SetModDir_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetModDir( params->pszModDir );
}

void cppISteamGameServer_SteamGameServer014_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer014_SetDedicatedServer_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetDedicatedServer( params->bDedicated );
}

void cppISteamGameServer_SteamGameServer014_LogOn( struct cppISteamGameServer_SteamGameServer014_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->LogOn( params->pszToken );
}

void cppISteamGameServer_SteamGameServer014_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer014_LogOnAnonymous_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer014_LogOff( struct cppISteamGameServer_SteamGameServer014_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer014_BLoggedOn( struct cppISteamGameServer_SteamGameServer014_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer014_BSecure( struct cppISteamGameServer_SteamGameServer014_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer014_GetSteamID( struct cppISteamGameServer_SteamGameServer014_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer014_WasRestartRequested( struct cppISteamGameServer_SteamGameServer014_WasRestartRequested_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer014_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer014_SetMaxPlayerCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetMaxPlayerCount( params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer014_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer014_SetBotPlayerCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetBotPlayerCount( params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer014_SetServerName( struct cppISteamGameServer_SteamGameServer014_SetServerName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetServerName( params->pszServerName );
}

void cppISteamGameServer_SteamGameServer014_SetMapName( struct cppISteamGameServer_SteamGameServer014_SetMapName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetMapName( params->pszMapName );
}

void cppISteamGameServer_SteamGameServer014_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer014_SetPasswordProtected_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetPasswordProtected( params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer014_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer014_SetSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer014_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer014_SetSpectatorServerName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer014_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer014_ClearAllKeyValues_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer014_SetKeyValue( struct cppISteamGameServer_SteamGameServer014_SetKeyValue_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
}

void cppISteamGameServer_SteamGameServer014_SetGameTags( struct cppISteamGameServer_SteamGameServer014_SetGameTags_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer014_SetGameData( struct cppISteamGameServer_SteamGameServer014_SetGameData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
}

void cppISteamGameServer_SteamGameServer014_SetRegion( struct cppISteamGameServer_SteamGameServer014_SetRegion_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetRegion( params->pszRegion );
}

void cppISteamGameServer_SteamGameServer014_SetAdvertiseServerActive( struct cppISteamGameServer_SteamGameServer014_SetAdvertiseServerActive_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetAdvertiseServerActive( params->bActive );
}

void cppISteamGameServer_SteamGameServer014_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer014_GetAuthSessionTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer014_BeginAuthSession( struct cppISteamGameServer_SteamGameServer014_BeginAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamGameServer_SteamGameServer014_EndAuthSession( struct cppISteamGameServer_SteamGameServer014_EndAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamGameServer_SteamGameServer014_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer014_CancelAuthTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer014_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer014_UserHasLicenseForApp_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamGameServer_SteamGameServer014_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer014_RequestUserGroupStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer014_GetGameplayStats( struct cppISteamGameServer_SteamGameServer014_GetGameplayStats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer014_GetServerReputation( struct cppISteamGameServer_SteamGameServer014_GetServerReputation_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer014_GetPublicIP( struct cppISteamGameServer_SteamGameServer014_GetPublicIP_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    *params->_ret = iface->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer014_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer014_HandleIncomingPacket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
}

void cppISteamGameServer_SteamGameServer014_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer014_GetNextOutgoingPacket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
}

void cppISteamGameServer_SteamGameServer014_AssociateWithClan( struct cppISteamGameServer_SteamGameServer014_AssociateWithClan_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
}

void cppISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate_DEPRECATED( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SendUserDisconnect_DEPRECATED( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer014_BUpdateUserData( struct cppISteamGameServer_SteamGameServer014_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetMasterServerHeartbeatInterval_DEPRECATED( params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED_params *params )
{
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->ForceMasterServerHeartbeat_DEPRECATED(  );
}

