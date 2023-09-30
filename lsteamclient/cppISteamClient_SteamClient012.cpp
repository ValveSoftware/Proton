/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient012_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient012_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient012_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient012_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient012_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient012_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient012_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient012_CreateLocalUser_params *params = (struct ISteamClient_SteamClient012_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient012_ReleaseUser_params *params = (struct ISteamClient_SteamClient012_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamUser_params *params = (struct ISteamClient_SteamClient012_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient012_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient012_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient012_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamFriends_params *params = (struct ISteamClient_SteamClient012_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamUtils_params *params = (struct ISteamClient_SteamClient012_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient012_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient012_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient012_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient012_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient012_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamApps_params *params = (struct ISteamClient_SteamClient012_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient012_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient012_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient012_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_RunFrame( void *args )
{
    struct ISteamClient_SteamClient012_RunFrame_params *params = (struct ISteamClient_SteamClient012_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient012_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient012_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient012_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient012_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient012_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient012_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient012_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamUnifiedMessages( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamUnifiedMessages_params *params = (struct ISteamClient_SteamClient012_GetISteamUnifiedMessages_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamController_params *params = (struct ISteamClient_SteamClient012_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient012_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient012_GetISteamUGC_params *params = (struct ISteamClient_SteamClient012_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

