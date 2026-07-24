/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers003_CancelServerQuery( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_CancelServerQuery_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers003_CancelServerQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers003 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers003 *)params->u_iface;
    iface->CancelServerQuery( params->hServerQuery );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamMatchmakingServers_SteamMatchMakingServers003_CancelServerQuery( void *args )
{
    struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers003_CancelServerQuery_params *params = (struct wow64_ISteamMatchmakingServers_SteamMatchMakingServers003_CancelServerQuery_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers003 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers003 *)params->u_iface;
    iface->CancelServerQuery( params->hServerQuery );
    return 0;
}
#endif

