/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( void *args )
{
    struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params *params = (struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params *)args;
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    iface->DestroyFakeUDPPort(  );
    return 0;
}

NTSTATUS ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP( void *args )
{
    struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params *params = (struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params *)args;
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    params->_ret = iface->SendMessageToFakeIP( params->remoteAddress, params->pData, params->cbData, params->nSendFlags );
    return 0;
}

NTSTATUS ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup( void *args )
{
    struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params *params = (struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params *)args;
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    iface->ScheduleCleanup( params->remoteAddress );
    return 0;
}

