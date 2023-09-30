/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer009.h"

void cppISteamGameServer_SteamGameServer009_LogOn( struct cppISteamGameServer_SteamGameServer009_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer009_LogOff( struct cppISteamGameServer_SteamGameServer009_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer009_BLoggedOn( struct cppISteamGameServer_SteamGameServer009_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer009_BSecure( struct cppISteamGameServer_SteamGameServer009_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer009_GetSteamID( struct cppISteamGameServer_SteamGameServer009_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer009_SendUserConnectAndAuthenticate_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->SendUserConnectAndAuthenticate( params->unIPClient, params->pvAuthBlob, params->cubAuthBlobSize, params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer009_CreateUnauthenticatedUserConnection_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    *params->_ret = iface->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer009_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer009_SendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    iface->SendUserDisconnect( params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer009_BUpdateUserData( struct cppISteamGameServer_SteamGameServer009_BUpdateUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->BUpdateUserData( params->steamIDUser, params->pchPlayerName, params->uScore );
}

void cppISteamGameServer_SteamGameServer009_BSetServerType( struct cppISteamGameServer_SteamGameServer009_BSetServerType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->BSetServerType( params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer009_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer009_UpdateServerStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    iface->UpdateServerStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer009_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer009_UpdateSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    iface->UpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer009_SetGameType( struct cppISteamGameServer_SteamGameServer009_SetGameType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    iface->SetGameType( params->pchGameType );
}

void cppISteamGameServer_SteamGameServer009_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer009_BGetUserAchievementStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->BGetUserAchievementStatus( params->steamID, params->pchAchievementName );
}

void cppISteamGameServer_SteamGameServer009_GetGameplayStats( struct cppISteamGameServer_SteamGameServer009_GetGameplayStats_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    iface->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer009_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer009_RequestUserGroupStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->RequestUserGroupStatus( params->steamIDUser, params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer009_GetPublicIP( struct cppISteamGameServer_SteamGameServer009_GetPublicIP_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer009_SetGameData( struct cppISteamGameServer_SteamGameServer009_SetGameData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    iface->SetGameData( params->pchGameData );
}

void cppISteamGameServer_SteamGameServer009_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer009_UserHasLicenseForApp_params *params )
{
    struct u_ISteamGameServer_SteamGameServer009 *iface = (struct u_ISteamGameServer_SteamGameServer009 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

