/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient016.h"

void cppISteamClient_SteamClient016_CreateSteamPipe( struct cppISteamClient_SteamClient016_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient016_BReleaseSteamPipe( struct cppISteamClient_SteamClient016_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient016_ConnectToGlobalUser( struct cppISteamClient_SteamClient016_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient016_CreateLocalUser( struct cppISteamClient_SteamClient016_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient016_ReleaseUser( struct cppISteamClient_SteamClient016_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient016_GetISteamUser( struct cppISteamClient_SteamClient016_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamGameServer( struct cppISteamClient_SteamClient016_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_SetLocalIPBinding( struct cppISteamClient_SteamClient016_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient016_GetISteamFriends( struct cppISteamClient_SteamClient016_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamUtils( struct cppISteamClient_SteamClient016_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamMatchmaking( struct cppISteamClient_SteamClient016_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient016_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamGenericInterface( struct cppISteamClient_SteamClient016_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamUserStats( struct cppISteamClient_SteamClient016_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamGameServerStats( struct cppISteamClient_SteamClient016_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamApps( struct cppISteamClient_SteamClient016_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamNetworking( struct cppISteamClient_SteamClient016_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamRemoteStorage( struct cppISteamClient_SteamClient016_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamScreenshots( struct cppISteamClient_SteamClient016_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_RunFrame( struct cppISteamClient_SteamClient016_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient016_GetIPCCallCount( struct cppISteamClient_SteamClient016_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient016_SetWarningMessageHook( struct cppISteamClient_SteamClient016_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient016_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient016_GetISteamHTTP( struct cppISteamClient_SteamClient016_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient016_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamController( struct cppISteamClient_SteamClient016_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamUGC( struct cppISteamClient_SteamClient016_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamAppList( struct cppISteamClient_SteamClient016_GetISteamAppList_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamMusic( struct cppISteamClient_SteamClient016_GetISteamMusic_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamMusicRemote( struct cppISteamClient_SteamClient016_GetISteamMusicRemote_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_GetISteamHTMLSurface( struct cppISteamClient_SteamClient016_GetISteamHTMLSurface_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    void (*U_STDCALL u_func)(uint64_t, void *, uint32_t, int32_t) = manual_convert_Set_SteamAPI_CPostAPIResultInProcess_func( params->func );
    iface->Set_SteamAPI_CPostAPIResultInProcess( u_func );
}

void cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    void (*U_STDCALL u_func)(uint64_t, void *, uint32_t, int32_t) = manual_convert_Remove_SteamAPI_CPostAPIResultInProcess_func( params->func );
    iface->Remove_SteamAPI_CPostAPIResultInProcess( u_func );
}

void cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    uint32_t (*U_STDCALL u_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( u_func );
}

