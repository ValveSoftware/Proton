/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient008_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient008_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient008_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient008_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient008_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient008_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient008_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient008_CreateLocalUser_params *params = (struct ISteamClient_SteamClient008_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient008_ReleaseUser_params *params = (struct ISteamClient_SteamClient008_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamUser_params *params = (struct ISteamClient_SteamClient008_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient008_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient008_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient008_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamFriends_params *params = (struct ISteamClient_SteamClient008_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamUtils_params *params = (struct ISteamClient_SteamClient008_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient008_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamMasterServerUpdater( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamMasterServerUpdater_params *params = (struct ISteamClient_SteamClient008_GetISteamMasterServerUpdater_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient008_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient008_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient008_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamApps_params *params = (struct ISteamClient_SteamClient008_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient008_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient008_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient008_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_RunFrame( void *args )
{
    struct ISteamClient_SteamClient008_RunFrame_params *params = (struct ISteamClient_SteamClient008_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient008_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient008_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient008_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient008_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient008_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

