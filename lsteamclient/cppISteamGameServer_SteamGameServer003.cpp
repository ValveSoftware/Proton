/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameServer_SteamGameServer003_LogOn( void *args )
{
    struct ISteamGameServer_SteamGameServer003_LogOn_params *params = (struct ISteamGameServer_SteamGameServer003_LogOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->LogOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_LogOff( void *args )
{
    struct ISteamGameServer_SteamGameServer003_LogOff_params *params = (struct ISteamGameServer_SteamGameServer003_LogOff_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_BLoggedOn( void *args )
{
    struct ISteamGameServer_SteamGameServer003_BLoggedOn_params *params = (struct ISteamGameServer_SteamGameServer003_BLoggedOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_BSecure( void *args )
{
    struct ISteamGameServer_SteamGameServer003_BSecure_params *params = (struct ISteamGameServer_SteamGameServer003_BSecure_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->BSecure(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GetSteamID( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GetSteamID_params *params = (struct ISteamGameServer_SteamGameServer003_GetSteamID_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params = (struct ISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSGetSteam2GetEncryptionKeyToSendToNewClient( params->pvEncryptionKey, params->pcbEncryptionKey, params->cbMaxEncryptionKey );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSSendUserConnect( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSSendUserConnect_params *params = (struct ISteamGameServer_SteamGameServer003_GSSendUserConnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSSendUserConnect( params->unUserID, params->unIPPublic, params->usPort, params->pvCookie, params->cubCookie );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSRemoveUserConnect( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params *params = (struct ISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSRemoveUserConnect( params->unUserID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSSendUserDisconnect( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params *params = (struct ISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSSendUserDisconnect( params->steamID, params->unUserID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSSetSpawnCount( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSSetSpawnCount_params *params = (struct ISteamGameServer_SteamGameServer003_GSSetSpawnCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->GSSetSpawnCount( params->ucSpawn );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSSetServerType( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSSetServerType_params *params = (struct ISteamGameServer_SteamGameServer003_GSSetServerType_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSSetServerType( params->nGameAppId, params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSUpdateStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSUpdateStatus_params *params = (struct ISteamGameServer_SteamGameServer003_GSUpdateStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSUpdateStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser_params *params = (struct ISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSCreateUnauthenticatedUser( params->pSteamID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSSetUserData( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSSetUserData_params *params = (struct ISteamGameServer_SteamGameServer003_GSSetUserData_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSSetUserData( params->steamID, params->pPlayerName, params->nFrags );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort_params *params = (struct ISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->GSUpdateSpectatorPort( params->unSpectatorPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSSetGameType( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSSetGameType_params *params = (struct ISteamGameServer_SteamGameServer003_GSSetGameType_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    iface->GSSetGameType( params->pchType );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus_params *params = (struct ISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer003 *iface = (struct u_ISteamGameServer_SteamGameServer003 *)params->linux_side;
    params->_ret = iface->GSGetUserAchievementStatus( params->steamID, params->pchAchievementName );
    return 0;
}

