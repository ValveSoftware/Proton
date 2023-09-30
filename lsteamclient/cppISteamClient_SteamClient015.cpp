/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient015_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient015_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient015_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient015_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient015_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient015_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient015_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient015_CreateLocalUser_params *params = (struct ISteamClient_SteamClient015_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient015_ReleaseUser_params *params = (struct ISteamClient_SteamClient015_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamUser_params *params = (struct ISteamClient_SteamClient015_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient015_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient015_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient015_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamFriends_params *params = (struct ISteamClient_SteamClient015_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamUtils_params *params = (struct ISteamClient_SteamClient015_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient015_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient015_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient015_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient015_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient015_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamApps_params *params = (struct ISteamClient_SteamClient015_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient015_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient015_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient015_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_RunFrame( void *args )
{
    struct ISteamClient_SteamClient015_RunFrame_params *params = (struct ISteamClient_SteamClient015_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient015_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient015_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient015_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient015_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient015_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient015_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient015_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamUnifiedMessages( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamUnifiedMessages_params *params = (struct ISteamClient_SteamClient015_GetISteamUnifiedMessages_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamController_params *params = (struct ISteamClient_SteamClient015_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamUGC_params *params = (struct ISteamClient_SteamClient015_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamAppList( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamAppList_params *params = (struct ISteamClient_SteamClient015_GetISteamAppList_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamMusic( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamMusic_params *params = (struct ISteamClient_SteamClient015_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient015_GetISteamMusicRemote( void *args )
{
    struct ISteamClient_SteamClient015_GetISteamMusicRemote_params *params = (struct ISteamClient_SteamClient015_GetISteamMusicRemote_params *)args;
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

