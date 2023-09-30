/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"

struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001
{
#ifdef __cplusplus
    virtual void DestroyFakeUDPPort(  ) = 0;
    virtual uint32_t SendMessageToFakeIP( const SteamNetworkingIPAddr *, const void *, uint32_t, int32_t ) = 0;
    virtual int32_t ReceiveMessages( u_SteamNetworkingMessage_t_153a **, int32_t ) = 0;
    virtual void ScheduleCleanup( const SteamNetworkingIPAddr * ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params *params )
{
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    params->_ret = iface->SendMessageToFakeIP( params->remoteAddress, params->pData, params->cbData, params->nSendFlags );
}

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params *params )
{
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    iface->ScheduleCleanup( params->remoteAddress );
}

