#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_131/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_131
#include "struct_converters.h"
#include "cppISteamClient_SteamClient016.h"
void cppISteamClient_SteamClient016_CreateSteamPipe( struct cppISteamClient_SteamClient016_CreateSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient016_BReleaseSteamPipe( struct cppISteamClient_SteamClient016_BReleaseSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BReleaseSteamPipe( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient016_ConnectToGlobalUser( struct cppISteamClient_SteamClient016_ConnectToGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->ConnectToGlobalUser( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient016_CreateLocalUser( struct cppISteamClient_SteamClient016_CreateLocalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateLocalUser( (HSteamPipe *)params->phSteamPipe, (EAccountType)params->eAccountType );
}

void cppISteamClient_SteamClient016_ReleaseUser( struct cppISteamClient_SteamClient016_ReleaseUser_params *params )
{
    ((ISteamClient*)params->linux_side)->ReleaseUser( (HSteamPipe)params->hSteamPipe, (HSteamUser)params->hUser );
}

void cppISteamClient_SteamClient016_GetISteamUser( struct cppISteamClient_SteamClient016_GetISteamUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUser( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamGameServer( struct cppISteamClient_SteamClient016_GetISteamGameServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_SetLocalIPBinding( struct cppISteamClient_SteamClient016_SetLocalIPBinding_params *params )
{
    ((ISteamClient*)params->linux_side)->SetLocalIPBinding( (uint32)params->unIP, (uint16)params->usPort );
}

void cppISteamClient_SteamClient016_GetISteamFriends( struct cppISteamClient_SteamClient016_GetISteamFriends_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamFriends( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamUtils( struct cppISteamClient_SteamClient016_GetISteamUtils_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUtils( (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamMatchmaking( struct cppISteamClient_SteamClient016_GetISteamMatchmaking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmaking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient016_GetISteamMatchmakingServers_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmakingServers( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamGenericInterface( struct cppISteamClient_SteamClient016_GetISteamGenericInterface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGenericInterface( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamUserStats( struct cppISteamClient_SteamClient016_GetISteamUserStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUserStats( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamGameServerStats( struct cppISteamClient_SteamClient016_GetISteamGameServerStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServerStats( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamApps( struct cppISteamClient_SteamClient016_GetISteamApps_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamApps( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamNetworking( struct cppISteamClient_SteamClient016_GetISteamNetworking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamNetworking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamRemoteStorage( struct cppISteamClient_SteamClient016_GetISteamRemoteStorage_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemoteStorage( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamScreenshots( struct cppISteamClient_SteamClient016_GetISteamScreenshots_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamScreenshots( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_RunFrame( struct cppISteamClient_SteamClient016_RunFrame_params *params )
{
    ((ISteamClient*)params->linux_side)->RunFrame(  );
}

void cppISteamClient_SteamClient016_GetIPCCallCount( struct cppISteamClient_SteamClient016_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient016_SetWarningMessageHook( struct cppISteamClient_SteamClient016_SetWarningMessageHook_params *params )
{
    SteamAPIWarningMessageHook_t lin_pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamClient*)params->linux_side)->SetWarningMessageHook( lin_pFunction );
}

void cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient016_GetISteamHTTP( struct cppISteamClient_SteamClient016_GetISteamHTTP_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTTP( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient016_GetISteamUnifiedMessages_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUnifiedMessages( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamController( struct cppISteamClient_SteamClient016_GetISteamController_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamController( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamUGC( struct cppISteamClient_SteamClient016_GetISteamUGC_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUGC( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamAppList( struct cppISteamClient_SteamClient016_GetISteamAppList_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamAppList( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamMusic( struct cppISteamClient_SteamClient016_GetISteamMusic_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusic( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamMusicRemote( struct cppISteamClient_SteamClient016_GetISteamMusicRemote_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusicRemote( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamHTMLSurface( struct cppISteamClient_SteamClient016_GetISteamHTMLSurface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTMLSurface( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->Set_SteamAPI_CPostAPIResultInProcess( (SteamAPI_PostAPIResultInProcess_t)params->func );
}

void cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->Remove_SteamAPI_CPostAPIResultInProcess( (SteamAPI_PostAPIResultInProcess_t)params->func );
}

void cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    SteamAPI_CheckCallbackRegistered_t lin_func = (SteamAPI_CheckCallbackRegistered_t)manual_convert_SteamAPI_CheckCallbackRegistered_t( (void *)params->func );
    ((ISteamClient*)params->linux_side)->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
}

#ifdef __cplusplus
}
#endif
