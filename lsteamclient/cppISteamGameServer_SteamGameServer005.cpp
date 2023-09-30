/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer005.h"

void cppISteamGameServer_SteamGameServer005_LogOn( struct cppISteamGameServer_SteamGameServer005_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer005_LogOff( struct cppISteamGameServer_SteamGameServer005_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer005_BLoggedOn( struct cppISteamGameServer_SteamGameServer005_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer005_BSecure( struct cppISteamGameServer_SteamGameServer005_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer005_GetSteamID( struct cppISteamGameServer_SteamGameServer005_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer005_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer005_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer005_BUpdateUserData( struct cppISteamGameServer_SteamGameServer005_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer005_BSetServerType( struct cppISteamGameServer_SteamGameServer005_BSetServerType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer005_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer005_UpdateServerStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer005_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer005_UpdateSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer005_SetGameType( struct cppISteamGameServer_SteamGameServer005_SetGameType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    iface->SetGameType( params->pchGameType );
}

void cppISteamGameServer_SteamGameServer005_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer005_BGetUserAchievementStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer005 *iface = (struct u_ISteamGameServer_SteamGameServer005 *)params->linux_side;
    params->_ret = iface->BGetUserAchievementStatus( params->steamID, params->pchAchievementName );
}

