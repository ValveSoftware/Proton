/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params *params )
{
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    iface->DestroyFakeUDPPort(  );
}

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

