#include "unix_private.h"

extern "C"
{
#define SDK_VERSION 1481
#include "steamclient_manual_common.h"
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets008.hpp"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, u_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, u_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *params )
{
#define MAX_SEND_MESSAGES 64
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    /* use the stack to avoid heap allocation */
    u_SteamNetworkingMessage_t_147 *u_msgs[MAX_SEND_MESSAGES];
    int i;

    if (params->nMessages > MAX_SEND_MESSAGES)
    {
        /* if we ever hit this, increase MAX_SEND_MESSAGES appropriately */
        FIXME( "Trying to send %u messages, which is more than %u! Will break up into pieces.\n",
               params->nMessages, MAX_SEND_MESSAGES );
    }

    while (params->nMessages)
    {
        for (i = 0; i < params->nMessages && i < MAX_SEND_MESSAGES; ++i)
            u_msgs[i] = (u_SteamNetworkingMessage_t_147 *)network_message_win_to_lin( params->pMessages[i] );

        iface->SendMessages( i, u_msgs, params->pOutMessageNumberOrResult );

        params->nMessages -= i;
        params->pMessages += i;
        if (params->pOutMessageNumberOrResult) params->pOutMessageNumberOrResult += i;
    }
}
