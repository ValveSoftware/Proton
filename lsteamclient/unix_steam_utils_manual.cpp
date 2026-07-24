#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

template< typename Iface, typename Params >
static NTSTATUS ISteamUtils_GetAPICallResult( Iface *iface, Params *params, bool wow64 )
{
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len, wow64 )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback, wow64 );
        free( u_callback );
    }

    return 0;
}

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils002, GetAPICallResult );

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils004, GetAPICallResult );

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils005, GetAPICallResult );

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils006, GetAPICallResult );

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils007, GetAPICallResult );

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils008, GetAPICallResult );

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils009, GetAPICallResult );

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils010, GetAPICallResult );

LSTEAMCLIENT_UNIX_IMPL( ISteamUtils, SteamUtils011, GetAPICallResult );
