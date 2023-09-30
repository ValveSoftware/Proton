/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetSessionCount(  );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetSessionID( params->iSessionIndex );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    *params->_ret = iface->GetSessionSteamID( params->unSessionID );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetSessionClientName( params->unSessionID );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetSessionClientFormFactor( params->unSessionID );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BGetSessionClientResolution( params->unSessionID, params->pnResolutionX, params->pnResolutionY );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BSendRemotePlayTogetherInvite( params->steamIDFriend );
    return 0;
}

