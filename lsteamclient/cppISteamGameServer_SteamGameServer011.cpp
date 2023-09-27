#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_128/steam_api.h"
#include "steamworks_sdk_128/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_128
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer011.h"
void cppISteamGameServer_SteamGameServer011_InitGameServer( struct cppISteamGameServer_SteamGameServer011_InitGameServer_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->InitGameServer( (uint32)params->unIP, (uint16)params->usGamePort, (uint16)params->usQueryPort, (uint32)params->unFlags, (AppId_t)params->nGameAppId, (const char *)params->pchVersionString );
}

void cppISteamGameServer_SteamGameServer011_SetProduct( struct cppISteamGameServer_SteamGameServer011_SetProduct_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetProduct( (const char *)params->pszProduct );
}

void cppISteamGameServer_SteamGameServer011_SetGameDescription( struct cppISteamGameServer_SteamGameServer011_SetGameDescription_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameDescription( (const char *)params->pszGameDescription );
}

void cppISteamGameServer_SteamGameServer011_SetModDir( struct cppISteamGameServer_SteamGameServer011_SetModDir_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetModDir( (const char *)params->pszModDir );
}

void cppISteamGameServer_SteamGameServer011_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer011_SetDedicatedServer_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetDedicatedServer( (bool)params->bDedicated );
}

void cppISteamGameServer_SteamGameServer011_LogOn( struct cppISteamGameServer_SteamGameServer011_LogOn_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOn( (const char *)params->pszAccountName, (const char *)params->pszPassword );
}

void cppISteamGameServer_SteamGameServer011_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer011_LogOnAnonymous_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOnAnonymous(  );
}

void cppISteamGameServer_SteamGameServer011_LogOff( struct cppISteamGameServer_SteamGameServer011_LogOff_params *params )
{
    ((ISteamGameServer*)params->linux_side)->LogOff(  );
}

void cppISteamGameServer_SteamGameServer011_BLoggedOn( struct cppISteamGameServer_SteamGameServer011_BLoggedOn_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer011_BSecure( struct cppISteamGameServer_SteamGameServer011_BSecure_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BSecure(  );
}

void cppISteamGameServer_SteamGameServer011_GetSteamID( struct cppISteamGameServer_SteamGameServer011_GetSteamID_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer011_WasRestartRequested( struct cppISteamGameServer_SteamGameServer011_WasRestartRequested_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->WasRestartRequested(  );
}

void cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMaxPlayerCount( (int)params->cPlayersMax );
}

void cppISteamGameServer_SteamGameServer011_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer011_SetBotPlayerCount_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetBotPlayerCount( (int)params->cBotplayers );
}

void cppISteamGameServer_SteamGameServer011_SetServerName( struct cppISteamGameServer_SteamGameServer011_SetServerName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetServerName( (const char *)params->pszServerName );
}

void cppISteamGameServer_SteamGameServer011_SetMapName( struct cppISteamGameServer_SteamGameServer011_SetMapName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetMapName( (const char *)params->pszMapName );
}

void cppISteamGameServer_SteamGameServer011_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer011_SetPasswordProtected_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetPasswordProtected( (bool)params->bPasswordProtected );
}

void cppISteamGameServer_SteamGameServer011_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer011_SetSpectatorPort_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetSpectatorPort( (uint16)params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer011_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer011_SetSpectatorServerName_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetSpectatorServerName( (const char *)params->pszSpectatorServerName );
}

void cppISteamGameServer_SteamGameServer011_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer011_ClearAllKeyValues_params *params )
{
    ((ISteamGameServer*)params->linux_side)->ClearAllKeyValues(  );
}

