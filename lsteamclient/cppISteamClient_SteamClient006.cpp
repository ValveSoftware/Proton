#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099y
#include "struct_converters.h"
#include "cppISteamClient_SteamClient006.h"
void cppISteamClient_SteamClient006_CreateSteamPipe( struct cppISteamClient_SteamClient006_CreateSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient006_BReleaseSteamPipe( struct cppISteamClient_SteamClient006_BReleaseSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BReleaseSteamPipe( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient006_CreateGlobalUser( struct cppISteamClient_SteamClient006_CreateGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateGlobalUser( (HSteamPipe *)params->phSteamPipe );
}

void cppISteamClient_SteamClient006_ConnectToGlobalUser( struct cppISteamClient_SteamClient006_ConnectToGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->ConnectToGlobalUser( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient006_CreateLocalUser( struct cppISteamClient_SteamClient006_CreateLocalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateLocalUser( (HSteamPipe *)params->phSteamPipe );
}

void cppISteamClient_SteamClient006_ReleaseUser( struct cppISteamClient_SteamClient006_ReleaseUser_params *params )
{
    ((ISteamClient*)params->linux_side)->ReleaseUser( (HSteamPipe)params->hSteamPipe, (HSteamUser)params->hUser );
}

void cppISteamClient_SteamClient006_GetISteamUser( struct cppISteamClient_SteamClient006_GetISteamUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUser( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_GetIVAC( struct cppISteamClient_SteamClient006_GetIVAC_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIVAC( (HSteamUser)params->hSteamUser );
}

void cppISteamClient_SteamClient006_GetISteamGameServer( struct cppISteamClient_SteamClient006_GetISteamGameServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_SetLocalIPBinding( struct cppISteamClient_SteamClient006_SetLocalIPBinding_params *params )
{
    ((ISteamClient*)params->linux_side)->SetLocalIPBinding( (uint32)params->unIP, (uint16)params->usPort );
}

void cppISteamClient_SteamClient006_GetUniverseName( struct cppISteamClient_SteamClient006_GetUniverseName_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetUniverseName( (EUniverse)params->eUniverse );
}

void cppISteamClient_SteamClient006_GetISteamFriends( struct cppISteamClient_SteamClient006_GetISteamFriends_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamFriends( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamUtils( struct cppISteamClient_SteamClient006_GetISteamUtils_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUtils( (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamBilling( struct cppISteamClient_SteamClient006_GetISteamBilling_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamBilling( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamMatchmaking( struct cppISteamClient_SteamClient006_GetISteamMatchmaking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmaking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamApps( struct cppISteamClient_SteamClient006_GetISteamApps_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamApps( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamContentServer( struct cppISteamClient_SteamClient006_GetISteamContentServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamContentServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient006_GetISteamMasterServerUpdater_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMasterServerUpdater( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient006_GetISteamMatchmakingServers_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmakingServers( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient006_RunFrame( struct cppISteamClient_SteamClient006_RunFrame_params *params )
{
    ((ISteamClient*)params->linux_side)->RunFrame(  );
}

void cppISteamClient_SteamClient006_GetIPCCallCount( struct cppISteamClient_SteamClient006_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIPCCallCount(  );
}

#ifdef __cplusplus
}
#endif
