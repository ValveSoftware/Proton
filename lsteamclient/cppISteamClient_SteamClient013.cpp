#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_128x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_128x
#include "struct_converters.h"
#include "cppISteamClient_SteamClient013.h"
void cppISteamClient_SteamClient013_CreateSteamPipe( struct cppISteamClient_SteamClient013_CreateSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient013_BReleaseSteamPipe( struct cppISteamClient_SteamClient013_BReleaseSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BReleaseSteamPipe( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient013_ConnectToGlobalUser( struct cppISteamClient_SteamClient013_ConnectToGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->ConnectToGlobalUser( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient013_CreateLocalUser( struct cppISteamClient_SteamClient013_CreateLocalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateLocalUser( (HSteamPipe *)params->phSteamPipe, (EAccountType)params->eAccountType );
}

void cppISteamClient_SteamClient013_ReleaseUser( struct cppISteamClient_SteamClient013_ReleaseUser_params *params )
{
    ((ISteamClient*)params->linux_side)->ReleaseUser( (HSteamPipe)params->hSteamPipe, (HSteamUser)params->hUser );
}

void cppISteamClient_SteamClient013_GetISteamUser( struct cppISteamClient_SteamClient013_GetISteamUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUser( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamGameServer( struct cppISteamClient_SteamClient013_GetISteamGameServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_SetLocalIPBinding( struct cppISteamClient_SteamClient013_SetLocalIPBinding_params *params )
{
    ((ISteamClient*)params->linux_side)->SetLocalIPBinding( (uint32)params->unIP, (uint16)params->usPort );
}

void cppISteamClient_SteamClient013_GetISteamFriends( struct cppISteamClient_SteamClient013_GetISteamFriends_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamFriends( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamUtils( struct cppISteamClient_SteamClient013_GetISteamUtils_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUtils( (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamMatchmaking( struct cppISteamClient_SteamClient013_GetISteamMatchmaking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmaking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient013_GetISteamMatchmakingServers_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmakingServers( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamGenericInterface( struct cppISteamClient_SteamClient013_GetISteamGenericInterface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGenericInterface( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamUserStats( struct cppISteamClient_SteamClient013_GetISteamUserStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUserStats( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamGameServerStats( struct cppISteamClient_SteamClient013_GetISteamGameServerStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServerStats( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamApps( struct cppISteamClient_SteamClient013_GetISteamApps_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamApps( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamNetworking( struct cppISteamClient_SteamClient013_GetISteamNetworking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamNetworking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamRemoteStorage( struct cppISteamClient_SteamClient013_GetISteamRemoteStorage_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemoteStorage( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamScreenshots( struct cppISteamClient_SteamClient013_GetISteamScreenshots_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamScreenshots( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_RunFrame( struct cppISteamClient_SteamClient013_RunFrame_params *params )
{
    ((ISteamClient*)params->linux_side)->RunFrame(  );
}

void cppISteamClient_SteamClient013_GetIPCCallCount( struct cppISteamClient_SteamClient013_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient013_SetWarningMessageHook( struct cppISteamClient_SteamClient013_SetWarningMessageHook_params *params )
{
    params->pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamClient*)params->linux_side)->SetWarningMessageHook( (SteamAPIWarningMessageHook_t)params->pFunction );
}

void cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient013_GetISteamHTTP( struct cppISteamClient_SteamClient013_GetISteamHTTP_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTTP( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient013_GetISteamUnifiedMessages_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUnifiedMessages( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamController( struct cppISteamClient_SteamClient013_GetISteamController_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamController( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamUGC( struct cppISteamClient_SteamClient013_GetISteamUGC_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUGC( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamInventory( struct cppISteamClient_SteamClient013_GetISteamInventory_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamInventory( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamVideo( struct cppISteamClient_SteamClient013_GetISteamVideo_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamVideo( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamAppList( struct cppISteamClient_SteamClient013_GetISteamAppList_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamAppList( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

#ifdef __cplusplus
}
#endif
