/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient020.h"

void cppISteamClient_SteamClient020_CreateSteamPipe( struct cppISteamClient_SteamClient020_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient020_BReleaseSteamPipe( struct cppISteamClient_SteamClient020_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient020_ConnectToGlobalUser( struct cppISteamClient_SteamClient020_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient020_CreateLocalUser( struct cppISteamClient_SteamClient020_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient020_ReleaseUser( struct cppISteamClient_SteamClient020_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient020_GetISteamUser( struct cppISteamClient_SteamClient020_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamGameServer( struct cppISteamClient_SteamClient020_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_SetLocalIPBinding( struct cppISteamClient_SteamClient020_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient020_GetISteamFriends( struct cppISteamClient_SteamClient020_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamUtils( struct cppISteamClient_SteamClient020_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamMatchmaking( struct cppISteamClient_SteamClient020_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient020_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamGenericInterface( struct cppISteamClient_SteamClient020_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamUserStats( struct cppISteamClient_SteamClient020_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamGameServerStats( struct cppISteamClient_SteamClient020_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamApps( struct cppISteamClient_SteamClient020_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamNetworking( struct cppISteamClient_SteamClient020_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamRemoteStorage( struct cppISteamClient_SteamClient020_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamScreenshots( struct cppISteamClient_SteamClient020_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamGameSearch( struct cppISteamClient_SteamClient020_GetISteamGameSearch_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamGameSearch( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_RunFrame( struct cppISteamClient_SteamClient020_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient020_GetIPCCallCount( struct cppISteamClient_SteamClient020_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient020_SetWarningMessageHook( struct cppISteamClient_SteamClient020_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient020_GetISteamHTTP( struct cppISteamClient_SteamClient020_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->DEPRECATED_GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamController( struct cppISteamClient_SteamClient020_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamUGC( struct cppISteamClient_SteamClient020_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamAppList( struct cppISteamClient_SteamClient020_GetISteamAppList_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamMusic( struct cppISteamClient_SteamClient020_GetISteamMusic_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamMusicRemote( struct cppISteamClient_SteamClient020_GetISteamMusicRemote_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamHTMLSurface( struct cppISteamClient_SteamClient020_GetISteamHTMLSurface_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    void (*U_STDCALL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
}

void cppISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    void (*U_STDCALL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
}

void cppISteamClient_SteamClient020_GetISteamInventory( struct cppISteamClient_SteamClient020_GetISteamInventory_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamVideo( struct cppISteamClient_SteamClient020_GetISteamVideo_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamParentalSettings( struct cppISteamClient_SteamClient020_GetISteamParentalSettings_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamInput( struct cppISteamClient_SteamClient020_GetISteamInput_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamParties( struct cppISteamClient_SteamClient020_GetISteamParties_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_GetISteamRemotePlay( struct cppISteamClient_SteamClient020_GetISteamRemotePlay_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    params->_ret = iface->GetISteamRemotePlay( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient020_DestroyAllInterfaces( struct cppISteamClient_SteamClient020_DestroyAllInterfaces_params *params )
{
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    iface->DestroyAllInterfaces(  );
}

