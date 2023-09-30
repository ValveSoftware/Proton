/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamClient_SteamClient006_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient006_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient006_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient006_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient006_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_CreateGlobalUser( void *args )
{
    struct ISteamClient_SteamClient006_CreateGlobalUser_params *params = (struct ISteamClient_SteamClient006_CreateGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->CreateGlobalUser( params->phSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient006_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient006_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient006_CreateLocalUser_params *params = (struct ISteamClient_SteamClient006_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient006_ReleaseUser_params *params = (struct ISteamClient_SteamClient006_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamUser_params *params = (struct ISteamClient_SteamClient006_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetIVAC( void *args )
{
    struct ISteamClient_SteamClient006_GetIVAC_params *params = (struct ISteamClient_SteamClient006_GetIVAC_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetIVAC( params->hSteamUser );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient006_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient006_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient006_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetUniverseName( void *args )
{
    struct ISteamClient_SteamClient006_GetUniverseName_params *params = (struct ISteamClient_SteamClient006_GetUniverseName_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetUniverseName( params->eUniverse );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamFriends_params *params = (struct ISteamClient_SteamClient006_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamUtils_params *params = (struct ISteamClient_SteamClient006_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamBilling( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamBilling_params *params = (struct ISteamClient_SteamClient006_GetISteamBilling_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamBilling( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient006_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamApps_params *params = (struct ISteamClient_SteamClient006_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamContentServer( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamContentServer_params *params = (struct ISteamClient_SteamClient006_GetISteamContentServer_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamContentServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamMasterServerUpdater( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamMasterServerUpdater_params *params = (struct ISteamClient_SteamClient006_GetISteamMasterServerUpdater_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient006_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient006_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_RunFrame( void *args )
{
    struct ISteamClient_SteamClient006_RunFrame_params *params = (struct ISteamClient_SteamClient006_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    iface->RunFrame(  );
    return 0;
}

NTSTATUS ISteamClient_SteamClient006_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient006_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient006_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

