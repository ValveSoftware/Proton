/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient020_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient020_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient020_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient020_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient020_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient020_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient020_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient020_CreateLocalUser_params *params = (struct ISteamClient_SteamClient020_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient020_ReleaseUser_params *params = (struct ISteamClient_SteamClient020_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamUser_params *params = (struct ISteamClient_SteamClient020_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient020_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient020_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient020_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamFriends_params *params = (struct ISteamClient_SteamClient020_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamUtils_params *params = (struct ISteamClient_SteamClient020_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient020_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient020_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient020_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient020_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient020_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamApps_params *params = (struct ISteamClient_SteamClient020_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient020_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient020_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient020_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamGameSearch( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamGameSearch_params *params = (struct ISteamClient_SteamClient020_GetISteamGameSearch_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamGameSearch( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_RunFrame( void *args )
{
    struct ISteamClient_SteamClient020_RunFrame_params *params = (struct ISteamClient_SteamClient020_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient020_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient020_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient020_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient020_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient020_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient020_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient020_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages( void *args )
{
    struct ISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages_params *params = (struct ISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->DEPRECATED_GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamController_params *params = (struct ISteamClient_SteamClient020_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamUGC_params *params = (struct ISteamClient_SteamClient020_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamAppList( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamAppList_params *params = (struct ISteamClient_SteamClient020_GetISteamAppList_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamMusic( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamMusic_params *params = (struct ISteamClient_SteamClient020_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamMusicRemote( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamMusicRemote_params *params = (struct ISteamClient_SteamClient020_GetISteamMusicRemote_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamHTMLSurface( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamHTMLSurface_params *params = (struct ISteamClient_SteamClient020_GetISteamHTMLSurface_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamInventory( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamInventory_params *params = (struct ISteamClient_SteamClient020_GetISteamInventory_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamVideo( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamVideo_params *params = (struct ISteamClient_SteamClient020_GetISteamVideo_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamParentalSettings( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamParentalSettings_params *params = (struct ISteamClient_SteamClient020_GetISteamParentalSettings_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamInput( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamInput_params *params = (struct ISteamClient_SteamClient020_GetISteamInput_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamParties( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamParties_params *params = (struct ISteamClient_SteamClient020_GetISteamParties_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_GetISteamRemotePlay( void *args )
{
    struct ISteamClient_SteamClient020_GetISteamRemotePlay_params *params = (struct ISteamClient_SteamClient020_GetISteamRemotePlay_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamRemotePlay( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient020_DestroyAllInterfaces( void *args )
{
    struct ISteamClient_SteamClient020_DestroyAllInterfaces_params *params = (struct ISteamClient_SteamClient020_DestroyAllInterfaces_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    iface->DestroyAllInterfaces(  );
    return 0;
}

