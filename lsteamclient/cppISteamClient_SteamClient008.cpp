/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient008.h"

struct u_ISteamClient_SteamClient008
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
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
#endif /* __cplusplus */
};

void cppISteamClient_SteamClient008_CreateSteamPipe( struct cppISteamClient_SteamClient008_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient008_BReleaseSteamPipe( struct cppISteamClient_SteamClient008_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient008_ConnectToGlobalUser( struct cppISteamClient_SteamClient008_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient008_CreateLocalUser( struct cppISteamClient_SteamClient008_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient008_ReleaseUser( struct cppISteamClient_SteamClient008_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient008_GetISteamUser( struct cppISteamClient_SteamClient008_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamGameServer( struct cppISteamClient_SteamClient008_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_SetLocalIPBinding( struct cppISteamClient_SteamClient008_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient008_GetISteamFriends( struct cppISteamClient_SteamClient008_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamUtils( struct cppISteamClient_SteamClient008_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamMatchmaking( struct cppISteamClient_SteamClient008_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient008_GetISteamMasterServerUpdater_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient008_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamGenericInterface( struct cppISteamClient_SteamClient008_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamUserStats( struct cppISteamClient_SteamClient008_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamApps( struct cppISteamClient_SteamClient008_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamNetworking( struct cppISteamClient_SteamClient008_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_GetISteamRemoteStorage( struct cppISteamClient_SteamClient008_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient008_RunFrame( struct cppISteamClient_SteamClient008_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient008_GetIPCCallCount( struct cppISteamClient_SteamClient008_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient008_SetWarningMessageHook( struct cppISteamClient_SteamClient008_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient008 *iface = (struct u_ISteamClient_SteamClient008 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

