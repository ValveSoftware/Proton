#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_157/steam_api.h"
#include "steamworks_sdk_157/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_157
#include "struct_converters.h"
#include "cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001.h"
void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount_params *params )
{
    params->_ret = ((ISteamRemotePlay*)params->linux_side)->GetSessionCount(  );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID_params *params )
{
    params->_ret = ((ISteamRemotePlay*)params->linux_side)->GetSessionID( (int)params->iSessionIndex );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID_params *params )
{
    *params->_ret = ((ISteamRemotePlay*)params->linux_side)->GetSessionSteamID( (RemotePlaySessionID_t)params->unSessionID );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName_params *params )
{
    params->_ret = ((ISteamRemotePlay*)params->linux_side)->GetSessionClientName( (RemotePlaySessionID_t)params->unSessionID );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor_params *params )
{
    params->_ret = ((ISteamRemotePlay*)params->linux_side)->GetSessionClientFormFactor( (RemotePlaySessionID_t)params->unSessionID );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution_params *params )
{
    params->_ret = ((ISteamRemotePlay*)params->linux_side)->BGetSessionClientResolution( (RemotePlaySessionID_t)params->unSessionID, (int *)params->pnResolutionX, (int *)params->pnResolutionY );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite_params *params )
{
    params->_ret = ((ISteamRemotePlay*)params->linux_side)->BSendRemotePlayTogetherInvite( (CSteamID)params->steamIDFriend );
}

#ifdef __cplusplus
}
#endif
