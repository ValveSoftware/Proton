#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamClient_SteamClient007.h"

struct cppISteamClient_SteamClient007
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t * ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamContentServer*/ * GetISteamContentServer( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMasterServerUpdater*/ * GetISteamMasterServerUpdater( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void SetWarningMessageHook( void (*)(int32_t, const char *) ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamClient_SteamClient007_CreateSteamPipe( struct cppISteamClient_SteamClient007_CreateSteamPipe_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient007_BReleaseSteamPipe( struct cppISteamClient_SteamClient007_BReleaseSteamPipe_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient007_ConnectToGlobalUser( struct cppISteamClient_SteamClient007_ConnectToGlobalUser_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient007_CreateLocalUser( struct cppISteamClient_SteamClient007_CreateLocalUser_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe );
}

void cppISteamClient_SteamClient007_ReleaseUser( struct cppISteamClient_SteamClient007_ReleaseUser_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient007_GetISteamUser( struct cppISteamClient_SteamClient007_GetISteamUser_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamGameServer( struct cppISteamClient_SteamClient007_GetISteamGameServer_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_SetLocalIPBinding( struct cppISteamClient_SteamClient007_SetLocalIPBinding_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient007_GetISteamFriends( struct cppISteamClient_SteamClient007_GetISteamFriends_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamUtils( struct cppISteamClient_SteamClient007_GetISteamUtils_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamMatchmaking( struct cppISteamClient_SteamClient007_GetISteamMatchmaking_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamContentServer( struct cppISteamClient_SteamClient007_GetISteamContentServer_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamContentServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient007_GetISteamMasterServerUpdater_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMasterServerUpdater( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient007_GetISteamMatchmakingServers_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamGenericInterface( struct cppISteamClient_SteamClient007_GetISteamGenericInterface_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_RunFrame( struct cppISteamClient_SteamClient007_RunFrame_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient007_GetIPCCallCount( struct cppISteamClient_SteamClient007_GetIPCCallCount_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient007_GetISteamUserStats( struct cppISteamClient_SteamClient007_GetISteamUserStats_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamApps( struct cppISteamClient_SteamClient007_GetISteamApps_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_GetISteamNetworking( struct cppISteamClient_SteamClient007_GetISteamNetworking_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient007_SetWarningMessageHook( struct cppISteamClient_SteamClient007_SetWarningMessageHook_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    void (*U_CDECL lin_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( lin_pFunction );
}

void cppISteamClient_SteamClient007_GetISteamRemoteStorage( struct cppISteamClient_SteamClient007_GetISteamRemoteStorage_params *params )
{
    struct cppISteamClient_SteamClient007 *iface = (struct cppISteamClient_SteamClient007 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

#ifdef __cplusplus
}
#endif
