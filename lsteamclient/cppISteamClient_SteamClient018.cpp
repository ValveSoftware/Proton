/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient018.h"

void cppISteamClient_SteamClient018_CreateSteamPipe( struct cppISteamClient_SteamClient018_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient018_BReleaseSteamPipe( struct cppISteamClient_SteamClient018_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient018_ConnectToGlobalUser( struct cppISteamClient_SteamClient018_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient018_CreateLocalUser( struct cppISteamClient_SteamClient018_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient018_ReleaseUser( struct cppISteamClient_SteamClient018_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient018_GetISteamUser( struct cppISteamClient_SteamClient018_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameServer( struct cppISteamClient_SteamClient018_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_SetLocalIPBinding( struct cppISteamClient_SteamClient018_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient018_GetISteamFriends( struct cppISteamClient_SteamClient018_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUtils( struct cppISteamClient_SteamClient018_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMatchmaking( struct cppISteamClient_SteamClient018_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient018_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGenericInterface( struct cppISteamClient_SteamClient018_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUserStats( struct cppISteamClient_SteamClient018_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameServerStats( struct cppISteamClient_SteamClient018_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamApps( struct cppISteamClient_SteamClient018_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamNetworking( struct cppISteamClient_SteamClient018_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamRemoteStorage( struct cppISteamClient_SteamClient018_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamScreenshots( struct cppISteamClient_SteamClient018_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameSearch( struct cppISteamClient_SteamClient018_GetISteamGameSearch_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamGameSearch( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_RunFrame( struct cppISteamClient_SteamClient018_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient018_GetIPCCallCount( struct cppISteamClient_SteamClient018_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient018_SetWarningMessageHook( struct cppISteamClient_SteamClient018_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient018_GetISteamHTTP( struct cppISteamClient_SteamClient018_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->DEPRECATED_GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamController( struct cppISteamClient_SteamClient018_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUGC( struct cppISteamClient_SteamClient018_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamAppList( struct cppISteamClient_SteamClient018_GetISteamAppList_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMusic( struct cppISteamClient_SteamClient018_GetISteamMusic_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMusicRemote( struct cppISteamClient_SteamClient018_GetISteamMusicRemote_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamHTMLSurface( struct cppISteamClient_SteamClient018_GetISteamHTMLSurface_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    void (*U_STDCALL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
}

void cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    void (*U_STDCALL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
}

void cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    uint32_t (*U_STDCALL u_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( u_func );
}

void cppISteamClient_SteamClient018_GetISteamInventory( struct cppISteamClient_SteamClient018_GetISteamInventory_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamVideo( struct cppISteamClient_SteamClient018_GetISteamVideo_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamParentalSettings( struct cppISteamClient_SteamClient018_GetISteamParentalSettings_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamInput( struct cppISteamClient_SteamClient018_GetISteamInput_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamParties( struct cppISteamClient_SteamClient018_GetISteamParties_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

