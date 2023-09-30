/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001.h"

struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t GetSessionCount(  ) = 0;
    virtual uint32_t GetSessionID( int32_t ) = 0;
    virtual CSteamID GetSessionSteamID( uint32_t ) = 0;
    virtual const char * GetSessionClientName( uint32_t ) = 0;
    virtual uint32_t GetSessionClientFormFactor( uint32_t ) = 0;
    virtual bool BGetSessionClientResolution( uint32_t, int32_t *, int32_t * ) = 0;
    virtual bool BSendRemotePlayTogetherInvite( CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount_params *params )
{
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetSessionCount(  );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID_params *params )
{
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetSessionID( params->iSessionIndex );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID_params *params )
{
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    *params->_ret = iface->GetSessionSteamID( params->unSessionID );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName_params *params )
{
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetSessionClientName( params->unSessionID );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor_params *params )
{
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetSessionClientFormFactor( params->unSessionID );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution_params *params )
{
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BGetSessionClientResolution( params->unSessionID, params->pnResolutionX, params->pnResolutionY );
}

void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite_params *params )
{
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->BSendRemotePlayTogetherInvite( params->steamIDFriend );
}

