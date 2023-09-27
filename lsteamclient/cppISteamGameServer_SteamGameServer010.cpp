#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#include "steamworks_sdk_116/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer010.h"
void cppISteamGameServer_SteamGameServer010_LogOn( struct cppISteamGameServer_SteamGameServer010_LogOn_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOn(  );
}

void cppISteamGameServer_SteamGameServer010_LogOff( struct cppISteamGameServer_SteamGameServer010_LogOff_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOff(  );
}

void cppISteamGameServer_SteamGameServer010_BLoggedOn( struct cppISteamGameServer_SteamGameServer010_BLoggedOn_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer010_BSecure( struct cppISteamGameServer_SteamGameServer010_BSecure_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSecure(  );
}

void cppISteamGameServer_SteamGameServer010_GetSteamID( struct cppISteamGameServer_SteamGameServer010_GetSteamID_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->SendUserConnectAndAuthenticate( (uint32)params->unIPClient, (const void *)params->pvAuthBlob, (uint32)params->cubAuthBlobSize, (CSteamID *)params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer010_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer010_SendUserDisconnect_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SendUserDisconnect( (CSteamID)params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer010_BUpdateUserData( struct cppISteamGameServer_SteamGameServer010_BUpdateUserData_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BUpdateUserData( (CSteamID)params->steamIDUser, (const char *)params->pchPlayerName, (uint32)params->uScore );
}

void cppISteamGameServer_SteamGameServer010_BSetServerType( struct cppISteamGameServer_SteamGameServer010_BSetServerType_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSetServerType( (uint32)params->unServerFlags, (uint32)params->unGameIP, (uint16)params->unGamePort, (uint16)params->unSpectatorPort, (uint16)params->usQueryPort, (const char *)params->pchGameDir, (const char *)params->pchVersion, (bool)params->bLANMode );
}

void cppISteamGameServer_SteamGameServer010_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer010_UpdateServerStatus_params *params )
{
    ((ISteamGameServer*)params->linux_side)->UpdateServerStatus( (int)params->cPlayers, (int)params->cPlayersMax, (int)params->cBotPlayers, (const char *)params->pchServerName, (const char *)params->pSpectatorServerName, (const char *)params->pchMapName );
}

void cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort_params *params )
{
    ((ISteamGameServer*)params->linux_side)->UpdateSpectatorPort( (uint16)params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer010_SetGameTags( struct cppISteamGameServer_SteamGameServer010_SetGameTags_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameTags( (const char *)params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer010_GetGameplayStats( struct cppISteamGameServer_SteamGameServer010_GetGameplayStats_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer010_GetServerReputation( struct cppISteamGameServer_SteamGameServer010_GetServerReputation_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->RequestUserGroupStatus( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer010_GetPublicIP( struct cppISteamGameServer_SteamGameServer010_GetPublicIP_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer010_SetGameData( struct cppISteamGameServer_SteamGameServer010_SetGameData_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameData( (const char *)params->pchGameData );
}

void cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

void cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer010_BeginAuthSession( struct cppISteamGameServer_SteamGameServer010_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer010_EndAuthSession( struct cppISteamGameServer_SteamGameServer010_EndAuthSession_params *params )
{
    ((ISteamGameServer*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer010_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer010_CancelAuthTicket_params *params )
{
    ((ISteamGameServer*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

#ifdef __cplusplus
}
#endif
