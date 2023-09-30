/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient010.h"

void cppISteamClient_SteamClient010_CreateSteamPipe( struct cppISteamClient_SteamClient010_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient010_BReleaseSteamPipe( struct cppISteamClient_SteamClient010_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient010_ConnectToGlobalUser( struct cppISteamClient_SteamClient010_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient010_CreateLocalUser( struct cppISteamClient_SteamClient010_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient010_ReleaseUser( struct cppISteamClient_SteamClient010_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient010_GetISteamUser( struct cppISteamClient_SteamClient010_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamGameServer( struct cppISteamClient_SteamClient010_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_SetLocalIPBinding( struct cppISteamClient_SteamClient010_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient010_GetISteamFriends( struct cppISteamClient_SteamClient010_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamUtils( struct cppISteamClient_SteamClient010_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamMatchmaking( struct cppISteamClient_SteamClient010_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient010_GetISteamMasterServerUpdater_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient010_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamGenericInterface( struct cppISteamClient_SteamClient010_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamUserStats( struct cppISteamClient_SteamClient010_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamGameServerStats( struct cppISteamClient_SteamClient010_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamApps( struct cppISteamClient_SteamClient010_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamNetworking( struct cppISteamClient_SteamClient010_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_GetISteamRemoteStorage( struct cppISteamClient_SteamClient010_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient010_RunFrame( struct cppISteamClient_SteamClient010_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient010_GetIPCCallCount( struct cppISteamClient_SteamClient010_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient010_SetWarningMessageHook( struct cppISteamClient_SteamClient010_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient010_GetISteamHTTP( struct cppISteamClient_SteamClient010_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient010 *iface = (struct u_ISteamClient_SteamClient010 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

