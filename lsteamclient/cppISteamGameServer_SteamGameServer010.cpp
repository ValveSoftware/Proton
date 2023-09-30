/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameServer_SteamGameServer010_LogOn( void *args )
{
    struct ISteamGameServer_SteamGameServer010_LogOn_params *params = (struct ISteamGameServer_SteamGameServer010_LogOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->LogOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_LogOff( void *args )
{
    struct ISteamGameServer_SteamGameServer010_LogOff_params *params = (struct ISteamGameServer_SteamGameServer010_LogOff_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_BLoggedOn( void *args )
{
    struct ISteamGameServer_SteamGameServer010_BLoggedOn_params *params = (struct ISteamGameServer_SteamGameServer010_BLoggedOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_BSecure( void *args )
{
    struct ISteamGameServer_SteamGameServer010_BSecure_params *params = (struct ISteamGameServer_SteamGameServer010_BSecure_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BSecure(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_GetSteamID( void *args )
{
    struct ISteamGameServer_SteamGameServer010_GetSteamID_params *params = (struct ISteamGameServer_SteamGameServer010_GetSteamID_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate( void *args )
{
    struct ISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate_params *params = (struct ISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection( void *args )
{
    struct ISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection_params *params = (struct ISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_SendUserDisconnect( void *args )
{
    struct ISteamGameServer_SteamGameServer010_SendUserDisconnect_params *params = (struct ISteamGameServer_SteamGameServer010_SendUserDisconnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_BUpdateUserData( void *args )
{
    struct ISteamGameServer_SteamGameServer010_BUpdateUserData_params *params = (struct ISteamGameServer_SteamGameServer010_BUpdateUserData_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_BSetServerType( void *args )
{
    struct ISteamGameServer_SteamGameServer010_BSetServerType_params *params = (struct ISteamGameServer_SteamGameServer010_BSetServerType_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_UpdateServerStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer010_UpdateServerStatus_params *params = (struct ISteamGameServer_SteamGameServer010_UpdateServerStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_UpdateSpectatorPort( void *args )
{
    struct ISteamGameServer_SteamGameServer010_UpdateSpectatorPort_params *params = (struct ISteamGameServer_SteamGameServer010_UpdateSpectatorPort_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_SetGameTags( void *args )
{
    struct ISteamGameServer_SteamGameServer010_SetGameTags_params *params = (struct ISteamGameServer_SteamGameServer010_SetGameTags_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->SetGameTags( params->pchGameTags );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_GetGameplayStats( void *args )
{
    struct ISteamGameServer_SteamGameServer010_GetGameplayStats_params *params = (struct ISteamGameServer_SteamGameServer010_GetGameplayStats_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->GetGameplayStats(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_GetServerReputation( void *args )
{
    struct ISteamGameServer_SteamGameServer010_GetServerReputation_params *params = (struct ISteamGameServer_SteamGameServer010_GetServerReputation_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->GetServerReputation(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_RequestUserGroupStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer010_RequestUserGroupStatus_params *params = (struct ISteamGameServer_SteamGameServer010_RequestUserGroupStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_GetPublicIP( void *args )
{
    struct ISteamGameServer_SteamGameServer010_GetPublicIP_params *params = (struct ISteamGameServer_SteamGameServer010_GetPublicIP_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->GetPublicIP(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_SetGameData( void *args )
{
    struct ISteamGameServer_SteamGameServer010_SetGameData_params *params = (struct ISteamGameServer_SteamGameServer010_SetGameData_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_UserHasLicenseForApp( void *args )
{
    struct ISteamGameServer_SteamGameServer010_UserHasLicenseForApp_params *params = (struct ISteamGameServer_SteamGameServer010_UserHasLicenseForApp_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_GetAuthSessionTicket( void *args )
{
    struct ISteamGameServer_SteamGameServer010_GetAuthSessionTicket_params *params = (struct ISteamGameServer_SteamGameServer010_GetAuthSessionTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_BeginAuthSession( void *args )
{
    struct ISteamGameServer_SteamGameServer010_BeginAuthSession_params *params = (struct ISteamGameServer_SteamGameServer010_BeginAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_EndAuthSession( void *args )
{
    struct ISteamGameServer_SteamGameServer010_EndAuthSession_params *params = (struct ISteamGameServer_SteamGameServer010_EndAuthSession_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer010_CancelAuthTicket( void *args )
{
    struct ISteamGameServer_SteamGameServer010_CancelAuthTicket_params *params = (struct ISteamGameServer_SteamGameServer010_CancelAuthTicket_params *)args;
    struct u_ISteamGameServer_SteamGameServer010 *iface = (struct u_ISteamGameServer_SteamGameServer010 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
    return 0;
}