void cppISteamGameServer_SteamGameServer011_SetKeyValue( struct cppISteamGameServer_SteamGameServer011_SetKeyValue_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetKeyValue( (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamGameServer_SteamGameServer011_SetGameTags( struct cppISteamGameServer_SteamGameServer011_SetGameTags_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameTags( (const char *)params->pchGameTags );
}

void cppISteamGameServer_SteamGameServer011_SetGameData( struct cppISteamGameServer_SteamGameServer011_SetGameData_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetGameData( (const char *)params->pchGameData );
}

void cppISteamGameServer_SteamGameServer011_SetRegion( struct cppISteamGameServer_SteamGameServer011_SetRegion_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetRegion( (const char *)params->pszRegion );
}

void cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->SendUserConnectAndAuthenticate( (uint32)params->unIPClient, (const void *)params->pvAuthBlob, (uint32)params->cubAuthBlobSize, (CSteamID *)params->pSteamIDUser );
}

void cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection_params *params )
{
    *params->_ret = ((ISteamGameServer*)params->linux_side)->CreateUnauthenticatedUserConnection(  );
}

void cppISteamGameServer_SteamGameServer011_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer011_SendUserDisconnect_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SendUserDisconnect( (CSteamID)params->steamIDUser );
}

void cppISteamGameServer_SteamGameServer011_BUpdateUserData( struct cppISteamGameServer_SteamGameServer011_BUpdateUserData_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BUpdateUserData( (CSteamID)params->steamIDUser, (const char *)params->pchPlayerName, (uint32)params->uScore );
}

void cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamGameServer_SteamGameServer011_BeginAuthSession( struct cppISteamGameServer_SteamGameServer011_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer011_EndAuthSession( struct cppISteamGameServer_SteamGameServer011_EndAuthSession_params *params )
{
    ((ISteamGameServer*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamGameServer_SteamGameServer011_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer011_CancelAuthTicket_params *params )
{
    ((ISteamGameServer*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

void cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

void cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->RequestUserGroupStatus( (CSteamID)params->steamIDUser, (CSteamID)params->steamIDGroup );
}

void cppISteamGameServer_SteamGameServer011_GetGameplayStats( struct cppISteamGameServer_SteamGameServer011_GetGameplayStats_params *params )
{
    ((ISteamGameServer*)params->linux_side)->GetGameplayStats(  );
}

void cppISteamGameServer_SteamGameServer011_GetServerReputation( struct cppISteamGameServer_SteamGameServer011_GetServerReputation_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetServerReputation(  );
}

void cppISteamGameServer_SteamGameServer011_GetPublicIP( struct cppISteamGameServer_SteamGameServer011_GetPublicIP_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetPublicIP(  );
}

void cppISteamGameServer_SteamGameServer011_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer011_HandleIncomingPacket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->HandleIncomingPacket( (const void *)params->pData, (int)params->cbData, (uint32)params->srcIP, (uint16)params->srcPort );
}

void cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->GetNextOutgoingPacket( (void *)params->pOut, (int)params->cbMaxOut, (uint32 *)params->pNetAdr, (uint16 *)params->pPort );
}

void cppISteamGameServer_SteamGameServer011_EnableHeartbeats( struct cppISteamGameServer_SteamGameServer011_EnableHeartbeats_params *params )
{
    ((ISteamGameServer*)params->linux_side)->EnableHeartbeats( (bool)params->bActive );
}

void cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval( struct cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval_params *params )
{
    ((ISteamGameServer*)params->linux_side)->SetHeartbeatInterval( (int)params->iHeartbeatInterval );
}

void cppISteamGameServer_SteamGameServer011_ForceHeartbeat( struct cppISteamGameServer_SteamGameServer011_ForceHeartbeat_params *params )
{
    ((ISteamGameServer*)params->linux_side)->ForceHeartbeat(  );
}

void cppISteamGameServer_SteamGameServer011_AssociateWithClan( struct cppISteamGameServer_SteamGameServer011_AssociateWithClan_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->AssociateWithClan( (CSteamID)params->steamIDClan );
}

void cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility_params *params )
{
    params->_ret = ((ISteamGameServer*)params->linux_side)->ComputeNewPlayerCompatibility( (CSteamID)params->steamIDNewPlayer );
}

#ifdef __cplusplus
}
#endif
