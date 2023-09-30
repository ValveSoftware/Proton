/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamClient_SteamClient018.h"

struct u_ISteamClient_SteamClient018
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
    virtual void /*ISteamGameSearch*/ * GetISteamGameSearch( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void * DEPRECATED_GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusicRemote*/ * GetISteamMusicRemote( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamHTMLSurface*/ * GetISteamHTMLSurface( int32_t, int32_t, const char * ) = 0;
    virtual void DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void (*U_STDCALL )(void) ) = 0;
    virtual void Set_SteamAPI_CCheckCallbackRegisteredInProcess( uint32_t (*U_STDCALL )(int32_t) ) = 0;
    virtual void /*ISteamInventory*/ * GetISteamInventory( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamVideo*/ * GetISteamVideo( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParentalSettings*/ * GetISteamParentalSettings( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamInput*/ * GetISteamInput( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamParties*/ * GetISteamParties( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamClient_SteamClient018_CreateSteamPipe( struct cppISteamClient_SteamClient018_CreateSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient018_BReleaseSteamPipe( struct cppISteamClient_SteamClient018_BReleaseSteamPipe_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient018_ConnectToGlobalUser( struct cppISteamClient_SteamClient018_ConnectToGlobalUser_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient018_CreateLocalUser( struct cppISteamClient_SteamClient018_CreateLocalUser_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient018_ReleaseUser( struct cppISteamClient_SteamClient018_ReleaseUser_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient018_GetISteamUser( struct cppISteamClient_SteamClient018_GetISteamUser_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameServer( struct cppISteamClient_SteamClient018_GetISteamGameServer_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_SetLocalIPBinding( struct cppISteamClient_SteamClient018_SetLocalIPBinding_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient018_GetISteamFriends( struct cppISteamClient_SteamClient018_GetISteamFriends_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUtils( struct cppISteamClient_SteamClient018_GetISteamUtils_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMatchmaking( struct cppISteamClient_SteamClient018_GetISteamMatchmaking_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient018_GetISteamMatchmakingServers_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGenericInterface( struct cppISteamClient_SteamClient018_GetISteamGenericInterface_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUserStats( struct cppISteamClient_SteamClient018_GetISteamUserStats_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameServerStats( struct cppISteamClient_SteamClient018_GetISteamGameServerStats_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamApps( struct cppISteamClient_SteamClient018_GetISteamApps_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamNetworking( struct cppISteamClient_SteamClient018_GetISteamNetworking_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamRemoteStorage( struct cppISteamClient_SteamClient018_GetISteamRemoteStorage_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamScreenshots( struct cppISteamClient_SteamClient018_GetISteamScreenshots_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamGameSearch( struct cppISteamClient_SteamClient018_GetISteamGameSearch_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamGameSearch( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_RunFrame( struct cppISteamClient_SteamClient018_RunFrame_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient018_GetIPCCallCount( struct cppISteamClient_SteamClient018_GetIPCCallCount_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient018_SetWarningMessageHook( struct cppISteamClient_SteamClient018_SetWarningMessageHook_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient018_GetISteamHTTP( struct cppISteamClient_SteamClient018_GetISteamHTTP_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->DEPRECATED_GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamController( struct cppISteamClient_SteamClient018_GetISteamController_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamUGC( struct cppISteamClient_SteamClient018_GetISteamUGC_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamAppList( struct cppISteamClient_SteamClient018_GetISteamAppList_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMusic( struct cppISteamClient_SteamClient018_GetISteamMusic_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamMusicRemote( struct cppISteamClient_SteamClient018_GetISteamMusicRemote_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamHTMLSurface( struct cppISteamClient_SteamClient018_GetISteamHTMLSurface_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    void (*U_STDCALL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
}

void cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( struct cppISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    void (*U_STDCALL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
}

void cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess( struct cppISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    uint32_t (*U_STDCALL u_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( u_func );
}

void cppISteamClient_SteamClient018_GetISteamInventory( struct cppISteamClient_SteamClient018_GetISteamInventory_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamVideo( struct cppISteamClient_SteamClient018_GetISteamVideo_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamParentalSettings( struct cppISteamClient_SteamClient018_GetISteamParentalSettings_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamInput( struct cppISteamClient_SteamClient018_GetISteamInput_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient018_GetISteamParties( struct cppISteamClient_SteamClient018_GetISteamParties_params *params )
{
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->linux_side;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

