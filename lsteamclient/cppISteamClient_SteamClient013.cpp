/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient013.h"

void cppISteamClient_SteamClient013_CreateSteamPipe( struct cppISteamClient_SteamClient013_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient013_BReleaseSteamPipe( struct cppISteamClient_SteamClient013_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient013_ConnectToGlobalUser( struct cppISteamClient_SteamClient013_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient013_CreateLocalUser( struct cppISteamClient_SteamClient013_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient013_ReleaseUser( struct cppISteamClient_SteamClient013_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient013_GetISteamUser( struct cppISteamClient_SteamClient013_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamGameServer( struct cppISteamClient_SteamClient013_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_SetLocalIPBinding( struct cppISteamClient_SteamClient013_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient013_GetISteamFriends( struct cppISteamClient_SteamClient013_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamUtils( struct cppISteamClient_SteamClient013_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamMatchmaking( struct cppISteamClient_SteamClient013_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient013_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamGenericInterface( struct cppISteamClient_SteamClient013_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamUserStats( struct cppISteamClient_SteamClient013_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamGameServerStats( struct cppISteamClient_SteamClient013_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamApps( struct cppISteamClient_SteamClient013_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamNetworking( struct cppISteamClient_SteamClient013_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamRemoteStorage( struct cppISteamClient_SteamClient013_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamScreenshots( struct cppISteamClient_SteamClient013_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_RunFrame( struct cppISteamClient_SteamClient013_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient013_GetIPCCallCount( struct cppISteamClient_SteamClient013_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient013_SetWarningMessageHook( struct cppISteamClient_SteamClient013_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient013_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient013_GetISteamHTTP( struct cppISteamClient_SteamClient013_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient013_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamController( struct cppISteamClient_SteamClient013_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamUGC( struct cppISteamClient_SteamClient013_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamInventory( struct cppISteamClient_SteamClient013_GetISteamInventory_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamInventory( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamVideo( struct cppISteamClient_SteamClient013_GetISteamVideo_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamVideo( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient013_GetISteamAppList( struct cppISteamClient_SteamClient013_GetISteamAppList_params *params )
{
    struct u_ISteamClient_SteamClient013 *iface = (struct u_ISteamClient_SteamClient013 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

