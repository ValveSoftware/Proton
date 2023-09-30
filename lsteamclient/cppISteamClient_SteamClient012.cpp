/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient012.h"

struct u_ISteamClient_SteamClient012
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUnifiedMessages*/ * GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamClient_SteamClient012_CreateSteamPipe( struct cppISteamClient_SteamClient012_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
}

void cppISteamClient_SteamClient012_BReleaseSteamPipe( struct cppISteamClient_SteamClient012_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient012_ConnectToGlobalUser( struct cppISteamClient_SteamClient012_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient012_CreateLocalUser( struct cppISteamClient_SteamClient012_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient012_ReleaseUser( struct cppISteamClient_SteamClient012_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient012_GetISteamUser( struct cppISteamClient_SteamClient012_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamGameServer( struct cppISteamClient_SteamClient012_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_SetLocalIPBinding( struct cppISteamClient_SteamClient012_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient012_GetISteamFriends( struct cppISteamClient_SteamClient012_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamUtils( struct cppISteamClient_SteamClient012_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamMatchmaking( struct cppISteamClient_SteamClient012_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient012_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamGenericInterface( struct cppISteamClient_SteamClient012_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamUserStats( struct cppISteamClient_SteamClient012_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamGameServerStats( struct cppISteamClient_SteamClient012_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamApps( struct cppISteamClient_SteamClient012_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamNetworking( struct cppISteamClient_SteamClient012_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamRemoteStorage( struct cppISteamClient_SteamClient012_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamScreenshots( struct cppISteamClient_SteamClient012_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_RunFrame( struct cppISteamClient_SteamClient012_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient012_GetIPCCallCount( struct cppISteamClient_SteamClient012_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient012_SetWarningMessageHook( struct cppISteamClient_SteamClient012_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
}

void cppISteamClient_SteamClient012_GetISteamHTTP( struct cppISteamClient_SteamClient012_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient012_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamController( struct cppISteamClient_SteamClient012_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient012_GetISteamUGC( struct cppISteamClient_SteamClient012_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient012 *iface = (struct u_ISteamClient_SteamClient012 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

