/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient015.h"

void cppISteamClient_SteamClient015_CreateSteamPipe( struct cppISteamClient_SteamClient015_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient015_BReleaseSteamPipe( struct cppISteamClient_SteamClient015_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient015_ConnectToGlobalUser( struct cppISteamClient_SteamClient015_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient015_CreateLocalUser( struct cppISteamClient_SteamClient015_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient015_ReleaseUser( struct cppISteamClient_SteamClient015_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient015_GetISteamUser( struct cppISteamClient_SteamClient015_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamGameServer( struct cppISteamClient_SteamClient015_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_SetLocalIPBinding( struct cppISteamClient_SteamClient015_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient015_GetISteamFriends( struct cppISteamClient_SteamClient015_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamUtils( struct cppISteamClient_SteamClient015_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamMatchmaking( struct cppISteamClient_SteamClient015_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient015_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamGenericInterface( struct cppISteamClient_SteamClient015_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamUserStats( struct cppISteamClient_SteamClient015_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamGameServerStats( struct cppISteamClient_SteamClient015_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamApps( struct cppISteamClient_SteamClient015_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamNetworking( struct cppISteamClient_SteamClient015_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamRemoteStorage( struct cppISteamClient_SteamClient015_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamScreenshots( struct cppISteamClient_SteamClient015_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_RunFrame( struct cppISteamClient_SteamClient015_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient015_GetIPCCallCount( struct cppISteamClient_SteamClient015_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient015_SetWarningMessageHook( struct cppISteamClient_SteamClient015_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient015_GetISteamHTTP( struct cppISteamClient_SteamClient015_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient015_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamController( struct cppISteamClient_SteamClient015_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamUGC( struct cppISteamClient_SteamClient015_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamAppList( struct cppISteamClient_SteamClient015_GetISteamAppList_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamMusic( struct cppISteamClient_SteamClient015_GetISteamMusic_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient015_GetISteamMusicRemote( struct cppISteamClient_SteamClient015_GetISteamMusicRemote_params *params )
{
    struct u_ISteamClient_SteamClient015 *iface = (struct u_ISteamClient_SteamClient015 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

