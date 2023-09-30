/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer008.h"

void cppISteamGameServer_SteamGameServer008_LogOn( struct cppISteamGameServer_SteamGameServer008_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer008_LogOff( struct cppISteamGameServer_SteamGameServer008_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer008_BLoggedOn( struct cppISteamGameServer_SteamGameServer008_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer008_BSecure( struct cppISteamGameServer_SteamGameServer008_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer008_GetSteamID( struct cppISteamGameServer_SteamGameServer008_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer008_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer008_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer008_BUpdateUserData( struct cppISteamGameServer_SteamGameServer008_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer008_BSetServerType( struct cppISteamGameServer_SteamGameServer008_BSetServerType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer008_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer008_UpdateServerStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer008_SetGameType( struct cppISteamGameServer_SteamGameServer008_SetGameType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->SetGameType( params->pchGameType );
}

void cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->BGetUserAchievementStatus( params->steamID, params->pchAchievementName );
}

void cppISteamGameServer_SteamGameServer008_GetGameplayStats( struct cppISteamGameServer_SteamGameServer008_GetGameplayStats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer008_GetPublicIP( struct cppISteamGameServer_SteamGameServer008_GetPublicIP_params *params )
{
    struct u_ISteamGameServer_SteamGameServer008 *iface = (struct u_ISteamGameServer_SteamGameServer008 *)params->linux_side;
    params->_ret = iface->GetPublicIP(  );
}

