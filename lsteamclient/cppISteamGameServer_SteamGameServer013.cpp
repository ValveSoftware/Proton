/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer013.h"

void cppISteamGameServer_SteamGameServer013_InitGameServer( struct cppISteamGameServer_SteamGameServer013_InitGameServer_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer013_SetProduct( struct cppISteamGameServer_SteamGameServer013_SetProduct_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetProduct( params->pszProduct );
}

void cppISteamGameServer_SteamGameServer013_SetGameDescription( struct cppISteamGameServer_SteamGameServer013_SetGameDescription_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetGameDescription( params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer013_SetModDir( struct cppISteamGameServer_SteamGameServer013_SetModDir_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetModDir( params->pszModDir );
}

void cppISteamGameServer_SteamGameServer013_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer013_SetDedicatedServer_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetDedicatedServer( params->bDedicated );
}

void cppISteamGameServer_SteamGameServer013_LogOn( struct cppISteamGameServer_SteamGameServer013_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->LogOn( params->pszToken );
}

void cppISteamGameServer_SteamGameServer013_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer013_LogOnAnonymous_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer013_LogOff( struct cppISteamGameServer_SteamGameServer013_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer013_BLoggedOn( struct cppISteamGameServer_SteamGameServer013_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer013_BSecure( struct cppISteamGameServer_SteamGameServer013_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer013_GetSteamID( struct cppISteamGameServer_SteamGameServer013_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer013_WasRestartRequested( struct cppISteamGameServer_SteamGameServer013_WasRestartRequested_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer013_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer013_SetMaxPlayerCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetMaxPlayerCount( params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer013_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer013_SetBotPlayerCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetBotPlayerCount( params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer013_SetServerName( struct cppISteamGameServer_SteamGameServer013_SetServerName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetServerName( params->pszServerName );
}

void cppISteamGameServer_SteamGameServer013_SetMapName( struct cppISteamGameServer_SteamGameServer013_SetMapName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetMapName( params->pszMapName );
}

void cppISteamGameServer_SteamGameServer013_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer013_SetPasswordProtected_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetPasswordProtected( params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer013_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer013_SetSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer013_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer013_SetSpectatorServerName_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer013_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer013_ClearAllKeyValues_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer013_SetKeyValue( struct cppISteamGameServer_SteamGameServer013_SetKeyValue_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
}

void cppISteamGameServer_SteamGameServer013_SetGameTags( struct cppISteamGameServer_SteamGameServer013_SetGameTags_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer013_SetGameData( struct cppISteamGameServer_SteamGameServer013_SetGameData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
}

void cppISteamGameServer_SteamGameServer013_SetRegion( struct cppISteamGameServer_SteamGameServer013_SetRegion_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetRegion( params->pszRegion );
}

void cppISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer013_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer013_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer013_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer013_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer013_BUpdateUserData( struct cppISteamGameServer_SteamGameServer013_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer013_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer013_GetAuthSessionTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer013_BeginAuthSession( struct cppISteamGameServer_SteamGameServer013_BeginAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamGameServer_SteamGameServer013_EndAuthSession( struct cppISteamGameServer_SteamGameServer013_EndAuthSession_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamGameServer_SteamGameServer013_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer013_CancelAuthTicket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer013_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer013_UserHasLicenseForApp_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamGameServer_SteamGameServer013_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer013_RequestUserGroupStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer013_GetGameplayStats( struct cppISteamGameServer_SteamGameServer013_GetGameplayStats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer013_GetServerReputation( struct cppISteamGameServer_SteamGameServer013_GetServerReputation_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer013_GetPublicIP( struct cppISteamGameServer_SteamGameServer013_GetPublicIP_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    *params->_ret = iface->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer013_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer013_HandleIncomingPacket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
}

void cppISteamGameServer_SteamGameServer013_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer013_GetNextOutgoingPacket_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
}

void cppISteamGameServer_SteamGameServer013_EnableHeartbeats( struct cppISteamGameServer_SteamGameServer013_EnableHeartbeats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->EnableHeartbeats( params->bActive );
}

void cppISteamGameServer_SteamGameServer013_SetHeartbeatInterval( struct cppISteamGameServer_SteamGameServer013_SetHeartbeatInterval_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer013_ForceHeartbeat( struct cppISteamGameServer_SteamGameServer013_ForceHeartbeat_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    iface->ForceHeartbeat(  );
}

void cppISteamGameServer_SteamGameServer013_AssociateWithClan( struct cppISteamGameServer_SteamGameServer013_AssociateWithClan_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer013_ComputeNewPlayerCompatibility_params *params )
{
    struct u_ISteamGameServer_SteamGameServer013 *iface = (struct u_ISteamGameServer_SteamGameServer013 *)params->linux_side;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
}

