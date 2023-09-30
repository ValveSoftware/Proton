/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameServer_SteamGameServer005_LogOn( void *args )
{
    struct ISteamGameServer_SteamGameServer005_LogOn_params *params = (struct ISteamGameServer_SteamGameServer005_LogOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->LogOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_LogOff( void *args )
{
    struct ISteamGameServer_SteamGameServer005_LogOff_params *params = (struct ISteamGameServer_SteamGameServer005_LogOff_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_BLoggedOn( void *args )
{
    struct ISteamGameServer_SteamGameServer005_BLoggedOn_params *params = (struct ISteamGameServer_SteamGameServer005_BLoggedOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_BSecure( void *args )
{
    struct ISteamGameServer_SteamGameServer005_BSecure_params *params = (struct ISteamGameServer_SteamGameServer005_BSecure_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BSecure(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_GetSteamID( void *args )
{
    struct ISteamGameServer_SteamGameServer005_GetSteamID_params *params = (struct ISteamGameServer_SteamGameServer005_GetSteamID_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate( void *args )
{
    struct ISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate_params *params = (struct ISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection( void *args )
{
    struct ISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection_params *params = (struct ISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_SendUserDisconnect( void *args )
{
    struct ISteamGameServer_SteamGameServer005_SendUserDisconnect_params *params = (struct ISteamGameServer_SteamGameServer005_SendUserDisconnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_BUpdateUserData( void *args )
{
    struct ISteamGameServer_SteamGameServer005_BUpdateUserData_params *params = (struct ISteamGameServer_SteamGameServer005_BUpdateUserData_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_BSetServerType( void *args )
{
    struct ISteamGameServer_SteamGameServer005_BSetServerType_params *params = (struct ISteamGameServer_SteamGameServer005_BSetServerType_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_UpdateServerStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer005_UpdateServerStatus_params *params = (struct ISteamGameServer_SteamGameServer005_UpdateServerStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_UpdateSpectatorPort( void *args )
{
    struct ISteamGameServer_SteamGameServer005_UpdateSpectatorPort_params *params = (struct ISteamGameServer_SteamGameServer005_UpdateSpectatorPort_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_SetGameType( void *args )
{
    struct ISteamGameServer_SteamGameServer005_SetGameType_params *params = (struct ISteamGameServer_SteamGameServer005_SetGameType_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->SetGameType( params->pchGameType );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer005_BGetUserAchievementStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer005_BGetUserAchievementStatus_params *params = (struct ISteamGameServer_SteamGameServer005_BGetUserAchievementStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BGetUserAchievementStatus( params->steamID, params->pchAchievementName );
    return 0;
}

