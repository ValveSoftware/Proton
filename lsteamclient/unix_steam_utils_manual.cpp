#include "unix_private.h"

#include "cppISteamUtils_SteamUtils002.hpp"
#include "cppISteamUtils_SteamUtils004.hpp"
#include "cppISteamUtils_SteamUtils005.hpp"
#include "cppISteamUtils_SteamUtils006.hpp"
#include "cppISteamUtils_SteamUtils007.hpp"
#include "cppISteamUtils_SteamUtils008.hpp"
#include "cppISteamUtils_SteamUtils009.hpp"
#include "cppISteamUtils_SteamUtils010.hpp"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

/* ISteamUtils_SteamUtils002 */

void cppISteamUtils_SteamUtils002_GetAPICallResult( struct cppISteamUtils_SteamUtils002_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }
}

/* ISteamUtils_SteamUtils004 */

void cppISteamUtils_SteamUtils004_GetAPICallResult( struct cppISteamUtils_SteamUtils004_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }
}

/* ISteamUtils_SteamUtils005 */

void cppISteamUtils_SteamUtils005_GetAPICallResult( struct cppISteamUtils_SteamUtils005_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }
}

/* ISteamUtils_SteamUtils006 */

void cppISteamUtils_SteamUtils006_GetAPICallResult( struct cppISteamUtils_SteamUtils006_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils006 *iface = (struct u_ISteamUtils_SteamUtils006 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }
}

/* ISteamUtils_SteamUtils007 */

void cppISteamUtils_SteamUtils007_GetAPICallResult( struct cppISteamUtils_SteamUtils007_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }
}

/* ISteamUtils_SteamUtils008 */

void cppISteamUtils_SteamUtils008_GetAPICallResult( struct cppISteamUtils_SteamUtils008_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }
}

/* ISteamUtils_SteamUtils009 */

void cppISteamUtils_SteamUtils009_GetAPICallResult( struct cppISteamUtils_SteamUtils009_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils009 *iface = (struct u_ISteamUtils_SteamUtils009 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }
}

/* ISteamUtils_SteamUtils010 */

void cppISteamUtils_SteamUtils010_GetAPICallResult( struct cppISteamUtils_SteamUtils010_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils010 *iface = (struct u_ISteamUtils_SteamUtils010 *)params->linux_side;
    int u_callback_len = params->cubCallback;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->iCallbackExpected, params->pCallback, &u_callback_len )))
    {
        params->_ret = FALSE;
        return;
    }

    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, u_callback, u_callback_len,
                                            params->iCallbackExpected, params->pbFailed );
    if (params->_ret && u_callback != params->pCallback)
    {
        convert_callback_utow( params->iCallbackExpected, u_callback, u_callback_len,
                               params->pCallback, params->cubCallback );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }
}
