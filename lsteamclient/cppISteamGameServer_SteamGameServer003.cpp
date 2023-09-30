/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServer_SteamGameServer003.h"

void cppISteamGameServer_SteamGameServer003_LogOn( struct cppISteamGameServer_SteamGameServer003_LogOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer003_LogOff( struct cppISteamGameServer_SteamGameServer003_LogOff_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer003_BLoggedOn( struct cppISteamGameServer_SteamGameServer003_BLoggedOn_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer003_BSecure( struct cppISteamGameServer_SteamGameServer003_BSecure_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer003_GetSteamID( struct cppISteamGameServer_SteamGameServer003_GetSteamID_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient( struct cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSGetSteam2GetEncryptionKeyToSendToNewClient( params->pvEncryptionKey, params->pcbEncryptionKey, params->cbMaxEncryptionKey );
}

void cppISteamGameServer_SteamGameServer003_GSSendUserConnect( struct cppISteamGameServer_SteamGameServer003_GSSendUserConnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSSendUserConnect( params->unUserID, params->unIPPublic, params->usPort, params->pvCookie, params->cubCookie );
}

void cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect( struct cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSRemoveUserConnect( params->unUserID );
}

void cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect( struct cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSSendUserDisconnect( params->steamID, params->unUserID );
}

void cppISteamGameServer_SteamGameServer003_GSSetSpawnCount( struct cppISteamGameServer_SteamGameServer003_GSSetSpawnCount_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->GSSetSpawnCount( params->ucSpawn );
}

void cppISteamGameServer_SteamGameServer003_GSSetServerType( struct cppISteamGameServer_SteamGameServer003_GSSetServerType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSSetServerType( params->nGameAppId, params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer003_GSUpdateStatus( struct cppISteamGameServer_SteamGameServer003_GSUpdateStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSUpdateStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser( struct cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSCreateUnauthenticatedUser( params->pSteamID );
}

void cppISteamGameServer_SteamGameServer003_GSSetUserData( struct cppISteamGameServer_SteamGameServer003_GSSetUserData_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSSetUserData( params->steamID, params->pPlayerName, params->nFrags );
}

void cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->GSUpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer003_GSSetGameType( struct cppISteamGameServer_SteamGameServer003_GSSetGameType_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->GSSetGameType( params->pchType );
}

void cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus_params *params )
{
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSGetUserAchievementStatus( params->steamID, params->pchAchievementName );
}

