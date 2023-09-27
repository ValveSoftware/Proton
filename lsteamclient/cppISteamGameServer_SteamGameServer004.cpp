#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_100/steam_api.h"
#include "steamworks_sdk_100/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_100
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer004.h"
void cppISteamGameServer_SteamGameServer004_LogOn( struct cppISteamGameServer_SteamGameServer004_LogOn_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOn(  );
}

void cppISteamGameServer_SteamGameServer004_LogOff( struct cppISteamGameServer_SteamGameServer004_LogOff_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOff(  );
}

void cppISteamGameServer_SteamGameServer004_BLoggedOn( struct cppISteamGameServer_SteamGameServer004_BLoggedOn_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer004_BSecure( struct cppISteamGameServer_SteamGameServer004_BSecure_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSecure(  );
}

void cppISteamGameServer_SteamGameServer004_GetSteamID( struct cppISteamGameServer_SteamGameServer004_GetSteamID_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SendUserConnectAndAuthenticate( (CSteamID)params->steamIDUser, (uint32)params->unIPClient, (void *)params->pvAuthBlob, (uint32)params->cubAuthBlobSize );
}

void cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer004_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer004_SendUserDisconnect_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SendUserDisconnect( (CSteamID)params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer004_BUpdateUserData( struct cppISteamGameServer_SteamGameServer004_BUpdateUserData_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BUpdateUserData( (CSteamID)params->steamIDUser, (const char *)params->pchPlayerName, (uint32)params->uScore );
}

void cppISteamGameServer_SteamGameServer004_BSetServerType( struct cppISteamGameServer_SteamGameServer004_BSetServerType_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSetServerType( (int32)params->nGameAppId, (uint32)params->unServerFlags, (uint32)params->unGameIP, (uint16)params->unGamePort, (uint16)params->unSpectatorPort, (uint16)params->usQueryPort, (const char *)params->pchGameDir, (const char *)params->pchVersion, (bool)params->bLANMode );
}

void cppISteamGameServer_SteamGameServer004_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer004_UpdateServerStatus_params *params )
{
    ((ISteamGameServer*)params->linux_side)->UpdateServerStatus( (int)params->cPlayers, (int)params->cPlayersMax, (int)params->cBotPlayers, (const char *)params->pchServerName, (const char *)params->pSpectatorServerName, (const char *)params->pchMapName );
}

void cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort_params *params )
{
    ((ISteamGameServer*)params->linux_side)->UpdateSpectatorPort( (uint16)params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer004_SetGameType( struct cppISteamGameServer_SteamGameServer004_SetGameType_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameType( (const char *)params->pchGameType );
}

void cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BGetUserAchievementStatus( (CSteamID)params->steamID, (const char *)params->pchAchievementName );
}

#ifdef __cplusplus
}
#endif
