/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameServer_SteamGameServer011_InitGameServer( void *args )
{
    struct ISteamGameServer_SteamGameServer011_InitGameServer_params *params = (struct ISteamGameServer_SteamGameServer011_InitGameServer_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetProduct( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetProduct_params *params = (struct ISteamGameServer_SteamGameServer011_SetProduct_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetProduct( params->pszProduct );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetGameDescription( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetGameDescription_params *params = (struct ISteamGameServer_SteamGameServer011_SetGameDescription_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetGameDescription( params->pszGameDescription );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetModDir( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetModDir_params *params = (struct ISteamGameServer_SteamGameServer011_SetModDir_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetModDir( params->pszModDir );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetDedicatedServer( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetDedicatedServer_params *params = (struct ISteamGameServer_SteamGameServer011_SetDedicatedServer_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetDedicatedServer( params->bDedicated );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_LogOn( void *args )
{
    struct ISteamGameServer_SteamGameServer011_LogOn_params *params = (struct ISteamGameServer_SteamGameServer011_LogOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->LogOn( params->pszAccountName, params->pszPassword );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_LogOnAnonymous( void *args )
{
    struct ISteamGameServer_SteamGameServer011_LogOnAnonymous_params *params = (struct ISteamGameServer_SteamGameServer011_LogOnAnonymous_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->LogOnAnonymous(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_LogOff( void *args )
{
    struct ISteamGameServer_SteamGameServer011_LogOff_params *params = (struct ISteamGameServer_SteamGameServer011_LogOff_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_BLoggedOn( void *args )
{
    struct ISteamGameServer_SteamGameServer011_BLoggedOn_params *params = (struct ISteamGameServer_SteamGameServer011_BLoggedOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_BSecure( void *args )
{
    struct ISteamGameServer_SteamGameServer011_BSecure_params *params = (struct ISteamGameServer_SteamGameServer011_BSecure_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->BSecure(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_GetSteamID( void *args )
{
    struct ISteamGameServer_SteamGameServer011_GetSteamID_params *params = (struct ISteamGameServer_SteamGameServer011_GetSteamID_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_WasRestartRequested( void *args )
{
    struct ISteamGameServer_SteamGameServer011_WasRestartRequested_params *params = (struct ISteamGameServer_SteamGameServer011_WasRestartRequested_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetMaxPlayerCount( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetMaxPlayerCount_params *params = (struct ISteamGameServer_SteamGameServer011_SetMaxPlayerCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetMaxPlayerCount( params->cPlayersMax );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetBotPlayerCount( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetBotPlayerCount_params *params = (struct ISteamGameServer_SteamGameServer011_SetBotPlayerCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetBotPlayerCount( params->cBotplayers );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetServerName( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetServerName_params *params = (struct ISteamGameServer_SteamGameServer011_SetServerName_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetServerName( params->pszServerName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetMapName( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetMapName_params *params = (struct ISteamGameServer_SteamGameServer011_SetMapName_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetMapName( params->pszMapName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetPasswordProtected( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetPasswordProtected_params *params = (struct ISteamGameServer_SteamGameServer011_SetPasswordProtected_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetPasswordProtected( params->bPasswordProtected );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetSpectatorPort( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetSpectatorPort_params *params = (struct ISteamGameServer_SteamGameServer011_SetSpectatorPort_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetSpectatorPort( params->unSpectatorPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetSpectatorServerName( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetSpectatorServerName_params *params = (struct ISteamGameServer_SteamGameServer011_SetSpectatorServerName_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_ClearAllKeyValues( void *args )
{
    struct ISteamGameServer_SteamGameServer011_ClearAllKeyValues_params *params = (struct ISteamGameServer_SteamGameServer011_ClearAllKeyValues_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->ClearAllKeyValues(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetKeyValue( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetKeyValue_params *params = (struct ISteamGameServer_SteamGameServer011_SetKeyValue_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetGameTags( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetGameTags_params *params = (struct ISteamGameServer_SteamGameServer011_SetGameTags_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetGameData( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetGameData_params *params = (struct ISteamGameServer_SteamGameServer011_SetGameData_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetRegion( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetRegion_params *params = (struct ISteamGameServer_SteamGameServer011_SetRegion_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetRegion( params->pszRegion );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate_params *params = (struct ISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection( void *args )
{
    struct ISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection_params *params = (struct ISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SendUserDisconnect( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SendUserDisconnect_params *params = (struct ISteamGameServer_SteamGameServer011_SendUserDisconnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_BUpdateUserData( void *args )
{
    struct ISteamGameServer_SteamGameServer011_BUpdateUserData_params *params = (struct ISteamGameServer_SteamGameServer011_BUpdateUserData_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_GetAuthSessionTicket( void *args )
{
    struct ISteamGameServer_SteamGameServer011_GetAuthSessionTicket_params *params = (struct ISteamGameServer_SteamGameServer011_GetAuthSessionTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_BeginAuthSession( void *args )
{
    struct ISteamGameServer_SteamGameServer011_BeginAuthSession_params *params = (struct ISteamGameServer_SteamGameServer011_BeginAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_EndAuthSession( void *args )
{
    struct ISteamGameServer_SteamGameServer011_EndAuthSession_params *params = (struct ISteamGameServer_SteamGameServer011_EndAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_CancelAuthTicket( void *args )
{
    struct ISteamGameServer_SteamGameServer011_CancelAuthTicket_params *params = (struct ISteamGameServer_SteamGameServer011_CancelAuthTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_UserHasLicenseForApp( void *args )
{
    struct ISteamGameServer_SteamGameServer011_UserHasLicenseForApp_params *params = (struct ISteamGameServer_SteamGameServer011_UserHasLicenseForApp_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_RequestUserGroupStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer011_RequestUserGroupStatus_params *params = (struct ISteamGameServer_SteamGameServer011_RequestUserGroupStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_GetGameplayStats( void *args )
{
    struct ISteamGameServer_SteamGameServer011_GetGameplayStats_params *params = (struct ISteamGameServer_SteamGameServer011_GetGameplayStats_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->GetGameplayStats(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_GetServerReputation( void *args )
{
    struct ISteamGameServer_SteamGameServer011_GetServerReputation_params *params = (struct ISteamGameServer_SteamGameServer011_GetServerReputation_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_GetPublicIP( void *args )
{
    struct ISteamGameServer_SteamGameServer011_GetPublicIP_params *params = (struct ISteamGameServer_SteamGameServer011_GetPublicIP_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->GetPublicIP(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_HandleIncomingPacket( void *args )
{
    struct ISteamGameServer_SteamGameServer011_HandleIncomingPacket_params *params = (struct ISteamGameServer_SteamGameServer011_HandleIncomingPacket_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_GetNextOutgoingPacket( void *args )
{
    struct ISteamGameServer_SteamGameServer011_GetNextOutgoingPacket_params *params = (struct ISteamGameServer_SteamGameServer011_GetNextOutgoingPacket_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_EnableHeartbeats( void *args )
{
    struct ISteamGameServer_SteamGameServer011_EnableHeartbeats_params *params = (struct ISteamGameServer_SteamGameServer011_EnableHeartbeats_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->EnableHeartbeats( params->bActive );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_SetHeartbeatInterval( void *args )
{
    struct ISteamGameServer_SteamGameServer011_SetHeartbeatInterval_params *params = (struct ISteamGameServer_SteamGameServer011_SetHeartbeatInterval_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->SetHeartbeatInterval( params->iHeartbeatInterval );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_ForceHeartbeat( void *args )
{
    struct ISteamGameServer_SteamGameServer011_ForceHeartbeat_params *params = (struct ISteamGameServer_SteamGameServer011_ForceHeartbeat_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    iface->ForceHeartbeat(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_AssociateWithClan( void *args )
{
    struct ISteamGameServer_SteamGameServer011_AssociateWithClan_params *params = (struct ISteamGameServer_SteamGameServer011_AssociateWithClan_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility( void *args )
{
    struct ISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility_params *params = (struct ISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility_params *)args;
    struct u_ISteamGameServer_SteamGameServer011 *iface = (struct u_ISteamGameServer_SteamGameServer011 *)params->linux_side;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
    return 0;
}

