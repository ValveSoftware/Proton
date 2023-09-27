#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099u/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099u
#include "struct_converters.h"
#include "cppISteamUser_SteamUser004.h"
void cppISteamUser_SteamUser004_GetHSteamUser( struct cppISteamUser_SteamUser004_GetHSteamUser_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetHSteamUser(  );
}

void cppISteamUser_SteamUser004_LogOn( struct cppISteamUser_SteamUser004_LogOn_params *params )
{
    ((ISteamUser*)params->linux_side)->LogOn( (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser004_LogOff( struct cppISteamUser_SteamUser004_LogOff_params *params )
{
    ((ISteamUser*)params->linux_side)->LogOff(  );
}

void cppISteamUser_SteamUser004_BLoggedOn( struct cppISteamUser_SteamUser004_BLoggedOn_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BLoggedOn(  );
}

void cppISteamUser_SteamUser004_GetLogonState( struct cppISteamUser_SteamUser004_GetLogonState_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetLogonState(  );
}

void cppISteamUser_SteamUser004_BConnected( struct cppISteamUser_SteamUser004_BConnected_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BConnected(  );
}

void cppISteamUser_SteamUser004_GetSteamID( struct cppISteamUser_SteamUser004_GetSteamID_params *params )
{
    *params->_ret = ((ISteamUser*)params->linux_side)->GetSteamID(  );
}

void cppISteamUser_SteamUser004_IsVACBanned( struct cppISteamUser_SteamUser004_IsVACBanned_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->IsVACBanned( (int)params->nGameID );
}

void cppISteamUser_SteamUser004_RequireShowVACBannedMessage( struct cppISteamUser_SteamUser004_RequireShowVACBannedMessage_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->RequireShowVACBannedMessage( (int)params->nGameID );
}

void cppISteamUser_SteamUser004_AcknowledgeVACBanning( struct cppISteamUser_SteamUser004_AcknowledgeVACBanning_params *params )
{
    ((ISteamUser*)params->linux_side)->AcknowledgeVACBanning( (int)params->nGameID );
}

void cppISteamUser_SteamUser004_NClientGameIDAdd( struct cppISteamUser_SteamUser004_NClientGameIDAdd_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->NClientGameIDAdd( (int)params->nGameID );
}

void cppISteamUser_SteamUser004_RemoveClientGame( struct cppISteamUser_SteamUser004_RemoveClientGame_params *params )
{
    ((ISteamUser*)params->linux_side)->RemoveClientGame( (int)params->nClientGameID );
}

void cppISteamUser_SteamUser004_SetClientGameServer( struct cppISteamUser_SteamUser004_SetClientGameServer_params *params )
{
    ((ISteamUser*)params->linux_side)->SetClientGameServer( (int)params->nClientGameID, (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser004_SetSteam2Ticket( struct cppISteamUser_SteamUser004_SetSteam2Ticket_params *params )
{
    ((ISteamUser*)params->linux_side)->SetSteam2Ticket( (uint8 *)params->pubTicket, (int)params->cubTicket );
}

void cppISteamUser_SteamUser004_AddServerNetAddress( struct cppISteamUser_SteamUser004_AddServerNetAddress_params *params )
{
    ((ISteamUser*)params->linux_side)->AddServerNetAddress( (uint32)params->unIP, (uint16)params->unPort );
}

void cppISteamUser_SteamUser004_SetEmail( struct cppISteamUser_SteamUser004_SetEmail_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetEmail( (const char *)params->pchEmail );
}

void cppISteamUser_SteamUser004_GetSteamGameConnectToken( struct cppISteamUser_SteamUser004_GetSteamGameConnectToken_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetSteamGameConnectToken( (void *)params->pBlob, (int)params->cbMaxBlob );
}

void cppISteamUser_SteamUser004_SetRegistryString( struct cppISteamUser_SteamUser004_SetRegistryString_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetRegistryString( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamUser_SteamUser004_GetRegistryString( struct cppISteamUser_SteamUser004_GetRegistryString_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetRegistryString( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (char *)params->pchValue, (int)params->cbValue );
}

void cppISteamUser_SteamUser004_SetRegistryInt( struct cppISteamUser_SteamUser004_SetRegistryInt_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetRegistryInt( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (int)params->iValue );
}

void cppISteamUser_SteamUser004_GetRegistryInt( struct cppISteamUser_SteamUser004_GetRegistryInt_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetRegistryInt( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (int *)params->piValue );
}

void cppISteamUser_SteamUser004_InitiateGameConnection( struct cppISteamUser_SteamUser004_InitiateGameConnection_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->InitiateGameConnection( (void *)params->pBlob, (int)params->cbMaxBlob, (CSteamID)params->steamID, (int)params->nGameAppID, (uint32)params->unIPServer, (uint16)params->usPortServer, (bool)params->bSecure );
}

void cppISteamUser_SteamUser004_TerminateGameConnection( struct cppISteamUser_SteamUser004_TerminateGameConnection_params *params )
{
    ((ISteamUser*)params->linux_side)->TerminateGameConnection( (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination( struct cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination_params *params )
{
    ((ISteamUser*)params->linux_side)->SetSelfAsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser004_IsPrimaryChatDestination( struct cppISteamUser_SteamUser004_IsPrimaryChatDestination_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->IsPrimaryChatDestination(  );
}

void cppISteamUser_SteamUser004_RequestLegacyCDKey( struct cppISteamUser_SteamUser004_RequestLegacyCDKey_params *params )
{
    ((ISteamUser*)params->linux_side)->RequestLegacyCDKey( (uint32)params->iAppID );
}

#ifdef __cplusplus
}
#endif
