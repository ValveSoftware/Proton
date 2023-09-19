#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_115/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_115
#include "struct_converters.h"
#include "cppISteamClient_SteamClient010.h"
void cppISteamClient_SteamClient010_CreateSteamPipe( struct cppISteamClient_SteamClient010_CreateSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient010_BReleaseSteamPipe( struct cppISteamClient_SteamClient010_BReleaseSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BReleaseSteamPipe( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient010_ConnectToGlobalUser( struct cppISteamClient_SteamClient010_ConnectToGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->ConnectToGlobalUser( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient010_CreateLocalUser( struct cppISteamClient_SteamClient010_CreateLocalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateLocalUser( (HSteamPipe *)params->phSteamPipe, (EAccountType)params->eAccountType );
}

void cppISteamClient_SteamClient010_ReleaseUser( struct cppISteamClient_SteamClient010_ReleaseUser_params *params )
{
    ((ISteamClient*)params->linux_side)->ReleaseUser( (HSteamPipe)params->hSteamPipe, (HSteamUser)params->hUser );
}

void cppISteamClient_SteamClient010_GetISteamUser( struct cppISteamClient_SteamClient010_GetISteamUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUser( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamGameServer( struct cppISteamClient_SteamClient010_GetISteamGameServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_SetLocalIPBinding( struct cppISteamClient_SteamClient010_SetLocalIPBinding_params *params )
{
    ((ISteamClient*)params->linux_side)->SetLocalIPBinding( (uint32)params->unIP, (uint16)params->usPort );
}

void cppISteamClient_SteamClient010_GetISteamFriends( struct cppISteamClient_SteamClient010_GetISteamFriends_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamFriends( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamUtils( struct cppISteamClient_SteamClient010_GetISteamUtils_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUtils( (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamMatchmaking( struct cppISteamClient_SteamClient010_GetISteamMatchmaking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmaking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient010_GetISteamMasterServerUpdater_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMasterServerUpdater( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient010_GetISteamMatchmakingServers_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmakingServers( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamGenericInterface( struct cppISteamClient_SteamClient010_GetISteamGenericInterface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGenericInterface( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamUserStats( struct cppISteamClient_SteamClient010_GetISteamUserStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUserStats( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamGameServerStats( struct cppISteamClient_SteamClient010_GetISteamGameServerStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServerStats( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamApps( struct cppISteamClient_SteamClient010_GetISteamApps_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamApps( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamNetworking( struct cppISteamClient_SteamClient010_GetISteamNetworking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamNetworking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamRemoteStorage( struct cppISteamClient_SteamClient010_GetISteamRemoteStorage_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemoteStorage( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient010_RunFrame( struct cppISteamClient_SteamClient010_RunFrame_params *params )
{
    ((ISteamClient*)params->linux_side)->RunFrame(  );
}

void cppISteamClient_SteamClient010_GetIPCCallCount( struct cppISteamClient_SteamClient010_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient010_SetWarningMessageHook( struct cppISteamClient_SteamClient010_SetWarningMessageHook_params *params )
{
    SteamAPIWarningMessageHook_t lin_pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamClient*)params->linux_side)->SetWarningMessageHook( lin_pFunction );
}

void cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient010_GetISteamHTTP( struct cppISteamClient_SteamClient010_GetISteamHTTP_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTTP( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

#ifdef __cplusplus
}
#endif
