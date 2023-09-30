/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient013_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient013_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient013_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient013_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient013_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient013_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient013_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient013_CreateLocalUser_params *params = (struct ISteamClient_SteamClient013_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient013_ReleaseUser_params *params = (struct ISteamClient_SteamClient013_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamUser_params *params = (struct ISteamClient_SteamClient013_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient013_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient013_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient013_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamFriends_params *params = (struct ISteamClient_SteamClient013_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamUtils_params *params = (struct ISteamClient_SteamClient013_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient013_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient013_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient013_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient013_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient013_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamApps_params *params = (struct ISteamClient_SteamClient013_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient013_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient013_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient013_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_RunFrame( void *args )
{
    struct ISteamClient_SteamClient013_RunFrame_params *params = (struct ISteamClient_SteamClient013_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient013_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient013_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient013_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient013_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient013_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient013_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient013_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamUnifiedMessages( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamUnifiedMessages_params *params = (struct ISteamClient_SteamClient013_GetISteamUnifiedMessages_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamController_params *params = (struct ISteamClient_SteamClient013_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamUGC_params *params = (struct ISteamClient_SteamClient013_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamInventory( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamInventory_params *params = (struct ISteamClient_SteamClient013_GetISteamInventory_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamInventory( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamVideo( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamVideo_params *params = (struct ISteamClient_SteamClient013_GetISteamVideo_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamVideo( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient013_GetISteamAppList( void *args )
{
    struct ISteamClient_SteamClient013_GetISteamAppList_params *params = (struct ISteamClient_SteamClient013_GetISteamAppList_params *)args;
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

