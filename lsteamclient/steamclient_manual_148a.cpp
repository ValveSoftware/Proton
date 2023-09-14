extern "C" {
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);
}

#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "steamworks_sdk_148a/steam_api.h"
#include "steamworks_sdk_148a/isteamnetworkingsockets.h"
#include "steamworks_sdk_148a/isteamnetworkingutils.h"
#include "steamworks_sdk_148a/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_148a
#include "struct_converters.h"

#define SDK_VERSION 1481
#include "steamclient_manual_common.h"

typedef winSteamNetworkingMessage_t_148a winSteamNetworkingMessage_t_149;
typedef winSteamNetworkingMessage_t_148a winSteamNetworkingMessage_t_152;
#include "cppISteamNetworkingSockets_SteamNetworkingSockets008.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils003.h"
}

void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *params )
{
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *params )
{
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *params )
{
#define MAX_SEND_MESSAGES 64
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    /* use the stack to avoid heap allocation */
    struct SteamNetworkingMessage_t *lin_msgs[MAX_SEND_MESSAGES];
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
            lin_msgs[i] = (SteamNetworkingMessage_t *)network_message_win_to_lin( params->pMessages[i] );

        iface->SendMessages( i, lin_msgs, (int64 *)params->pOutMessageNumberOrResult );

        params->nMessages -= i;
        params->pMessages += i;
        if (params->pOutMessageNumberOrResult) params->pOutMessageNumberOrResult += i;
    }
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *params )
{
    ISteamNetworkingUtils *iface = (ISteamNetworkingUtils *)params->linux_side;
    params->_ret = (winSteamNetworkingMessage_t_148a *)iface->AllocateMessage( params->cbAllocateBuffer );
    params->_ret = (winSteamNetworkingMessage_t_148a *)network_message_lin_to_win( params->_ret );
}
