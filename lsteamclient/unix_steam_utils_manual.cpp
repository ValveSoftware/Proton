#include "unix_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

/* ISteamUtils_SteamUtils002 */

NTSTATUS ISteamUtils_SteamUtils002_GetAPICallResult( void *args )
{
    struct ISteamUtils_SteamUtils002_GetAPICallResult_params *params = (struct ISteamUtils_SteamUtils002_GetAPICallResult_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}

/* ISteamUtils_SteamUtils004 */

NTSTATUS ISteamUtils_SteamUtils004_GetAPICallResult( void *args )
{
    struct ISteamUtils_SteamUtils004_GetAPICallResult_params *params = (struct ISteamUtils_SteamUtils004_GetAPICallResult_params *)args;
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}

/* ISteamUtils_SteamUtils005 */

NTSTATUS ISteamUtils_SteamUtils005_GetAPICallResult( void *args )
{
    struct ISteamUtils_SteamUtils005_GetAPICallResult_params *params = (struct ISteamUtils_SteamUtils005_GetAPICallResult_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}

/* ISteamUtils_SteamUtils006 */

NTSTATUS ISteamUtils_SteamUtils006_GetAPICallResult( void *args )
{
    struct ISteamUtils_SteamUtils006_GetAPICallResult_params *params = (struct ISteamUtils_SteamUtils006_GetAPICallResult_params *)args;
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}

/* ISteamUtils_SteamUtils007 */

NTSTATUS ISteamUtils_SteamUtils007_GetAPICallResult( void *args )
{
    struct ISteamUtils_SteamUtils007_GetAPICallResult_params *params = (struct ISteamUtils_SteamUtils007_GetAPICallResult_params *)args;
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}

/* ISteamUtils_SteamUtils008 */

NTSTATUS ISteamUtils_SteamUtils008_GetAPICallResult( void *args )
{
    struct ISteamUtils_SteamUtils008_GetAPICallResult_params *params = (struct ISteamUtils_SteamUtils008_GetAPICallResult_params *)args;
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}

/* ISteamUtils_SteamUtils009 */

NTSTATUS ISteamUtils_SteamUtils009_GetAPICallResult( void *args )
{
    struct ISteamUtils_SteamUtils009_GetAPICallResult_params *params = (struct ISteamUtils_SteamUtils009_GetAPICallResult_params *)args;
    struct u_ISteamUtils_SteamUtils009 *iface = (struct u_ISteamUtils_SteamUtils009 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}

/* ISteamUtils_SteamUtils010 */

NTSTATUS ISteamUtils_SteamUtils010_GetAPICallResult( void *args )
{
    struct ISteamUtils_SteamUtils010_GetAPICallResult_params *params = (struct ISteamUtils_SteamUtils010_GetAPICallResult_params *)args;
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return 0;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}
