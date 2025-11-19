/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamClient_SteamClient023_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient023_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient023_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_CreateSteamPipe( void *args )
{
    struct wow64_ISteamClient_SteamClient023_CreateSteamPipe_params *params = (struct wow64_ISteamClient_SteamClient023_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient023_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient023_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_BReleaseSteamPipe( void *args )
{
    struct wow64_ISteamClient_SteamClient023_BReleaseSteamPipe_params *params = (struct wow64_ISteamClient_SteamClient023_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient023_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient023_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_ConnectToGlobalUser( void *args )
{
    struct wow64_ISteamClient_SteamClient023_ConnectToGlobalUser_params *params = (struct wow64_ISteamClient_SteamClient023_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient023_CreateLocalUser_params *params = (struct ISteamClient_SteamClient023_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_CreateLocalUser( void *args )
{
    struct wow64_ISteamClient_SteamClient023_CreateLocalUser_params *params = (struct wow64_ISteamClient_SteamClient023_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient023_ReleaseUser_params *params = (struct ISteamClient_SteamClient023_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_ReleaseUser( void *args )
{
    struct wow64_ISteamClient_SteamClient023_ReleaseUser_params *params = (struct wow64_ISteamClient_SteamClient023_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamUser_params *params = (struct ISteamClient_SteamClient023_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamUser( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamUser_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient023_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamGameServer( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamGameServer_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient023_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient023_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_SetLocalIPBinding( void *args )
{
    struct wow64_ISteamClient_SteamClient023_SetLocalIPBinding_params *params = (struct wow64_ISteamClient_SteamClient023_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamFriends_params *params = (struct ISteamClient_SteamClient023_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamFriends( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamFriends_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamUtils_params *params = (struct ISteamClient_SteamClient023_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamUtils( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamUtils_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient023_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamMatchmaking( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamMatchmaking_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient023_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamMatchmakingServers( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamMatchmakingServers_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient023_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamGenericInterface( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamGenericInterface_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient023_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamUserStats( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamUserStats_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient023_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamGameServerStats( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamGameServerStats_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamApps_params *params = (struct ISteamClient_SteamClient023_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamApps( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamApps_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient023_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamNetworking( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamNetworking_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient023_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamRemoteStorage( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamRemoteStorage_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient023_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamScreenshots( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamScreenshots_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_RunFrame( void *args )
{
    struct ISteamClient_SteamClient023_RunFrame_params *params = (struct ISteamClient_SteamClient023_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    iface->RunFrame(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_RunFrame( void *args )
{
    struct wow64_ISteamClient_SteamClient023_RunFrame_params *params = (struct wow64_ISteamClient_SteamClient023_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    iface->RunFrame(  );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient023_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient023_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetIPCCallCount( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetIPCCallCount_params *params = (struct wow64_ISteamClient_SteamClient023_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient023_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient023_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_SetWarningMessageHook( void *args )
{
    struct wow64_ISteamClient_SteamClient023_SetWarningMessageHook_params *params = (struct wow64_ISteamClient_SteamClient023_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient023_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient023_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_BShutdownIfAllPipesClosed( void *args )
{
    struct wow64_ISteamClient_SteamClient023_BShutdownIfAllPipesClosed_params *params = (struct wow64_ISteamClient_SteamClient023_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient023_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamHTTP( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamHTTP_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamController_params *params = (struct ISteamClient_SteamClient023_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamController( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamController_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamUGC_params *params = (struct ISteamClient_SteamClient023_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamUGC( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamUGC_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamMusic( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamMusic_params *params = (struct ISteamClient_SteamClient023_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamMusic( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamMusic_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamHTMLSurface( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamHTMLSurface_params *params = (struct ISteamClient_SteamClient023_GetISteamHTMLSurface_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamHTMLSurface( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamHTMLSurface_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamHTMLSurface_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient023_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient023_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct wow64_ISteamClient_SteamClient023_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params = (struct wow64_ISteamClient_SteamClient023_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient023_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient023_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct wow64_ISteamClient_SteamClient023_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params = (struct wow64_ISteamClient_SteamClient023_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamInventory( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamInventory_params *params = (struct ISteamClient_SteamClient023_GetISteamInventory_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamInventory( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamInventory_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamInventory_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamVideo( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamVideo_params *params = (struct ISteamClient_SteamClient023_GetISteamVideo_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamVideo( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamVideo_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamVideo_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamParentalSettings( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamParentalSettings_params *params = (struct ISteamClient_SteamClient023_GetISteamParentalSettings_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamParentalSettings( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamParentalSettings_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamParentalSettings_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamInput( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamInput_params *params = (struct ISteamClient_SteamClient023_GetISteamInput_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamInput( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamInput_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamInput_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamParties( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamParties_params *params = (struct ISteamClient_SteamClient023_GetISteamParties_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamParties( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamParties_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamParties_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_GetISteamRemotePlay( void *args )
{
    struct ISteamClient_SteamClient023_GetISteamRemotePlay_params *params = (struct ISteamClient_SteamClient023_GetISteamRemotePlay_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamRemotePlay( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_GetISteamRemotePlay( void *args )
{
    struct wow64_ISteamClient_SteamClient023_GetISteamRemotePlay_params *params = (struct wow64_ISteamClient_SteamClient023_GetISteamRemotePlay_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    params->_ret = iface->GetISteamRemotePlay( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient023_DestroyAllInterfaces( void *args )
{
    struct ISteamClient_SteamClient023_DestroyAllInterfaces_params *params = (struct ISteamClient_SteamClient023_DestroyAllInterfaces_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    iface->DestroyAllInterfaces(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient023_DestroyAllInterfaces( void *args )
{
    struct wow64_ISteamClient_SteamClient023_DestroyAllInterfaces_params *params = (struct wow64_ISteamClient_SteamClient023_DestroyAllInterfaces_params *)args;
    struct u_ISteamClient_SteamClient023 *iface = (struct u_ISteamClient_SteamClient023 *)params->u_iface;
    iface->DestroyAllInterfaces(  );
    return 0;
}
#endif

