#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamClient_SteamClient017.h"
void cppISteamClient_SteamClient017_CreateSteamPipe( struct cppISteamClient_SteamClient017_CreateSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient017_BReleaseSteamPipe( struct cppISteamClient_SteamClient017_BReleaseSteamPipe_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BReleaseSteamPipe( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient017_ConnectToGlobalUser( struct cppISteamClient_SteamClient017_ConnectToGlobalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->ConnectToGlobalUser( (HSteamPipe)params->hSteamPipe );
}

void cppISteamClient_SteamClient017_CreateLocalUser( struct cppISteamClient_SteamClient017_CreateLocalUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->CreateLocalUser( (HSteamPipe *)params->phSteamPipe, (EAccountType)params->eAccountType );
}

void cppISteamClient_SteamClient017_ReleaseUser( struct cppISteamClient_SteamClient017_ReleaseUser_params *params )
{
    ((ISteamClient*)params->linux_side)->ReleaseUser( (HSteamPipe)params->hSteamPipe, (HSteamUser)params->hUser );
}

void cppISteamClient_SteamClient017_GetISteamUser( struct cppISteamClient_SteamClient017_GetISteamUser_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUser( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamGameServer( struct cppISteamClient_SteamClient017_GetISteamGameServer_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServer( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_SetLocalIPBinding( struct cppISteamClient_SteamClient017_SetLocalIPBinding_params *params )
{
    ((ISteamClient*)params->linux_side)->SetLocalIPBinding( (uint32)params->unIP, (uint16)params->usPort );
}

void cppISteamClient_SteamClient017_GetISteamFriends( struct cppISteamClient_SteamClient017_GetISteamFriends_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamFriends( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamUtils( struct cppISteamClient_SteamClient017_GetISteamUtils_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUtils( (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamMatchmaking( struct cppISteamClient_SteamClient017_GetISteamMatchmaking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmaking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient017_GetISteamMatchmakingServers_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMatchmakingServers( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamGenericInterface( struct cppISteamClient_SteamClient017_GetISteamGenericInterface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGenericInterface( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamUserStats( struct cppISteamClient_SteamClient017_GetISteamUserStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUserStats( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamGameServerStats( struct cppISteamClient_SteamClient017_GetISteamGameServerStats_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamGameServerStats( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamApps( struct cppISteamClient_SteamClient017_GetISteamApps_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamApps( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamNetworking( struct cppISteamClient_SteamClient017_GetISteamNetworking_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamNetworking( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamRemoteStorage( struct cppISteamClient_SteamClient017_GetISteamRemoteStorage_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamRemoteStorage( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamScreenshots( struct cppISteamClient_SteamClient017_GetISteamScreenshots_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamScreenshots( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_RunFrame( struct cppISteamClient_SteamClient017_RunFrame_params *params )
{
    ((ISteamClient*)params->linux_side)->RunFrame(  );
}

void cppISteamClient_SteamClient017_GetIPCCallCount( struct cppISteamClient_SteamClient017_GetIPCCallCount_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient017_SetWarningMessageHook( struct cppISteamClient_SteamClient017_SetWarningMessageHook_params *params )
{
    SteamAPIWarningMessageHook_t lin_pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    ((ISteamClient*)params->linux_side)->SetWarningMessageHook( lin_pFunction );
}

void cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient017_GetISteamHTTP( struct cppISteamClient_SteamClient017_GetISteamHTTP_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTTP( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient017_DEPRECATED_GetISteamUnifiedMessages_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->DEPRECATED_GetISteamUnifiedMessages( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamController( struct cppISteamClient_SteamClient017_GetISteamController_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamController( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamUGC( struct cppISteamClient_SteamClient017_GetISteamUGC_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamUGC( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamAppList( struct cppISteamClient_SteamClient017_GetISteamAppList_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamAppList( (HSteamUser)params->hSteamUser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamMusic( struct cppISteamClient_SteamClient017_GetISteamMusic_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusic( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamMusicRemote( struct cppISteamClient_SteamClient017_GetISteamMusicRemote_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamMusicRemote( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamHTMLSurface( struct cppISteamClient_SteamClient017_GetISteamHTMLSurface_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamHTMLSurface( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient017_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( (void (*)())params->_a );
}

void cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient017_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    ((ISteamClient*)params->linux_side)->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( (void (*)())params->_a );
}

void cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient017_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    SteamAPI_CheckCallbackRegistered_t lin_func = (SteamAPI_CheckCallbackRegistered_t)manual_convert_SteamAPI_CheckCallbackRegistered_t( (void *)params->func );
    ((ISteamClient*)params->linux_side)->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
}

void cppISteamClient_SteamClient017_GetISteamInventory( struct cppISteamClient_SteamClient017_GetISteamInventory_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamInventory( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamVideo( struct cppISteamClient_SteamClient017_GetISteamVideo_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamVideo( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

void cppISteamClient_SteamClient017_GetISteamParentalSettings( struct cppISteamClient_SteamClient017_GetISteamParentalSettings_params *params )
{
    params->_ret = ((ISteamClient*)params->linux_side)->GetISteamParentalSettings( (HSteamUser)params->hSteamuser, (HSteamPipe)params->hSteamPipe, (const char *)params->pchVersion );
}

#ifdef __cplusplus
}
#endif
