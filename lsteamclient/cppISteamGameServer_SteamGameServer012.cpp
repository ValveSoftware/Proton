#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_146/steam_api.h"
#include "steamworks_sdk_146/steamnetworkingtypes.h"
#include "steamworks_sdk_146/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_146
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer012.h"
void cppISteamGameServer_SteamGameServer012_InitGameServer( struct cppISteamGameServer_SteamGameServer012_InitGameServer_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->InitGameServer( (uint32)params->unIP, (uint16)params->usGamePort, (uint16)params->usQueryPort, (uint32)params->unFlags, (AppId_t)params->nGameAppId, (const char *)params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer012_SetProduct( struct cppISteamGameServer_SteamGameServer012_SetProduct_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetProduct( (const char *)params->pszProduct );
}

void cppISteamGameServer_SteamGameServer012_SetGameDescription( struct cppISteamGameServer_SteamGameServer012_SetGameDescription_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameDescription( (const char *)params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer012_SetModDir( struct cppISteamGameServer_SteamGameServer012_SetModDir_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetModDir( (const char *)params->pszModDir );
}

void cppISteamGameServer_SteamGameServer012_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer012_SetDedicatedServer_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetDedicatedServer( (bool)params->bDedicated );
}

void cppISteamGameServer_SteamGameServer012_LogOn( struct cppISteamGameServer_SteamGameServer012_LogOn_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOn( (const char *)params->pszToken );
}

void cppISteamGameServer_SteamGameServer012_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer012_LogOnAnonymous_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer012_LogOff( struct cppISteamGameServer_SteamGameServer012_LogOff_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOff(  );
}

void cppISteamGameServer_SteamGameServer012_BLoggedOn( struct cppISteamGameServer_SteamGameServer012_BLoggedOn_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer012_BSecure( struct cppISteamGameServer_SteamGameServer012_BSecure_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSecure(  );
}

void cppISteamGameServer_SteamGameServer012_GetSteamID( struct cppISteamGameServer_SteamGameServer012_GetSteamID_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer012_WasRestartRequested( struct cppISteamGameServer_SteamGameServer012_WasRestartRequested_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMaxPlayerCount( (int)params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer012_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer012_SetBotPlayerCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetBotPlayerCount( (int)params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer012_SetServerName( struct cppISteamGameServer_SteamGameServer012_SetServerName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetServerName( (const char *)params->pszServerName );
}

void cppISteamGameServer_SteamGameServer012_SetMapName( struct cppISteamGameServer_SteamGameServer012_SetMapName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMapName( (const char *)params->pszMapName );
}

void cppISteamGameServer_SteamGameServer012_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer012_SetPasswordProtected_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetPasswordProtected( (bool)params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer012_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer012_SetSpectatorPort_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetSpectatorPort( (uint16)params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer012_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer012_SetSpectatorServerName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetSpectatorServerName( (const char *)params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer012_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer012_ClearAllKeyValues_params *params )
{
    ((ISteamGameServer*)params->linux_side)->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer012_SetKeyValue( struct cppISteamGameServer_SteamGameServer012_SetKeyValue_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetKeyValue( (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamGameServer_SteamGameServer012_SetGameTags( struct cppISteamGameServer_SteamGameServer012_SetGameTags_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameTags( (const char *)params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer012_SetGameData( struct cppISteamGameServer_SteamGameServer012_SetGameData_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameData( (const char *)params->pchGameData );
}

void cppISteamGameServer_SteamGameServer012_SetRegion( struct cppISteamGameServer_SteamGameServer012_SetRegion_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetRegion( (const char *)params->pszRegion );
}

void cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->SendUserConnectAndAuthenticate( (uint32)params->unIPClient, (const void *)params->pvAuthBlob, (uint32)params->cubAuthBlobSize, (CSteamID *)params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer012_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer012_SendUserDisconnect_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SendUserDisconnect( (CSteamID)params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer012_BUpdateUserData( struct cppISteamGameServer_SteamGameServer012_BUpdateUserData_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BUpdateUserData( (CSteamID)params->steamIDUser, (const char *)params->pchPlayerName, (uint32)params->uScore );
}

void cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer012_BeginAuthSession( struct cppISteamGameServer_SteamGameServer012_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer012_EndAuthSession( struct cppISteamGameServer_SteamGameServer012_EndAuthSession_params *params )
{
    ((ISteamGameServer*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer012_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer012_CancelAuthTicket_params *params )
{
    ((ISteamGameServer*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

void cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->RequestUserGroupStatus( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer012_GetGameplayStats( struct cppISteamGameServer_SteamGameServer012_GetGameplayStats_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer012_GetServerReputation( struct cppISteamGameServer_SteamGameServer012_GetServerReputation_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer012_GetPublicIP( struct cppISteamGameServer_SteamGameServer012_GetPublicIP_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer012_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer012_HandleIncomingPacket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->HandleIncomingPacket( (const void *)params->pData, (int)params->cbData, (uint32)params->srcIP, (uint16)params->srcPort );
}

void cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetNextOutgoingPacket( (void *)params->pOut, (int)params->cbMaxOut, (uint32 *)params->pNetAdr, (uint16 *)params->pPort );
}

void cppISteamGameServer_SteamGameServer012_EnableHeartbeats( struct cppISteamGameServer_SteamGameServer012_EnableHeartbeats_params *params )
{
    ((ISteamGameServer*)params->linux_side)->EnableHeartbeats( (bool)params->bActive );
}

void cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval( struct cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetHeartbeatInterval( (int)params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer012_ForceHeartbeat( struct cppISteamGameServer_SteamGameServer012_ForceHeartbeat_params *params )
{
    ((ISteamGameServer*)params->linux_side)->ForceHeartbeat(  );
}

void cppISteamGameServer_SteamGameServer012_AssociateWithClan( struct cppISteamGameServer_SteamGameServer012_AssociateWithClan_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->AssociateWithClan( (CSteamID)params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->ComputeNewPlayerCompatibility( (CSteamID)params->steamIDNewPlayer );
}

#ifdef __cplusplus
}
#endif
