/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer011.h"

void cppISteamGameServer_SteamGameServer011_InitGameServer( struct cppISteamGameServer_SteamGameServer011_InitGameServer_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer011_SetProduct( struct cppISteamGameServer_SteamGameServer011_SetProduct_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetProduct( params->pszProduct );
}

void cppISteamGameServer_SteamGameServer011_SetGameDescription( struct cppISteamGameServer_SteamGameServer011_SetGameDescription_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetGameDescription( params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer011_SetModDir( struct cppISteamGameServer_SteamGameServer011_SetModDir_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetModDir( params->pszModDir );
}

void cppISteamGameServer_SteamGameServer011_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer011_SetDedicatedServer_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetDedicatedServer( params->bDedicated );
}

void cppISteamGameServer_SteamGameServer011_LogOn( struct cppISteamGameServer_SteamGameServer011_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->LogOn( params->pszAccountName, params->pszPassword );
}

void cppISteamGameServer_SteamGameServer011_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer011_LogOnAnonymous_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer011_LogOff( struct cppISteamGameServer_SteamGameServer011_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer011_BLoggedOn( struct cppISteamGameServer_SteamGameServer011_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer011_BSecure( struct cppISteamGameServer_SteamGameServer011_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer011_GetSteamID( struct cppISteamGameServer_SteamGameServer011_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer011_WasRestartRequested( struct cppISteamGameServer_SteamGameServer011_WasRestartRequested_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetMaxPlayerCount( params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer011_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer011_SetBotPlayerCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetBotPlayerCount( params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer011_SetServerName( struct cppISteamGameServer_SteamGameServer011_SetServerName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetServerName( params->pszServerName );
}

void cppISteamGameServer_SteamGameServer011_SetMapName( struct cppISteamGameServer_SteamGameServer011_SetMapName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetMapName( params->pszMapName );
}

void cppISteamGameServer_SteamGameServer011_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer011_SetPasswordProtected_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetPasswordProtected( params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer011_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer011_SetSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer011_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer011_SetSpectatorServerName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer011_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer011_ClearAllKeyValues_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer011_SetKeyValue( struct cppISteamGameServer_SteamGameServer011_SetKeyValue_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
}

void cppISteamGameServer_SteamGameServer011_SetGameTags( struct cppISteamGameServer_SteamGameServer011_SetGameTags_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer011_SetGameData( struct cppISteamGameServer_SteamGameServer011_SetGameData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
}

void cppISteamGameServer_SteamGameServer011_SetRegion( struct cppISteamGameServer_SteamGameServer011_SetRegion_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetRegion( params->pszRegion );
}

void cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer011_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer011_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer011_BUpdateUserData( struct cppISteamGameServer_SteamGameServer011_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer011_BeginAuthSession( struct cppISteamGameServer_SteamGameServer011_BeginAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamGameServer_SteamGameServer011_EndAuthSession( struct cppISteamGameServer_SteamGameServer011_EndAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamGameServer_SteamGameServer011_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer011_CancelAuthTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer011_GetGameplayStats( struct cppISteamGameServer_SteamGameServer011_GetGameplayStats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer011_GetServerReputation( struct cppISteamGameServer_SteamGameServer011_GetServerReputation_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer011_GetPublicIP( struct cppISteamGameServer_SteamGameServer011_GetPublicIP_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer011_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer011_HandleIncomingPacket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
}

void cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
}

void cppISteamGameServer_SteamGameServer011_EnableHeartbeats( struct cppISteamGameServer_SteamGameServer011_EnableHeartbeats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->EnableHeartbeats( params->bActive );
}

void cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval( struct cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer011_ForceHeartbeat( struct cppISteamGameServer_SteamGameServer011_ForceHeartbeat_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->ForceHeartbeat(  );
}

void cppISteamGameServer_SteamGameServer011_AssociateWithClan( struct cppISteamGameServer_SteamGameServer011_AssociateWithClan_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility_params *params )
{
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
}

