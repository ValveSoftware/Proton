#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer015.h"
void cppISteamGameServer_SteamGameServer015_InitGameServer( struct cppISteamGameServer_SteamGameServer015_InitGameServer_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->InitGameServer( (uint32)params->unIP, (uint16)params->usGamePort, (uint16)params->usQueryPort, (uint32)params->unFlags, (AppId_t)params->nGameAppId, (const char *)params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer015_SetProduct( struct cppISteamGameServer_SteamGameServer015_SetProduct_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetProduct( (const char *)params->pszProduct );
}

void cppISteamGameServer_SteamGameServer015_SetGameDescription( struct cppISteamGameServer_SteamGameServer015_SetGameDescription_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameDescription( (const char *)params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer015_SetModDir( struct cppISteamGameServer_SteamGameServer015_SetModDir_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetModDir( (const char *)params->pszModDir );
}

void cppISteamGameServer_SteamGameServer015_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer015_SetDedicatedServer_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetDedicatedServer( (bool)params->bDedicated );
}

void cppISteamGameServer_SteamGameServer015_LogOn( struct cppISteamGameServer_SteamGameServer015_LogOn_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOn( (const char *)params->pszToken );
}

void cppISteamGameServer_SteamGameServer015_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer015_LogOnAnonymous_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer015_LogOff( struct cppISteamGameServer_SteamGameServer015_LogOff_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOff(  );
}

void cppISteamGameServer_SteamGameServer015_BLoggedOn( struct cppISteamGameServer_SteamGameServer015_BLoggedOn_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer015_BSecure( struct cppISteamGameServer_SteamGameServer015_BSecure_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSecure(  );
}

void cppISteamGameServer_SteamGameServer015_GetSteamID( struct cppISteamGameServer_SteamGameServer015_GetSteamID_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer015_WasRestartRequested( struct cppISteamGameServer_SteamGameServer015_WasRestartRequested_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMaxPlayerCount( (int)params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer015_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer015_SetBotPlayerCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetBotPlayerCount( (int)params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer015_SetServerName( struct cppISteamGameServer_SteamGameServer015_SetServerName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetServerName( (const char *)params->pszServerName );
}

void cppISteamGameServer_SteamGameServer015_SetMapName( struct cppISteamGameServer_SteamGameServer015_SetMapName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMapName( (const char *)params->pszMapName );
}

void cppISteamGameServer_SteamGameServer015_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer015_SetPasswordProtected_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetPasswordProtected( (bool)params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer015_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer015_SetSpectatorPort_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetSpectatorPort( (uint16)params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer015_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer015_SetSpectatorServerName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetSpectatorServerName( (const char *)params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer015_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer015_ClearAllKeyValues_params *params )
{
    ((ISteamGameServer*)params->linux_side)->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer015_SetKeyValue( struct cppISteamGameServer_SteamGameServer015_SetKeyValue_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetKeyValue( (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamGameServer_SteamGameServer015_SetGameTags( struct cppISteamGameServer_SteamGameServer015_SetGameTags_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameTags( (const char *)params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer015_SetGameData( struct cppISteamGameServer_SteamGameServer015_SetGameData_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameData( (const char *)params->pchGameData );
}

void cppISteamGameServer_SteamGameServer015_SetRegion( struct cppISteamGameServer_SteamGameServer015_SetRegion_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetRegion( (const char *)params->pszRegion );
}

void cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive( struct cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetAdvertiseServerActive( (bool)params->bActive );
}

void cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket, (const SteamNetworkingIdentity *)params->pSnid );
}

void cppISteamGameServer_SteamGameServer015_BeginAuthSession( struct cppISteamGameServer_SteamGameServer015_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer015_EndAuthSession( struct cppISteamGameServer_SteamGameServer015_EndAuthSession_params *params )
{
    ((ISteamGameServer*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer015_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer015_CancelAuthTicket_params *params )
{
    ((ISteamGameServer*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

void cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->RequestUserGroupStatus( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer015_GetGameplayStats( struct cppISteamGameServer_SteamGameServer015_GetGameplayStats_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer015_GetServerReputation( struct cppISteamGameServer_SteamGameServer015_GetServerReputation_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer015_GetPublicIP( struct cppISteamGameServer_SteamGameServer015_GetPublicIP_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer015_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer015_HandleIncomingPacket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->HandleIncomingPacket( (const void *)params->pData, (int)params->cbData, (uint32)params->srcIP, (uint16)params->srcPort );
}

void cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetNextOutgoingPacket( (void *)params->pOut, (int)params->cbMaxOut, (uint32 *)params->pNetAdr, (uint16 *)params->pPort );
}

void cppISteamGameServer_SteamGameServer015_AssociateWithClan( struct cppISteamGameServer_SteamGameServer015_AssociateWithClan_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->AssociateWithClan( (CSteamID)params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->ComputeNewPlayerCompatibility( (CSteamID)params->steamIDNewPlayer );
}

void cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->SendUserConnectAndAuthenticate_DEPRECATED( (uint32)params->unIPClient, (const void *)params->pvAuthBlob, (uint32)params->cubAuthBlobSize, (CSteamID *)params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SendUserDisconnect_DEPRECATED( (CSteamID)params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer015_BUpdateUserData( struct cppISteamGameServer_SteamGameServer015_BUpdateUserData_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BUpdateUserData( (CSteamID)params->steamIDUser, (const char *)params->pchPlayerName, (uint32)params->uScore );
}

void cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMasterServerHeartbeatInterval_DEPRECATED( (int)params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED_params *params )
{
    ((ISteamGameServer*)params->linux_side)->ForceMasterServerHeartbeat_DEPRECATED(  );
}

#ifdef __cplusplus
}
#endif
