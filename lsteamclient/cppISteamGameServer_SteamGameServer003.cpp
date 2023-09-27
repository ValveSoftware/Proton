#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#include "steamworks_sdk_099y/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer003.h"
void cppISteamGameServer_SteamGameServer003_LogOn( struct cppISteamGameServer_SteamGameServer003_LogOn_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOn(  );
}

void cppISteamGameServer_SteamGameServer003_LogOff( struct cppISteamGameServer_SteamGameServer003_LogOff_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOff(  );
}

void cppISteamGameServer_SteamGameServer003_BLoggedOn( struct cppISteamGameServer_SteamGameServer003_BLoggedOn_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer003_BSecure( struct cppISteamGameServer_SteamGameServer003_BSecure_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSecure(  );
}

void cppISteamGameServer_SteamGameServer003_GetSteamID( struct cppISteamGameServer_SteamGameServer003_GetSteamID_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient( struct cppISteamGameServer_SteamGameServer003_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSGetSteam2GetEncryptionKeyToSendToNewClient( (void *)params->pvEncryptionKey, (uint32 *)params->pcbEncryptionKey, (uint32)params->cbMaxEncryptionKey );
}

void cppISteamGameServer_SteamGameServer003_GSSendUserConnect( struct cppISteamGameServer_SteamGameServer003_GSSendUserConnect_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSendUserConnect( (uint32)params->unUserID, (uint32)params->unIPPublic, (uint16)params->usPort, (const void *)params->pvCookie, (uint32)params->cubCookie );
}

void cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect( struct cppISteamGameServer_SteamGameServer003_GSRemoveUserConnect_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSRemoveUserConnect( (uint32)params->unUserID );
}

void cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect( struct cppISteamGameServer_SteamGameServer003_GSSendUserDisconnect_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSendUserDisconnect( (CSteamID)params->steamID, (uint32)params->unUserID );
}

void cppISteamGameServer_SteamGameServer003_GSSetSpawnCount( struct cppISteamGameServer_SteamGameServer003_GSSetSpawnCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GSSetSpawnCount( (uint32)params->ucSpawn );
}

void cppISteamGameServer_SteamGameServer003_GSSetServerType( struct cppISteamGameServer_SteamGameServer003_GSSetServerType_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSetServerType( (int32)params->nGameAppId, (uint32)params->unServerFlags, (uint32)params->unGameIP, (uint16)params->unGamePort, (uint16)params->unSpectatorPort, (uint16)params->usQueryPort, (const char *)params->pchGameDir, (const char *)params->pchVersion, (bool)params->bLANMode );
}

void cppISteamGameServer_SteamGameServer003_GSUpdateStatus( struct cppISteamGameServer_SteamGameServer003_GSUpdateStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSUpdateStatus( (int)params->cPlayers, (int)params->cPlayersMax, (int)params->cBotPlayers, (const char *)params->pchServerName, (const char *)params->pSpectatorServerName, (const char *)params->pchMapName );
}

void cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser( struct cppISteamGameServer_SteamGameServer003_GSCreateUnauthenticatedUser_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSCreateUnauthenticatedUser( (CSteamID *)params->pSteamID );
}

void cppISteamGameServer_SteamGameServer003_GSSetUserData( struct cppISteamGameServer_SteamGameServer003_GSSetUserData_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSSetUserData( (CSteamID)params->steamID, (const char *)params->pPlayerName, (uint32)params->nFrags );
}

void cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer003_GSUpdateSpectatorPort_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GSUpdateSpectatorPort( (uint16)params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer003_GSSetGameType( struct cppISteamGameServer_SteamGameServer003_GSSetGameType_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GSSetGameType( (const char *)params->pchType );
}

void cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer003_GSGetUserAchievementStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GSGetUserAchievementStatus( (CSteamID)params->steamID, (const char *)params->pchAchievementName );
}

#ifdef __cplusplus
}
#endif
