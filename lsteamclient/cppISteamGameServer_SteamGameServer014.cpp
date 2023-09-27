#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_155/steam_api.h"
#include "steamworks_sdk_155/steamnetworkingtypes.h"
#include "steamworks_sdk_155/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_155
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer014.h"
void cppISteamGameServer_SteamGameServer014_InitGameServer( struct cppISteamGameServer_SteamGameServer014_InitGameServer_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->InitGameServer( (uint32)params->unIP, (uint16)params->usGamePort, (uint16)params->usQueryPort, (uint32)params->unFlags, (AppId_t)params->nGameAppId, (const char *)params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer014_SetProduct( struct cppISteamGameServer_SteamGameServer014_SetProduct_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetProduct( (const char *)params->pszProduct );
}

void cppISteamGameServer_SteamGameServer014_SetGameDescription( struct cppISteamGameServer_SteamGameServer014_SetGameDescription_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameDescription( (const char *)params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer014_SetModDir( struct cppISteamGameServer_SteamGameServer014_SetModDir_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetModDir( (const char *)params->pszModDir );
}

void cppISteamGameServer_SteamGameServer014_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer014_SetDedicatedServer_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetDedicatedServer( (bool)params->bDedicated );
}

void cppISteamGameServer_SteamGameServer014_LogOn( struct cppISteamGameServer_SteamGameServer014_LogOn_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOn( (const char *)params->pszToken );
}

void cppISteamGameServer_SteamGameServer014_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer014_LogOnAnonymous_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer014_LogOff( struct cppISteamGameServer_SteamGameServer014_LogOff_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOff(  );
}

void cppISteamGameServer_SteamGameServer014_BLoggedOn( struct cppISteamGameServer_SteamGameServer014_BLoggedOn_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer014_BSecure( struct cppISteamGameServer_SteamGameServer014_BSecure_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSecure(  );
}

void cppISteamGameServer_SteamGameServer014_GetSteamID( struct cppISteamGameServer_SteamGameServer014_GetSteamID_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer014_WasRestartRequested( struct cppISteamGameServer_SteamGameServer014_WasRestartRequested_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer014_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer014_SetMaxPlayerCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMaxPlayerCount( (int)params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer014_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer014_SetBotPlayerCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetBotPlayerCount( (int)params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer014_SetServerName( struct cppISteamGameServer_SteamGameServer014_SetServerName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetServerName( (const char *)params->pszServerName );
}

void cppISteamGameServer_SteamGameServer014_SetMapName( struct cppISteamGameServer_SteamGameServer014_SetMapName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMapName( (const char *)params->pszMapName );
}

void cppISteamGameServer_SteamGameServer014_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer014_SetPasswordProtected_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetPasswordProtected( (bool)params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer014_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer014_SetSpectatorPort_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetSpectatorPort( (uint16)params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer014_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer014_SetSpectatorServerName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetSpectatorServerName( (const char *)params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer014_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer014_ClearAllKeyValues_params *params )
{
    ((ISteamGameServer*)params->linux_side)->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer014_SetKeyValue( struct cppISteamGameServer_SteamGameServer014_SetKeyValue_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetKeyValue( (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamGameServer_SteamGameServer014_SetGameTags( struct cppISteamGameServer_SteamGameServer014_SetGameTags_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameTags( (const char *)params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer014_SetGameData( struct cppISteamGameServer_SteamGameServer014_SetGameData_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameData( (const char *)params->pchGameData );
}

void cppISteamGameServer_SteamGameServer014_SetRegion( struct cppISteamGameServer_SteamGameServer014_SetRegion_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetRegion( (const char *)params->pszRegion );
}

void cppISteamGameServer_SteamGameServer014_SetAdvertiseServerActive( struct cppISteamGameServer_SteamGameServer014_SetAdvertiseServerActive_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetAdvertiseServerActive( (bool)params->bActive );
}

void cppISteamGameServer_SteamGameServer014_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer014_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer014_BeginAuthSession( struct cppISteamGameServer_SteamGameServer014_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer014_EndAuthSession( struct cppISteamGameServer_SteamGameServer014_EndAuthSession_params *params )
{
    ((ISteamGameServer*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer014_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer014_CancelAuthTicket_params *params )
{
    ((ISteamGameServer*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer014_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer014_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

void cppISteamGameServer_SteamGameServer014_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer014_RequestUserGroupStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->RequestUserGroupStatus( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer014_GetGameplayStats( struct cppISteamGameServer_SteamGameServer014_GetGameplayStats_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer014_GetServerReputation( struct cppISteamGameServer_SteamGameServer014_GetServerReputation_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer014_GetPublicIP( struct cppISteamGameServer_SteamGameServer014_GetPublicIP_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer014_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer014_HandleIncomingPacket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->HandleIncomingPacket( (const void *)params->pData, (int)params->cbData, (uint32)params->srcIP, (uint16)params->srcPort );
}

void cppISteamGameServer_SteamGameServer014_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer014_GetNextOutgoingPacket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetNextOutgoingPacket( (void *)params->pOut, (int)params->cbMaxOut, (uint32 *)params->pNetAdr, (uint16 *)params->pPort );
}

void cppISteamGameServer_SteamGameServer014_AssociateWithClan( struct cppISteamGameServer_SteamGameServer014_AssociateWithClan_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->AssociateWithClan( (CSteamID)params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer014_ComputeNewPlayerCompatibility_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->ComputeNewPlayerCompatibility( (CSteamID)params->steamIDNewPlayer );
}

void cppISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SendUserConnectAndAuthenticate_DEPRECATED_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->SendUserConnectAndAuthenticate_DEPRECATED( (uint32)params->unIPClient, (const void *)params->pvAuthBlob, (uint32)params->cubAuthBlobSize, (CSteamID *)params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer014_CreateUnauthenticatedUserConnection_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SendUserDisconnect_DEPRECATED_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SendUserDisconnect_DEPRECATED( (CSteamID)params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer014_BUpdateUserData( struct cppISteamGameServer_SteamGameServer014_BUpdateUserData_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BUpdateUserData( (CSteamID)params->steamIDUser, (const char *)params->pchPlayerName, (uint32)params->uScore );
}

void cppISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_SetMasterServerHeartbeatInterval_DEPRECATED_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMasterServerHeartbeatInterval_DEPRECATED( (int)params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED( struct cppISteamGameServer_SteamGameServer014_ForceMasterServerHeartbeat_DEPRECATED_params *params )
{
    ((ISteamGameServer*)params->linux_side)->ForceMasterServerHeartbeat_DEPRECATED(  );
}

#ifdef __cplusplus
}
#endif
