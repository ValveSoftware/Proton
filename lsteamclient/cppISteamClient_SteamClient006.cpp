/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient006.h"

struct u_ISteamClient_SteamClient006
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t CreateGlobalUser( int32_t * ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t * ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void * GetIVAC( int32_t ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual const char * GetUniverseName( uint32_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void * GetISteamBilling( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamContentServer*/ * GetISteamContentServer( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamClient_SteamClient006_CreateSteamPipe( struct cppISteamClient_SteamClient006_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient006_BReleaseSteamPipe( struct cppISteamClient_SteamClient006_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient006_CreateGlobalUser( struct cppISteamClient_SteamClient006_CreateGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->CreateGlobalUser( params->phSteamPipe );
}

void cppISteamClient_SteamClient006_ConnectToGlobalUser( struct cppISteamClient_SteamClient006_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient006_CreateLocalUser( struct cppISteamClient_SteamClient006_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe );
}

void cppISteamClient_SteamClient006_ReleaseUser( struct cppISteamClient_SteamClient006_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient006_GetISteamUser( struct cppISteamClient_SteamClient006_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_GetIVAC( struct cppISteamClient_SteamClient006_GetIVAC_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetIVAC( params->hSteamUser );
}

void cppISteamClient_SteamClient006_GetISteamGameServer( struct cppISteamClient_SteamClient006_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_SetLocalIPBinding( struct cppISteamClient_SteamClient006_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient006_GetUniverseName( struct cppISteamClient_SteamClient006_GetUniverseName_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetUniverseName( params->eUniverse );
}

void cppISteamClient_SteamClient006_GetISteamFriends( struct cppISteamClient_SteamClient006_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamUtils( struct cppISteamClient_SteamClient006_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamBilling( struct cppISteamClient_SteamClient006_GetISteamBilling_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamBilling( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamMatchmaking( struct cppISteamClient_SteamClient006_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamApps( struct cppISteamClient_SteamClient006_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamContentServer( struct cppISteamClient_SteamClient006_GetISteamContentServer_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamContentServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient006_GetISteamMasterServerUpdater_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient006_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient006_RunFrame( struct cppISteamClient_SteamClient006_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient006_GetIPCCallCount( struct cppISteamClient_SteamClient006_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient006 *iface = (struct u_ISteamClient_SteamClient006 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

