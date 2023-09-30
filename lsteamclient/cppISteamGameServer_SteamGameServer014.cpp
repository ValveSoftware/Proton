/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameServer_SteamGameServer014_InitGameServer( void *args )
{
    struct ISteamGameServer_SteamGameServer014_InitGameServer_params *params = (struct ISteamGameServer_SteamGameServer014_InitGameServer_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->InitGameServer( params->unIP, params->usGamePort, params->usQueryPort, params->unFlags, params->nGameAppId, params->pchVersionString );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetProduct( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetProduct_params *params = (struct ISteamGameServer_SteamGameServer014_SetProduct_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetProduct( params->pszProduct );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetGameDescription( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetGameDescription_params *params = (struct ISteamGameServer_SteamGameServer014_SetGameDescription_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetGameDescription( params->pszGameDescription );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetModDir( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetModDir_params *params = (struct ISteamGameServer_SteamGameServer014_SetModDir_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetModDir( params->pszModDir );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetDedicatedServer( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetDedicatedServer_params *params = (struct ISteamGameServer_SteamGameServer014_SetDedicatedServer_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetDedicatedServer( params->bDedicated );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_LogOn( void *args )
{
    struct ISteamGameServer_SteamGameServer014_LogOn_params *params = (struct ISteamGameServer_SteamGameServer014_LogOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->LogOn( params->pszToken );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_LogOnAnonymous( void *args )
{
    struct ISteamGameServer_SteamGameServer014_LogOnAnonymous_params *params = (struct ISteamGameServer_SteamGameServer014_LogOnAnonymous_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->LogOnAnonymous(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_LogOff( void *args )
{
    struct ISteamGameServer_SteamGameServer014_LogOff_params *params = (struct ISteamGameServer_SteamGameServer014_LogOff_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_BLoggedOn( void *args )
{
    struct ISteamGameServer_SteamGameServer014_BLoggedOn_params *params = (struct ISteamGameServer_SteamGameServer014_BLoggedOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_BSecure( void *args )
{
    struct ISteamGameServer_SteamGameServer014_BSecure_params *params = (struct ISteamGameServer_SteamGameServer014_BSecure_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->BSecure(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_GetSteamID( void *args )
{
    struct ISteamGameServer_SteamGameServer014_GetSteamID_params *params = (struct ISteamGameServer_SteamGameServer014_GetSteamID_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_WasRestartRequested( void *args )
{
    struct ISteamGameServer_SteamGameServer014_WasRestartRequested_params *params = (struct ISteamGameServer_SteamGameServer014_WasRestartRequested_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->WasRestartRequested(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetMaxPlayerCount( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetMaxPlayerCount_params *params = (struct ISteamGameServer_SteamGameServer014_SetMaxPlayerCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetMaxPlayerCount( params->cPlayersMax );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetBotPlayerCount( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetBotPlayerCount_params *params = (struct ISteamGameServer_SteamGameServer014_SetBotPlayerCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetBotPlayerCount( params->cBotplayers );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetServerName( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetServerName_params *params = (struct ISteamGameServer_SteamGameServer014_SetServerName_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetServerName( params->pszServerName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetMapName( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetMapName_params *params = (struct ISteamGameServer_SteamGameServer014_SetMapName_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetMapName( params->pszMapName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetPasswordProtected( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetPasswordProtected_params *params = (struct ISteamGameServer_SteamGameServer014_SetPasswordProtected_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetPasswordProtected( params->bPasswordProtected );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetSpectatorPort( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetSpectatorPort_params *params = (struct ISteamGameServer_SteamGameServer014_SetSpectatorPort_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetSpectatorPort( params->unSpectatorPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetSpectatorServerName( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetSpectatorServerName_params *params = (struct ISteamGameServer_SteamGameServer014_SetSpectatorServerName_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetSpectatorServerName( params->pszSpectatorServerName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_ClearAllKeyValues( void *args )
{
    struct ISteamGameServer_SteamGameServer014_ClearAllKeyValues_params *params = (struct ISteamGameServer_SteamGameServer014_ClearAllKeyValues_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->ClearAllKeyValues(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetKeyValue( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetKeyValue_params *params = (struct ISteamGameServer_SteamGameServer014_SetKeyValue_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetKeyValue( params->pKey, params->pValue );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetGameTags( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetGameTags_params *params = (struct ISteamGameServer_SteamGameServer014_SetGameTags_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetGameData( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetGameData_params *params = (struct ISteamGameServer_SteamGameServer014_SetGameData_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetRegion( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetRegion_params *params = (struct ISteamGameServer_SteamGameServer014_SetRegion_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetRegion( params->pszRegion );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetAdvertiseServerActive( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetAdvertiseServerActive_params *params = (struct ISteamGameServer_SteamGameServer014_SetAdvertiseServerActive_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetAdvertiseServerActive( params->bActive );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_GetAuthSessionTicket( void *args )
{
    struct ISteamGameServer_SteamGameServer014_GetAuthSessionTicket_params *params = (struct ISteamGameServer_SteamGameServer014_GetAuthSessionTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_BeginAuthSession( void *args )
{
    struct ISteamGameServer_SteamGameServer014_BeginAuthSession_params *params = (struct ISteamGameServer_SteamGameServer014_BeginAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_EndAuthSession( void *args )
{
    struct ISteamGameServer_SteamGameServer014_EndAuthSession_params *params = (struct ISteamGameServer_SteamGameServer014_EndAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_CancelAuthTicket( void *args )
{
    struct ISteamGameServer_SteamGameServer014_CancelAuthTicket_params *params = (struct ISteamGameServer_SteamGameServer014_CancelAuthTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_UserHasLicenseForApp( void *args )
{
    struct ISteamGameServer_SteamGameServer014_UserHasLicenseForApp_params *params = (struct ISteamGameServer_SteamGameServer014_UserHasLicenseForApp_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_RequestUserGroupStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer014_RequestUserGroupStatus_params *params = (struct ISteamGameServer_SteamGameServer014_RequestUserGroupStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_GetGameplayStats( void *args )
{
    struct ISteamGameServer_SteamGameServer014_GetGameplayStats_params *params = (struct ISteamGameServer_SteamGameServer014_GetGameplayStats_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->GetGameplayStats(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_GetServerReputation( void *args )
{
    struct ISteamGameServer_SteamGameServer014_GetServerReputation_params *params = (struct ISteamGameServer_SteamGameServer014_GetServerReputation_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_GetPublicIP( void *args )
{
    struct ISteamGameServer_SteamGameServer014_GetPublicIP_params *params = (struct ISteamGameServer_SteamGameServer014_GetPublicIP_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    *params->_ret = iface->GetPublicIP(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_HandleIncomingPacket( void *args )
{
    struct ISteamGameServer_SteamGameServer014_HandleIncomingPacket_params *params = (struct ISteamGameServer_SteamGameServer014_HandleIncomingPacket_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->HandleIncomingPacket( params->pData, params->cbData, params->srcIP, params->srcPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_GetNextOutgoingPacket( void *args )
{
    struct ISteamGameServer_SteamGameServer014_GetNextOutgoingPacket_params *params = (struct ISteamGameServer_SteamGameServer014_GetNextOutgoingPacket_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->GetNextOutgoingPacket( params->pOut, params->cbMaxOut, params->pNetAdr, params->pPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_AssociateWithClan( void *args )
{
    struct ISteamGameServer_SteamGameServer014_AssociateWithClan_params *params = (struct ISteamGameServer_SteamGameServer014_AssociateWithClan_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->AssociateWithClan( params->steamIDClan );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility( void *args )
{
    struct ISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility_params *params = (struct ISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->ComputeNewPlayerCompatibility( params->steamIDNewPlayer );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED_params *params = (struct ISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate_DEPRECATED( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection( void *args )
{
    struct ISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection_params *params = (struct ISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED_params *params = (struct ISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SendUserDisconnect_DEPRECATED( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_BUpdateUserData( void *args )
{
    struct ISteamGameServer_SteamGameServer014_BUpdateUserData_params *params = (struct ISteamGameServer_SteamGameServer014_BUpdateUserData_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED( void *args )
{
    struct ISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED_params *params = (struct ISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->SetMasterServerHeartbeatInterval_DEPRECATED( params->iHeartbeatInterval );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED( void *args )
{
    struct ISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED_params *params = (struct ISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED_params *)args;
    struct u_ISteamGameServer_SteamGameServer014 *iface = (struct u_ISteamGameServer_SteamGameServer014 *)params->linux_side;
    iface->ForceMasterServerHeartbeat_DEPRECATED(  );
    return 0;
}

