/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient016_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient016_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient016_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient016_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient016_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient016_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient016_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient016_CreateLocalUser_params *params = (struct ISteamClient_SteamClient016_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient016_ReleaseUser_params *params = (struct ISteamClient_SteamClient016_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamUser_params *params = (struct ISteamClient_SteamClient016_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient016_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient016_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient016_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamFriends_params *params = (struct ISteamClient_SteamClient016_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamUtils_params *params = (struct ISteamClient_SteamClient016_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient016_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient016_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient016_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient016_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient016_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamApps_params *params = (struct ISteamClient_SteamClient016_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient016_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient016_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient016_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_RunFrame( void *args )
{
    struct ISteamClient_SteamClient016_RunFrame_params *params = (struct ISteamClient_SteamClient016_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient016_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient016_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient016_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient016_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient016_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient016_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient016_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamUnifiedMessages( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamUnifiedMessages_params *params = (struct ISteamClient_SteamClient016_GetISteamUnifiedMessages_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamController_params *params = (struct ISteamClient_SteamClient016_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamUGC_params *params = (struct ISteamClient_SteamClient016_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamAppList( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamAppList_params *params = (struct ISteamClient_SteamClient016_GetISteamAppList_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamMusic( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamMusic_params *params = (struct ISteamClient_SteamClient016_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamMusicRemote( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamMusicRemote_params *params = (struct ISteamClient_SteamClient016_GetISteamMusicRemote_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_GetISteamHTMLSurface( void *args )
{
    struct ISteamClient_SteamClient016_GetISteamHTMLSurface_params *params = (struct ISteamClient_SteamClient016_GetISteamHTMLSurface_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient016_Set_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    void (*U_CDECL u_func)(uint64_t, void *, uint32_t, int32_t) = manual_convert_Set_SteamAPI_CPostAPIResultInProcess_func( params->func );
    iface->Set_SteamAPI_CPostAPIResultInProcess( u_func );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient016_Remove_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    void (*U_CDECL u_func)(uint64_t, void *, uint32_t, int32_t) = manual_convert_Remove_SteamAPI_CPostAPIResultInProcess_func( params->func );
    iface->Remove_SteamAPI_CPostAPIResultInProcess( u_func );
    return 0;
}

NTSTATUS ISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess( void *args )
{
    struct ISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params = (struct ISteamClient_SteamClient016_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *)args;
    struct u_ISteamClient_SteamClient016 *iface = (struct u_ISteamClient_SteamClient016 *)params->linux_side;
    uint32_t (*U_CDECL u_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( u_func );
    return 0;
}

