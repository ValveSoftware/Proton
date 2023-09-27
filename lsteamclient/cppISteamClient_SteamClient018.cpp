#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_145/steam_api.h"
#include "steamworks_sdk_145/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_145
#include "struct_converters.h"
#include "cppISteamClient_SteamClient018.h"
void cppISteamClient_SteamClient018_CreateSteamPipe( struct cppISteamClient_SteamClient018_CreateSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient018_BReleaseSteamPipe( struct cppISteamClient_SteamClient018_BReleaseSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BReleaseSteamPipe( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient018_ConnectToGlobalUser( struct cppISteamClient_SteamClient018_ConnectToGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->ConnectToGlobalUser( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient018_CreateLocalUser( struct cppISteamClient_SteamClient018_CreateLocalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateLocalUser( (HSteamPipe *)params->phSteamPipe, (EAccountType)params->eAccountType );
}

void cppISteamClient_SteamClient018_ReleaseUser( struct cppISteamClient_SteamClient018_ReleaseUser_params *params )
{
    ((ISteamClient*)params->linux_side)->ReleaseUser( (HSteamPipe)params->hSteamPipe, (HSteamUser)params->hUser );
}

void cppISteamClient_SteamClient018_GetISteamUser( struct cppISteamClient_SteamClient018_GetISteamUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUser( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameServer( struct cppISteamClient_SteamClient018_GetISteamGameServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_SetLocalIPBinding( struct cppISteamClient_SteamClient018_SetLocalIPBinding_params *params )
{
    ((ISteamClient*)params->linux_side)->SetLocalIPBinding( (uint32)params->unIP, (uint16)params->usPort );
}

void cppISteamClient_SteamClient018_GetISteamFriends( struct cppISteamClient_SteamClient018_GetISteamFriends_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamFriends( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUtils( struct cppISteamClient_SteamClient018_GetISteamUtils_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUtils( (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMatchmaking( struct cppISteamClient_SteamClient018_GetISteamMatchmaking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmaking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient018_GetISteamMatchmakingServers_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmakingServers( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGenericInterface( struct cppISteamClient_SteamClient018_GetISteamGenericInterface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGenericInterface( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUserStats( struct cppISteamClient_SteamClient018_GetISteamUserStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUserStats( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameServerStats( struct cppISteamClient_SteamClient018_GetISteamGameServerStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServerStats( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamApps( struct cppISteamClient_SteamClient018_GetISteamApps_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamApps( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamNetworking( struct cppISteamClient_SteamClient018_GetISteamNetworking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamNetworking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamRemoteStorage( struct cppISteamClient_SteamClient018_GetISteamRemoteStorage_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemoteStorage( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamScreenshots( struct cppISteamClient_SteamClient018_GetISteamScreenshots_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamScreenshots( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameSearch( struct cppISteamClient_SteamClient018_GetISteamGameSearch_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameSearch( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_RunFrame( struct cppISteamClient_SteamClient018_RunFrame_params *params )
{
    ((ISteamClient*)params->linux_side)->RunFrame(  );
}

void cppISteamClient_SteamClient018_GetIPCCallCount( struct cppISteamClient_SteamClient018_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient018_SetWarningMessageHook( struct cppISteamClient_SteamClient018_SetWarningMessageHook_params *params )
{
    params->pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamClient*)params->linux_side)->SetWarningMessageHook( (SteamAPIWarningMessageHook_t)params->pFunction );
}

void cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient018_GetISteamHTTP( struct cppISteamClient_SteamClient018_GetISteamHTTP_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTTP( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->DEPRECATED_GetISteamUnifiedMessages( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamController( struct cppISteamClient_SteamClient018_GetISteamController_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamController( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUGC( struct cppISteamClient_SteamClient018_GetISteamUGC_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUGC( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamAppList( struct cppISteamClient_SteamClient018_GetISteamAppList_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamAppList( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMusic( struct cppISteamClient_SteamClient018_GetISteamMusic_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusic( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMusicRemote( struct cppISteamClient_SteamClient018_GetISteamMusicRemote_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusicRemote( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamHTMLSurface( struct cppISteamClient_SteamClient018_GetISteamHTMLSurface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTMLSurface( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( (void (*)())params->_a );
}

void cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( (void (*)())params->_a );
}

void cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    params->func = (SteamAPI_CheckCallbackRegistered_t)manual_convert_SteamAPI_CheckCallbackRegistered_t( (void *)params->func );
    ((ISteamClient*)params->linux_side)->Set_SteamAPI_CCheckCallbackRegisteredInProcess( (SteamAPI_CheckCallbackRegistered_t)params->func );
}

void cppISteamClient_SteamClient018_GetISteamInventory( struct cppISteamClient_SteamClient018_GetISteamInventory_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamInventory( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamVideo( struct cppISteamClient_SteamClient018_GetISteamVideo_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamVideo( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamParentalSettings( struct cppISteamClient_SteamClient018_GetISteamParentalSettings_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamParentalSettings( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamInput( struct cppISteamClient_SteamClient018_GetISteamInput_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamInput( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamParties( struct cppISteamClient_SteamClient018_GetISteamParties_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamParties( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

#ifdef __cplusplus
}
#endif
