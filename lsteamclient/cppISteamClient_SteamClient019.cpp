#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_146/steam_api.h"
#include "steamworks_sdk_146/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_146
#include "struct_converters.h"
#include "cppISteamClient_SteamClient019.h"
void cppISteamClient_SteamClient019_CreateSteamPipe( struct cppISteamClient_SteamClient019_CreateSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient019_BReleaseSteamPipe( struct cppISteamClient_SteamClient019_BReleaseSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BReleaseSteamPipe( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient019_ConnectToGlobalUser( struct cppISteamClient_SteamClient019_ConnectToGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->ConnectToGlobalUser( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient019_CreateLocalUser( struct cppISteamClient_SteamClient019_CreateLocalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateLocalUser( (HSteamPipe *)params->phSteamPipe, (EAccountType)params->eAccountType );
}

void cppISteamClient_SteamClient019_ReleaseUser( struct cppISteamClient_SteamClient019_ReleaseUser_params *params )
{
    ((ISteamClient*)params->linux_side)->ReleaseUser( (HSteamPipe)params->hSteamPipe, (HSteamUser)params->hUser );
}

void cppISteamClient_SteamClient019_GetISteamUser( struct cppISteamClient_SteamClient019_GetISteamUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUser( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamGameServer( struct cppISteamClient_SteamClient019_GetISteamGameServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_SetLocalIPBinding( struct cppISteamClient_SteamClient019_SetLocalIPBinding_params *params )
{
    ((ISteamClient*)params->linux_side)->SetLocalIPBinding( (uint32)params->unIP, (uint16)params->usPort );
}

void cppISteamClient_SteamClient019_GetISteamFriends( struct cppISteamClient_SteamClient019_GetISteamFriends_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamFriends( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamUtils( struct cppISteamClient_SteamClient019_GetISteamUtils_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUtils( (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamMatchmaking( struct cppISteamClient_SteamClient019_GetISteamMatchmaking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmaking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient019_GetISteamMatchmakingServers_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmakingServers( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamGenericInterface( struct cppISteamClient_SteamClient019_GetISteamGenericInterface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGenericInterface( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamUserStats( struct cppISteamClient_SteamClient019_GetISteamUserStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUserStats( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamGameServerStats( struct cppISteamClient_SteamClient019_GetISteamGameServerStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServerStats( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamApps( struct cppISteamClient_SteamClient019_GetISteamApps_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamApps( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamNetworking( struct cppISteamClient_SteamClient019_GetISteamNetworking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamNetworking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamRemoteStorage( struct cppISteamClient_SteamClient019_GetISteamRemoteStorage_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemoteStorage( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamScreenshots( struct cppISteamClient_SteamClient019_GetISteamScreenshots_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamScreenshots( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamGameSearch( struct cppISteamClient_SteamClient019_GetISteamGameSearch_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameSearch( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_RunFrame( struct cppISteamClient_SteamClient019_RunFrame_params *params )
{
    ((ISteamClient*)params->linux_side)->RunFrame(  );
}

void cppISteamClient_SteamClient019_GetIPCCallCount( struct cppISteamClient_SteamClient019_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient019_SetWarningMessageHook( struct cppISteamClient_SteamClient019_SetWarningMessageHook_params *params )
{
    SteamAPIWarningMessageHook_t lin_pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamClient*)params->linux_side)->SetWarningMessageHook( lin_pFunction );
}

void cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient019_GetISteamHTTP( struct cppISteamClient_SteamClient019_GetISteamHTTP_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTTP( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->DEPRECATED_GetISteamUnifiedMessages( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamController( struct cppISteamClient_SteamClient019_GetISteamController_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamController( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamUGC( struct cppISteamClient_SteamClient019_GetISteamUGC_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUGC( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamAppList( struct cppISteamClient_SteamClient019_GetISteamAppList_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamAppList( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamMusic( struct cppISteamClient_SteamClient019_GetISteamMusic_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusic( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamMusicRemote( struct cppISteamClient_SteamClient019_GetISteamMusicRemote_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusicRemote( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamHTMLSurface( struct cppISteamClient_SteamClient019_GetISteamHTMLSurface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTMLSurface( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( (void (*)())params->_a );
}

void cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( (void (*)())params->_a );
}

void cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    SteamAPI_CheckCallbackRegistered_t lin_func = (SteamAPI_CheckCallbackRegistered_t)manual_convert_SteamAPI_CheckCallbackRegistered_t( (void *)params->func );
    ((ISteamClient*)params->linux_side)->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
}

void cppISteamClient_SteamClient019_GetISteamInventory( struct cppISteamClient_SteamClient019_GetISteamInventory_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamInventory( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamVideo( struct cppISteamClient_SteamClient019_GetISteamVideo_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamVideo( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamParentalSettings( struct cppISteamClient_SteamClient019_GetISteamParentalSettings_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamParentalSettings( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamInput( struct cppISteamClient_SteamClient019_GetISteamInput_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamInput( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamParties( struct cppISteamClient_SteamClient019_GetISteamParties_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamParties( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamRemotePlay( struct cppISteamClient_SteamClient019_GetISteamRemotePlay_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemotePlay( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

#ifdef __cplusplus
}
#endif
