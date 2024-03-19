/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamClient_SteamClient021_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient021_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient021_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient021_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient021_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient021_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient021_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient021_CreateLocalUser_params *params = (struct ISteamClient_SteamClient021_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient021_ReleaseUser_params *params = (struct ISteamClient_SteamClient021_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamUser_params *params = (struct ISteamClient_SteamClient021_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient021_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient021_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient021_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamFriends_params *params = (struct ISteamClient_SteamClient021_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamUtils_params *params = (struct ISteamClient_SteamClient021_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient021_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient021_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient021_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient021_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient021_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamApps_params *params = (struct ISteamClient_SteamClient021_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient021_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient021_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient021_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamGameSearch( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamGameSearch_params *params = (struct ISteamClient_SteamClient021_GetISteamGameSearch_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamGameSearch( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_RunFrame( void *args )
{
    struct ISteamClient_SteamClient021_RunFrame_params *params = (struct ISteamClient_SteamClient021_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient021_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient021_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient021_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient021_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient021_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient021_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient021_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamController_params *params = (struct ISteamClient_SteamClient021_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamUGC_params *params = (struct ISteamClient_SteamClient021_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamMusic( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamMusic_params *params = (struct ISteamClient_SteamClient021_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamMusicRemote( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamMusicRemote_params *params = (struct ISteamClient_SteamClient021_GetISteamMusicRemote_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamHTMLSurface( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamHTMLSurface_params *params = (struct ISteamClient_SteamClient021_GetISteamHTMLSurface_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient021_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient021_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient021_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient021_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamInventory( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamInventory_params *params = (struct ISteamClient_SteamClient021_GetISteamInventory_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamVideo( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamVideo_params *params = (struct ISteamClient_SteamClient021_GetISteamVideo_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamParentalSettings( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamParentalSettings_params *params = (struct ISteamClient_SteamClient021_GetISteamParentalSettings_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamInput( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamInput_params *params = (struct ISteamClient_SteamClient021_GetISteamInput_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamParties( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamParties_params *params = (struct ISteamClient_SteamClient021_GetISteamParties_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_GetISteamRemotePlay( void *args )
{
    struct ISteamClient_SteamClient021_GetISteamRemotePlay_params *params = (struct ISteamClient_SteamClient021_GetISteamRemotePlay_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    params->_ret = iface->GetISteamRemotePlay( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_DestroyAllInterfaces( void *args )
{
    struct ISteamClient_SteamClient021_DestroyAllInterfaces_params *params = (struct ISteamClient_SteamClient021_DestroyAllInterfaces_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    iface->DestroyAllInterfaces(  );
    return 0;
}

