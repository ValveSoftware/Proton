/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer004.h"

void cppISteamGameServer_SteamGameServer004_LogOn( struct cppISteamGameServer_SteamGameServer004_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer004_LogOff( struct cppISteamGameServer_SteamGameServer004_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer004_BLoggedOn( struct cppISteamGameServer_SteamGameServer004_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer004_BSecure( struct cppISteamGameServer_SteamGameServer004_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer004_GetSteamID( struct cppISteamGameServer_SteamGameServer004_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->SendUserConnectAndAuthenticate( params->steamIDUser, params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize );
}

void cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer004_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer004_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer004_BUpdateUserData( struct cppISteamGameServer_SteamGameServer004_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer004_BSetServerType( struct cppISteamGameServer_SteamGameServer004_BSetServerType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->nGameAppId, params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer004_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer004_UpdateServerStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer004_SetGameType( struct cppISteamGameServer_SteamGameServer004_SetGameType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    iface->SetGameType( params->pchGameType );
}

void cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer004 *iface = (struct u_ISteamGameServer_SteamGameServer004 *)params->linux_side;
    params->_ret = iface->BGetUserAchievementStatus( params->steamID, params->pchAchievementName );
}

