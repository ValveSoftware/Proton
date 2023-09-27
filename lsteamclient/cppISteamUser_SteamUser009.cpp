#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_100/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_100
#include "struct_converters.h"
#include "cppISteamUser_SteamUser009.h"
void cppISteamUser_SteamUser009_GetHSteamUser( struct cppISteamUser_SteamUser009_GetHSteamUser_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetHSteamUser(  );
}

void cppISteamUser_SteamUser009_BLoggedOn( struct cppISteamUser_SteamUser009_BLoggedOn_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BLoggedOn(  );
}

void cppISteamUser_SteamUser009_GetSteamID( struct cppISteamUser_SteamUser009_GetSteamID_params *params )
{
    *params->_ret = ((ISteamUser*)params->linux_side)->GetSteamID(  );
}

void cppISteamUser_SteamUser009_InitiateGameConnection( struct cppISteamUser_SteamUser009_InitiateGameConnection_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->InitiateGameConnection( (void *)params->pAuthBlob, (int)params->cbMaxAuthBlob, (CSteamID)params->steamIDGameServer, (CGameID)params->gameID, (uint32)params->unIPServer, (uint16)params->usPortServer, (bool)params->bSecure );
}

void cppISteamUser_SteamUser009_TerminateGameConnection( struct cppISteamUser_SteamUser009_TerminateGameConnection_params *params )
{
    ((ISteamUser*)params->linux_side)->TerminateGameConnection( (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser009_TrackAppUsageEvent( struct cppISteamUser_SteamUser009_TrackAppUsageEvent_params *params )
{
    ((ISteamUser*)params->linux_side)->TrackAppUsageEvent( (CGameID)params->gameID, (int)params->eAppUsageEvent, (const char *)params->pchExtraInfo );
}

void cppISteamUser_SteamUser009_RefreshSteam2Login( struct cppISteamUser_SteamUser009_RefreshSteam2Login_params *params )
{
    ((ISteamUser*)params->linux_side)->RefreshSteam2Login(  );
}

#ifdef __cplusplus
}
#endif
