/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameServer_SteamGameServer002_LogOn( void *args )
{
    struct ISteamGameServer_SteamGameServer002_LogOn_params *params = (struct ISteamGameServer_SteamGameServer002_LogOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->LogOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_LogOff( void *args )
{
    struct ISteamGameServer_SteamGameServer002_LogOff_params *params = (struct ISteamGameServer_SteamGameServer002_LogOff_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->LogOff(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_BLoggedOn( void *args )
{
    struct ISteamGameServer_SteamGameServer002_BLoggedOn_params *params = (struct ISteamGameServer_SteamGameServer002_BLoggedOn_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSetSpawnCount( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSetSpawnCount_params *params = (struct ISteamGameServer_SteamGameServer002_GSSetSpawnCount_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->GSSetSpawnCount( params->ucSpawn );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params = (struct ISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSGetSteam2GetEncryptionKeyToSendToNewClient( params->pvEncryptionKey, params->pcbEncryptionKey, params->cbMaxEncryptionKey );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params *params = (struct ISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSendSteam2UserConnect( params->unUserID, params->pvRawKey, params->unKeyLen, params->unIPPublic, params->usPort, params->pvCookie, params->cubCookie );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params *params = (struct ISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSendSteam3UserConnect( params->steamID, params->unIPPublic, params->pvCookie, params->cubCookie );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSRemoveUserConnect( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params *params = (struct ISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSRemoveUserConnect( params->unUserID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSendUserDisconnect( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params *params = (struct ISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSendUserDisconnect( params->steamID, params->unUserID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSendUserStatusResponse( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params *params = (struct ISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSendUserStatusResponse( params->steamID, params->nSecondsConnected, params->nSecondsSinceLast );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus_params *params = (struct ISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->Obsolete_GSSetStatus( params->nAppIdServed, params->unServerFlags, params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->unGamePort, params->pchServerName, params->pchGameDir, params->pchMapName, params->pchVersion );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSUpdateStatus( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSUpdateStatus_params *params = (struct ISteamGameServer_SteamGameServer002_GSUpdateStatus_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSUpdateStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pchMapName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_BSecure( void *args )
{
    struct ISteamGameServer_SteamGameServer002_BSecure_params *params = (struct ISteamGameServer_SteamGameServer002_BSecure_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->BSecure(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GetSteamID( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GetSteamID_params *params = (struct ISteamGameServer_SteamGameServer002_GetSteamID_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSetServerType( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSetServerType_params *params = (struct ISteamGameServer_SteamGameServer002_GSSetServerType_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSetServerType( params->nGameAppId, params->unServerFlags, params->unGameIP, params->unGamePort, params->pchGameDir, params->pchVersion );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSetServerType2( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSetServerType2_params *params = (struct ISteamGameServer_SteamGameServer002_GSSetServerType2_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSetServerType2( params->nGameAppId, params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSUpdateStatus2( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSUpdateStatus2_params *params = (struct ISteamGameServer_SteamGameServer002_GSUpdateStatus2_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSUpdateStatus2( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser_params *params = (struct ISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSCreateUnauthenticatedUser( params->pSteamID );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSetUserData( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSetUserData_params *params = (struct ISteamGameServer_SteamGameServer002_GSSetUserData_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSetUserData( params->steamID, params->pPlayerName, params->nFrags );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params *params = (struct ISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->GSUpdateSpectatorPort( params->unSpectatorPort );
    return 0;
}

NTSTATUS ISteamGameServer_SteamGameServer002_GSSetGameType( void *args )
{
    struct ISteamGameServer_SteamGameServer002_GSSetGameType_params *params = (struct ISteamGameServer_SteamGameServer002_GSSetGameType_params *)args;
    struct u_ISteamGameServer_SteamGameServer002 *iface = (struct u_ISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->GSSetGameType( params->pchType );
    return 0;
}

