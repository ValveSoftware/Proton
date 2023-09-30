/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient007.h"

void cppISteamClient_SteamClient007_CreateSteamPipe( struct cppISteamClient_SteamClient007_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient007_BReleaseSteamPipe( struct cppISteamClient_SteamClient007_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient007_ConnectToGlobalUser( struct cppISteamClient_SteamClient007_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient007_CreateLocalUser( struct cppISteamClient_SteamClient007_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe );
}

void cppISteamClient_SteamClient007_ReleaseUser( struct cppISteamClient_SteamClient007_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient007_GetISteamUser( struct cppISteamClient_SteamClient007_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamGameServer( struct cppISteamClient_SteamClient007_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_SetLocalIPBinding( struct cppISteamClient_SteamClient007_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient007_GetISteamFriends( struct cppISteamClient_SteamClient007_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamUtils( struct cppISteamClient_SteamClient007_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamMatchmaking( struct cppISteamClient_SteamClient007_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamContentServer( struct cppISteamClient_SteamClient007_GetISteamContentServer_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamContentServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient007_GetISteamMasterServerUpdater_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient007_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamGenericInterface( struct cppISteamClient_SteamClient007_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_RunFrame( struct cppISteamClient_SteamClient007_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient007_GetIPCCallCount( struct cppISteamClient_SteamClient007_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient007_GetISteamUserStats( struct cppISteamClient_SteamClient007_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamApps( struct cppISteamClient_SteamClient007_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamNetworking( struct cppISteamClient_SteamClient007_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_SetWarningMessageHook( struct cppISteamClient_SteamClient007_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient007_GetISteamRemoteStorage( struct cppISteamClient_SteamClient007_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient007 *iface = (struct u_ISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

