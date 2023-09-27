#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099w/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099w
#include "struct_converters.h"
#include "cppISteamUser_SteamUser006.h"
void cppISteamUser_SteamUser006_GetHSteamUser( struct cppISteamUser_SteamUser006_GetHSteamUser_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetHSteamUser(  );
}

void cppISteamUser_SteamUser006_LogOn( struct cppISteamUser_SteamUser006_LogOn_params *params )
{
    ((ISteamUser*)params->linux_side)->LogOn( (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser006_LogOff( struct cppISteamUser_SteamUser006_LogOff_params *params )
{
    ((ISteamUser*)params->linux_side)->LogOff(  );
}

void cppISteamUser_SteamUser006_BLoggedOn( struct cppISteamUser_SteamUser006_BLoggedOn_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BLoggedOn(  );
}

void cppISteamUser_SteamUser006_GetSteamID( struct cppISteamUser_SteamUser006_GetSteamID_params *params )
{
    *params->_ret = ((ISteamUser*)params->linux_side)->GetSteamID(  );
}

void cppISteamUser_SteamUser006_SetRegistryString( struct cppISteamUser_SteamUser006_SetRegistryString_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetRegistryString( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamUser_SteamUser006_GetRegistryString( struct cppISteamUser_SteamUser006_GetRegistryString_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetRegistryString( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (char *)params->pchValue, (int)params->cbValue );
}

void cppISteamUser_SteamUser006_SetRegistryInt( struct cppISteamUser_SteamUser006_SetRegistryInt_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->SetRegistryInt( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (int)params->iValue );
}

void cppISteamUser_SteamUser006_GetRegistryInt( struct cppISteamUser_SteamUser006_GetRegistryInt_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetRegistryInt( (EConfigSubTree)params->eRegistrySubTree, (const char *)params->pchKey, (int *)params->piValue );
}

void cppISteamUser_SteamUser006_InitiateGameConnection( struct cppISteamUser_SteamUser006_InitiateGameConnection_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->InitiateGameConnection( (void *)params->pBlob, (int)params->cbMaxBlob, (CSteamID)params->steamID, (CGameID)params->gameID, (uint32)params->unIPServer, (uint16)params->usPortServer, (bool)params->bSecure );
}

void cppISteamUser_SteamUser006_TerminateGameConnection( struct cppISteamUser_SteamUser006_TerminateGameConnection_params *params )
{
    ((ISteamUser*)params->linux_side)->TerminateGameConnection( (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser006_TrackAppUsageEvent( struct cppISteamUser_SteamUser006_TrackAppUsageEvent_params *params )
{
    ((ISteamUser*)params->linux_side)->TrackAppUsageEvent( (CGameID)params->gameID, (int)params->eAppUsageEvent, (const char *)params->pchExtraInfo );
}

#ifdef __cplusplus
}
#endif
