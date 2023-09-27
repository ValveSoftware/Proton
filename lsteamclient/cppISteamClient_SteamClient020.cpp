#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamClient_SteamClient020.h"
void cppISteamClient_SteamClient020_CreateSteamPipe( struct cppISteamClient_SteamClient020_CreateSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient020_BReleaseSteamPipe( struct cppISteamClient_SteamClient020_BReleaseSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BReleaseSteamPipe( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient020_ConnectToGlobalUser( struct cppISteamClient_SteamClient020_ConnectToGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->ConnectToGlobalUser( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient020_CreateLocalUser( struct cppISteamClient_SteamClient020_CreateLocalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateLocalUser( (HSteamPipe *)params->phSteamPipe, (EAccountType)params->eAccountType );
}

void cppISteamClient_SteamClient020_ReleaseUser( struct cppISteamClient_SteamClient020_ReleaseUser_params *params )
{
    ((ISteamClient*)params->linux_side)->ReleaseUser( (HSteamPipe)params->hSteamPipe, (HSteamUser)params->hUser );
}

void cppISteamClient_SteamClient020_GetISteamUser( struct cppISteamClient_SteamClient020_GetISteamUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUser( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamGameServer( struct cppISteamClient_SteamClient020_GetISteamGameServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_SetLocalIPBinding( struct cppISteamClient_SteamClient020_SetLocalIPBinding_params *params )
{
    ((ISteamClient*)params->linux_side)->SetLocalIPBinding( *params->unIP, (uint16)params->usPort );
}

void cppISteamClient_SteamClient020_GetISteamFriends( struct cppISteamClient_SteamClient020_GetISteamFriends_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamFriends( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamUtils( struct cppISteamClient_SteamClient020_GetISteamUtils_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUtils( (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamMatchmaking( struct cppISteamClient_SteamClient020_GetISteamMatchmaking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmaking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient020_GetISteamMatchmakingServers_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmakingServers( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamGenericInterface( struct cppISteamClient_SteamClient020_GetISteamGenericInterface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGenericInterface( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamUserStats( struct cppISteamClient_SteamClient020_GetISteamUserStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUserStats( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamGameServerStats( struct cppISteamClient_SteamClient020_GetISteamGameServerStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServerStats( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamApps( struct cppISteamClient_SteamClient020_GetISteamApps_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamApps( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamNetworking( struct cppISteamClient_SteamClient020_GetISteamNetworking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamNetworking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamRemoteStorage( struct cppISteamClient_SteamClient020_GetISteamRemoteStorage_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemoteStorage( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamScreenshots( struct cppISteamClient_SteamClient020_GetISteamScreenshots_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamScreenshots( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamGameSearch( struct cppISteamClient_SteamClient020_GetISteamGameSearch_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameSearch( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_RunFrame( struct cppISteamClient_SteamClient020_RunFrame_params *params )
{
    ((ISteamClient*)params->linux_side)->RunFrame(  );
}

void cppISteamClient_SteamClient020_GetIPCCallCount( struct cppISteamClient_SteamClient020_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient020_SetWarningMessageHook( struct cppISteamClient_SteamClient020_SetWarningMessageHook_params *params )
{
    params->pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamClient*)params->linux_side)->SetWarningMessageHook( (SteamAPIWarningMessageHook_t)params->pFunction );
}

void cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient020_GetISteamHTTP( struct cppISteamClient_SteamClient020_GetISteamHTTP_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTTP( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->DEPRECATED_GetISteamUnifiedMessages( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamController( struct cppISteamClient_SteamClient020_GetISteamController_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamController( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamUGC( struct cppISteamClient_SteamClient020_GetISteamUGC_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUGC( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamAppList( struct cppISteamClient_SteamClient020_GetISteamAppList_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamAppList( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamMusic( struct cppISteamClient_SteamClient020_GetISteamMusic_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusic( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamMusicRemote( struct cppISteamClient_SteamClient020_GetISteamMusicRemote_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusicRemote( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamHTMLSurface( struct cppISteamClient_SteamClient020_GetISteamHTMLSurface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTMLSurface( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( (void (*)())params->_a );
}

void cppISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( (void (*)())params->_a );
}

void cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    params->func = (SteamAPI_CheckCallbackRegistered_t)manual_convert_SteamAPI_CheckCallbackRegistered_t( (void *)params->func );
    ((ISteamClient*)params->linux_side)->Set_SteamAPI_CCheckCallbackRegisteredInProcess( (SteamAPI_CheckCallbackRegistered_t)params->func );
}

void cppISteamClient_SteamClient020_GetISteamInventory( struct cppISteamClient_SteamClient020_GetISteamInventory_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamInventory( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamVideo( struct cppISteamClient_SteamClient020_GetISteamVideo_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamVideo( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamParentalSettings( struct cppISteamClient_SteamClient020_GetISteamParentalSettings_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamParentalSettings( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamInput( struct cppISteamClient_SteamClient020_GetISteamInput_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamInput( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamParties( struct cppISteamClient_SteamClient020_GetISteamParties_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamParties( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamRemotePlay( struct cppISteamClient_SteamClient020_GetISteamRemotePlay_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemotePlay( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient020_DestroyAllInterfaces( struct cppISteamClient_SteamClient020_DestroyAllInterfaces_params *params )
{
    ((ISteamClient*)params->linux_side)->DestroyAllInterfaces(  );
}

#ifdef __cplusplus
}
#endif
