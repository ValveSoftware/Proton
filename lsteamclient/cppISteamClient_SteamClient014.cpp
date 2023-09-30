/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient014_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient014_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient014_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient014_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient014_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient014_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient014_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient014_CreateLocalUser_params *params = (struct ISteamClient_SteamClient014_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient014_ReleaseUser_params *params = (struct ISteamClient_SteamClient014_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamUser_params *params = (struct ISteamClient_SteamClient014_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient014_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient014_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient014_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamFriends_params *params = (struct ISteamClient_SteamClient014_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamUtils_params *params = (struct ISteamClient_SteamClient014_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient014_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient014_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient014_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient014_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient014_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamApps_params *params = (struct ISteamClient_SteamClient014_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient014_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient014_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient014_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_RunFrame( void *args )
{
    struct ISteamClient_SteamClient014_RunFrame_params *params = (struct ISteamClient_SteamClient014_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient014_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient014_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient014_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient014_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient014_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient014_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient014_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamUnifiedMessages( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamUnifiedMessages_params *params = (struct ISteamClient_SteamClient014_GetISteamUnifiedMessages_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamController_params *params = (struct ISteamClient_SteamClient014_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamUGC_params *params = (struct ISteamClient_SteamClient014_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamAppList( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamAppList_params *params = (struct ISteamClient_SteamClient014_GetISteamAppList_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient014_GetISteamMusic( void *args )
{
    struct ISteamClient_SteamClient014_GetISteamMusic_params *params = (struct ISteamClient_SteamClient014_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

