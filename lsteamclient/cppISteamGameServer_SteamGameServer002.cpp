#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099x/steam_api.h"
#include "steamworks_sdk_099x/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099x
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer002.h"
void cppISteamGameServer_SteamGameServer002_LogOn( struct cppISteamGameServer_SteamGameServer002_LogOn_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOn(  );
}

void cppISteamGameServer_SteamGameServer002_LogOff( struct cppISteamGameServer_SteamGameServer002_LogOff_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOff(  );
}

void cppISteamGameServer_SteamGameServer002_BLoggedOn( struct cppISteamGameServer_SteamGameServer002_BLoggedOn_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer002_GSSetSpawnCount( struct cppISteamGameServer_SteamGameServer002_GSSetSpawnCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GSSetSpawnCount( (uint32)params->ucSpawn );
}

void cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient( struct cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSGetSteam2GetEncryptionKeyToSendToNewClient( (void *)params->pvEncryptionKey, (uint32 *)params->pcbEncryptionKey, (uint32)params->cbMaxEncryptionKey );
}

void cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect( struct cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSendSteam2UserConnect( (uint32)params->unUserID, (const void *)params->pvRawKey, (uint32)params->unKeyLen, (uint32)params->unIPPublic, (uint16)params->usPort, (const void *)params->pvCookie, (uint32)params->cubCookie );
}

void cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect( struct cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSendSteam3UserConnect( (CSteamID)params->steamID, (uint32)params->unIPPublic, (const void *)params->pvCookie, (uint32)params->cubCookie );
}

void cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect( struct cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSRemoveUserConnect( (uint32)params->unUserID );
}

void cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect( struct cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSendUserDisconnect( (CSteamID)params->steamID, (uint32)params->unUserID );
}

void cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse( struct cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSendUserStatusResponse( (CSteamID)params->steamID, (int)params->nSecondsConnected, (int)params->nSecondsSinceLast );
}

void cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus( struct cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->Obsolete_GSSetStatus( (int32)params->nAppIdServed, (uint32)params->unServerFlags, (int)params->cPlayers, (int)params->cPlayersMax, (int)params->cBotPlayers, (int)params->unGamePort, (const char *)params->pchServerName, (const char *)params->pchGameDir, (const char *)params->pchMapName, (const char *)params->pchVersion );
}

void cppISteamGameServer_SteamGameServer002_GSUpdateStatus( struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSUpdateStatus( (int)params->cPlayers, (int)params->cPlayersMax, (int)params->cBotPlayers, (const char *)params->pchServerName, (const char *)params->pchMapName );
}

void cppISteamGameServer_SteamGameServer002_BSecure( struct cppISteamGameServer_SteamGameServer002_BSecure_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSecure(  );
}

void cppISteamGameServer_SteamGameServer002_GetSteamID( struct cppISteamGameServer_SteamGameServer002_GetSteamID_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer002_GSSetServerType( struct cppISteamGameServer_SteamGameServer002_GSSetServerType_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSetServerType( (int32)params->nGameAppId, (uint32)params->unServerFlags, (uint32)params->unGameIP, (uint32)params->unGamePort, (const char *)params->pchGameDir, (const char *)params->pchVersion );
}

void cppISteamGameServer_SteamGameServer002_GSSetServerType2( struct cppISteamGameServer_SteamGameServer002_GSSetServerType2_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSetServerType2( (int32)params->nGameAppId, (uint32)params->unServerFlags, (uint32)params->unGameIP, (uint16)params->unGamePort, (uint16)params->unSpectatorPort, (uint16)params->usQueryPort, (const char *)params->pchGameDir, (const char *)params->pchVersion, (bool)params->bLANMode );
}

void cppISteamGameServer_SteamGameServer002_GSUpdateStatus2( struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus2_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSUpdateStatus2( (int)params->cPlayers, (int)params->cPlayersMax, (int)params->cBotPlayers, (const char *)params->pchServerName, (const char *)params->pSpectatorServerName, (const char *)params->pchMapName );
}

void cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser( struct cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSCreateUnauthenticatedUser( (CSteamID *)params->pSteamID );
}

void cppISteamGameServer_SteamGameServer002_GSSetUserData( struct cppISteamGameServer_SteamGameServer002_GSSetUserData_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSetUserData( (CSteamID)params->steamID, (const char *)params->pPlayerName, (uint32)params->nFrags );
}

void cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GSUpdateSpectatorPort( (uint16)params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer002_GSSetGameType( struct cppISteamGameServer_SteamGameServer002_GSSetGameType_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GSSetGameType( (const char *)params->pchType );
}

#ifdef __cplusplus
}
#endif
