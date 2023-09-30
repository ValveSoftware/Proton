/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient009.h"

void cppISteamClient_SteamClient009_CreateSteamPipe( struct cppISteamClient_SteamClient009_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient009_BReleaseSteamPipe( struct cppISteamClient_SteamClient009_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient009_ConnectToGlobalUser( struct cppISteamClient_SteamClient009_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient009_CreateLocalUser( struct cppISteamClient_SteamClient009_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient009_ReleaseUser( struct cppISteamClient_SteamClient009_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient009_GetISteamUser( struct cppISteamClient_SteamClient009_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamGameServer( struct cppISteamClient_SteamClient009_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_SetLocalIPBinding( struct cppISteamClient_SteamClient009_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient009_GetISteamFriends( struct cppISteamClient_SteamClient009_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamUtils( struct cppISteamClient_SteamClient009_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamMatchmaking( struct cppISteamClient_SteamClient009_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient009_GetISteamMasterServerUpdater_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient009_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamGenericInterface( struct cppISteamClient_SteamClient009_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamUserStats( struct cppISteamClient_SteamClient009_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamGameServerStats( struct cppISteamClient_SteamClient009_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamApps( struct cppISteamClient_SteamClient009_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamNetworking( struct cppISteamClient_SteamClient009_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_GetISteamRemoteStorage( struct cppISteamClient_SteamClient009_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient009_RunFrame( struct cppISteamClient_SteamClient009_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient009_GetIPCCallCount( struct cppISteamClient_SteamClient009_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient009_SetWarningMessageHook( struct cppISteamClient_SteamClient009_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient009 *iface = (struct u_ISteamClient_SteamClient009 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

