/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient019.h"

void cppISteamClient_SteamClient019_CreateSteamPipe( struct cppISteamClient_SteamClient019_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient019_BReleaseSteamPipe( struct cppISteamClient_SteamClient019_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient019_ConnectToGlobalUser( struct cppISteamClient_SteamClient019_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient019_CreateLocalUser( struct cppISteamClient_SteamClient019_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient019_ReleaseUser( struct cppISteamClient_SteamClient019_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient019_GetISteamUser( struct cppISteamClient_SteamClient019_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamGameServer( struct cppISteamClient_SteamClient019_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_SetLocalIPBinding( struct cppISteamClient_SteamClient019_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient019_GetISteamFriends( struct cppISteamClient_SteamClient019_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamUtils( struct cppISteamClient_SteamClient019_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamMatchmaking( struct cppISteamClient_SteamClient019_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient019_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamGenericInterface( struct cppISteamClient_SteamClient019_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamUserStats( struct cppISteamClient_SteamClient019_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamGameServerStats( struct cppISteamClient_SteamClient019_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamApps( struct cppISteamClient_SteamClient019_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamNetworking( struct cppISteamClient_SteamClient019_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamRemoteStorage( struct cppISteamClient_SteamClient019_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamScreenshots( struct cppISteamClient_SteamClient019_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamGameSearch( struct cppISteamClient_SteamClient019_GetISteamGameSearch_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamGameSearch( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_RunFrame( struct cppISteamClient_SteamClient019_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient019_GetIPCCallCount( struct cppISteamClient_SteamClient019_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient019_SetWarningMessageHook( struct cppISteamClient_SteamClient019_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient019_GetISteamHTTP( struct cppISteamClient_SteamClient019_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->DEPRECATED_GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamController( struct cppISteamClient_SteamClient019_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamUGC( struct cppISteamClient_SteamClient019_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamAppList( struct cppISteamClient_SteamClient019_GetISteamAppList_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamMusic( struct cppISteamClient_SteamClient019_GetISteamMusic_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamMusicRemote( struct cppISteamClient_SteamClient019_GetISteamMusicRemote_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamHTMLSurface( struct cppISteamClient_SteamClient019_GetISteamHTMLSurface_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    void (*U_STDCALL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
}

void cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    void (*U_STDCALL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
}

void cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    uint32_t (*U_STDCALL u_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( u_func );
}

void cppISteamClient_SteamClient019_GetISteamInventory( struct cppISteamClient_SteamClient019_GetISteamInventory_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamVideo( struct cppISteamClient_SteamClient019_GetISteamVideo_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamParentalSettings( struct cppISteamClient_SteamClient019_GetISteamParentalSettings_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamInput( struct cppISteamClient_SteamClient019_GetISteamInput_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamParties( struct cppISteamClient_SteamClient019_GetISteamParties_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient019_GetISteamRemotePlay( struct cppISteamClient_SteamClient019_GetISteamRemotePlay_params *params )
{
    struct u_ISteamClient_SteamClient019 *iface = (struct u_ISteamClient_SteamClient019 *)params->linux_side;
    params->_ret = iface->GetISteamRemotePlay( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

