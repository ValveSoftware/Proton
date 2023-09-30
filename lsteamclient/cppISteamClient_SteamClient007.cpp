/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient007_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient007_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient007_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient007_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient007_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient007_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient007_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient007_CreateLocalUser_params *params = (struct ISteamClient_SteamClient007_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient007_ReleaseUser_params *params = (struct ISteamClient_SteamClient007_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamUser_params *params = (struct ISteamClient_SteamClient007_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient007_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient007_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient007_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamFriends_params *params = (struct ISteamClient_SteamClient007_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamUtils_params *params = (struct ISteamClient_SteamClient007_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient007_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamContentServer( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamContentServer_params *params = (struct ISteamClient_SteamClient007_GetISteamContentServer_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamContentServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamMasterServerUpdater( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamMasterServerUpdater_params *params = (struct ISteamClient_SteamClient007_GetISteamMasterServerUpdater_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient007_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient007_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_RunFrame( void *args )
{
    struct ISteamClient_SteamClient007_RunFrame_params *params = (struct ISteamClient_SteamClient007_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient007_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient007_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient007_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamApps_params *params = (struct ISteamClient_SteamClient007_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient007_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient007_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient007_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamClient_SteamClient007_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient007_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient007_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

