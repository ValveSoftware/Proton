/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient011.h"

void cppISteamClient_SteamClient011_CreateSteamPipe( struct cppISteamClient_SteamClient011_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient011_BReleaseSteamPipe( struct cppISteamClient_SteamClient011_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient011_ConnectToGlobalUser( struct cppISteamClient_SteamClient011_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient011_CreateLocalUser( struct cppISteamClient_SteamClient011_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient011_ReleaseUser( struct cppISteamClient_SteamClient011_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient011_GetISteamUser( struct cppISteamClient_SteamClient011_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamGameServer( struct cppISteamClient_SteamClient011_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_SetLocalIPBinding( struct cppISteamClient_SteamClient011_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient011_GetISteamFriends( struct cppISteamClient_SteamClient011_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamUtils( struct cppISteamClient_SteamClient011_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamMatchmaking( struct cppISteamClient_SteamClient011_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient011_GetISteamMasterServerUpdater_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient011_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamGenericInterface( struct cppISteamClient_SteamClient011_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamUserStats( struct cppISteamClient_SteamClient011_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamGameServerStats( struct cppISteamClient_SteamClient011_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamApps( struct cppISteamClient_SteamClient011_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamNetworking( struct cppISteamClient_SteamClient011_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamRemoteStorage( struct cppISteamClient_SteamClient011_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_GetISteamScreenshots( struct cppISteamClient_SteamClient011_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient011_RunFrame( struct cppISteamClient_SteamClient011_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient011_GetIPCCallCount( struct cppISteamClient_SteamClient011_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient011_SetWarningMessageHook( struct cppISteamClient_SteamClient011_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient011_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient011_GetISteamHTTP( struct cppISteamClient_SteamClient011_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient011 *iface = (struct u_ISteamClient_SteamClient011 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

