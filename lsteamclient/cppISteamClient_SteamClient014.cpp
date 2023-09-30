/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient014.h"

void cppISteamClient_SteamClient014_CreateSteamPipe( struct cppISteamClient_SteamClient014_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient014_BReleaseSteamPipe( struct cppISteamClient_SteamClient014_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient014_ConnectToGlobalUser( struct cppISteamClient_SteamClient014_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient014_CreateLocalUser( struct cppISteamClient_SteamClient014_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient014_ReleaseUser( struct cppISteamClient_SteamClient014_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient014_GetISteamUser( struct cppISteamClient_SteamClient014_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamGameServer( struct cppISteamClient_SteamClient014_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_SetLocalIPBinding( struct cppISteamClient_SteamClient014_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient014_GetISteamFriends( struct cppISteamClient_SteamClient014_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamUtils( struct cppISteamClient_SteamClient014_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamMatchmaking( struct cppISteamClient_SteamClient014_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient014_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamGenericInterface( struct cppISteamClient_SteamClient014_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamUserStats( struct cppISteamClient_SteamClient014_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamGameServerStats( struct cppISteamClient_SteamClient014_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamApps( struct cppISteamClient_SteamClient014_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamNetworking( struct cppISteamClient_SteamClient014_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamRemoteStorage( struct cppISteamClient_SteamClient014_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamScreenshots( struct cppISteamClient_SteamClient014_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_RunFrame( struct cppISteamClient_SteamClient014_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient014_GetIPCCallCount( struct cppISteamClient_SteamClient014_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient014_SetWarningMessageHook( struct cppISteamClient_SteamClient014_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient014_GetISteamHTTP( struct cppISteamClient_SteamClient014_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient014_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamController( struct cppISteamClient_SteamClient014_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamUGC( struct cppISteamClient_SteamClient014_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamAppList( struct cppISteamClient_SteamClient014_GetISteamAppList_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamMusic( struct cppISteamClient_SteamClient014_GetISteamMusic_params *params )
{
    struct u_ISteamClient_SteamClient014 *iface = (struct u_ISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

