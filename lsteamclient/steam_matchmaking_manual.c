#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery(struct w_iface *_this, uint32_t eType)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery_params params =
    {
        .u_iface = _this->u_iface,
        .eType = eType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery, &params );
    execute_pending_callbacks();
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( struct w_iface *_this, uint32_t iApp, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(struct w_iface *_this, void *hRequest)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params params =
    {
        .u_iface = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery, &params );
    execute_pending_callbacks();
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( struct w_iface *_this, void *hServerListRequest )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params params =
    {
        .u_iface = _this->u_iface,
        .hServerListRequest = hServerListRequest,
    };
    struct w_request *request = hServerListRequest;

    TRACE( "%p %p\n", _this, hServerListRequest );
    execute_pending_callbacks(); /* execute any pending callbacks that might still need to use the request */

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest, &params );

    if (request) HeapFree( GetProcessHeap(), 0, request->details );
    HeapFree( GetProcessHeap(), 0, request );
}

gameserveritem_t_105 * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails( struct w_iface *_this, void *hRequest, int32_t iServer )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params params =
    {
        .u_iface = _this->u_iface,
        .hRequest = hRequest,
        .iServer = iServer,
    };
    struct w_request *request = hRequest;

    TRACE( "%p\n", _this );

    if (request && !request->details)
    {
        struct ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params count_params =
        {
            .u_iface = _this->u_iface,
            .hRequest = hRequest,
        };

        STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount, &count_params );
        request->details_count = count_params._ret;
        if (count_params._ret) request->details = HeapAlloc( GetProcessHeap(), 0,
                                                             (count_params._ret + 1) * sizeof(*request->details) );
    }
    if (request && request->details && (iServer < 0 || iServer >= request->details_count))
    {
        /* Linux Steamclient will return some pointer in such a case with the structure being all zero. */
        ERR( "Invalid iServer %d, request->details_count %I64u.\n", iServer, request->details_count );
        memset( request->details + request->details_count, 0, sizeof(*request->details) );
        /* request->details is array of the latest gameserveritem_t version but so far the newer structures only
         * have added fields in the end. */
        return (gameserveritem_t_105 *)(request->details + request->details_count);
    }

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails, &params );
    /* request->details is array of the latest gameserveritem_t version but so far the newer structures only
     * have added fields in the end. */
    if (request && request->details && params._ret.ptr) return (gameserveritem_t_105 *)(request->details + iServer);
    return get_unix_buffer( params._ret );
}

/* SteamMatchMakingServers003 */
void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_RequestInternetServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_RequestInternetServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_RequestInternetServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_RequestLANServerList( struct w_iface *_this, uint32_t iApp, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_RequestLANServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_RequestLANServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_RequestFriendsServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_RequestFriendsServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_RequestFriendsServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_RequestFavoritesServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_RequestFavoritesServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_RequestFavoritesServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_RequestHistoryServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_RequestHistoryServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_RequestHistoryServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_RequestSpectatorServerList( struct w_iface *_this, uint32_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32_t nFilters, w_ISteamMatchmakingServerListResponse_106 *pRequestServersResponse )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_RequestSpectatorServerList_params params =
    {
        .u_iface = _this->u_iface,
        .iApp = iApp,
        .ppchFilters = ppchFilters,
        .nFilters = nFilters,
        .pRequestServersResponse = pRequestServersResponse,
    };
    struct w_request *request;

    TRACE( "%p\n", _this );

    if (!(request = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*request) ))) return NULL;
    params._ret = request;

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_RequestSpectatorServerList, &params );
    if (!request->u_request.handle)
    {
        HeapFree( GetProcessHeap(), 0, request );
        return NULL;
    }

    return request;
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_CancelQuery(struct w_iface *_this, void *hRequest)
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_CancelQuery_params params =
    {
        .u_iface = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_CancelQuery, &params );
    execute_pending_callbacks();
}

void __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_ReleaseRequest( struct w_iface *_this, void *hServerListRequest )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_ReleaseRequest_params params =
    {
        .u_iface = _this->u_iface,
        .hServerListRequest = hServerListRequest,
    };
    struct w_request *request = hServerListRequest;

    TRACE( "%p %p\n", _this, hServerListRequest );
    execute_pending_callbacks(); /* execute any pending callbacks that might still need to use the request */

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_ReleaseRequest, &params );

    if (request) HeapFree( GetProcessHeap(), 0, request->details );
    HeapFree( GetProcessHeap(), 0, request );
}

gameserveritem_t_105 * __thiscall winISteamMatchmakingServers_SteamMatchMakingServers003_GetServerDetails( struct w_iface *_this, void *hRequest, int32_t iServer )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers003_GetServerDetails_params params =
    {
        .u_iface = _this->u_iface,
        .hRequest = hRequest,
        .iServer = iServer,
    };
    struct w_request *request = hRequest;

    TRACE( "%p\n", _this );

    if (request && !request->details)
    {
        struct ISteamMatchmakingServers_SteamMatchMakingServers003_GetServerCount_params count_params =
        {
            .u_iface = _this->u_iface,
            .hRequest = hRequest,
        };

        STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_GetServerCount, &count_params );
        request->details_count = count_params._ret;
        if (count_params._ret) request->details = HeapAlloc( GetProcessHeap(), 0,
                                                             (count_params._ret + 1) * sizeof(*request->details) );
    }
    if (request && request->details && (iServer < 0 || iServer >= request->details_count))
    {
        /* Linux Steamclient will return some pointer in such a case with the structure being all zero. */
        ERR( "Invalid iServer %d, request->details_count %I64u.\n", iServer, request->details_count );
        memset( request->details + request->details_count, 0, sizeof(*request->details) );
        /* request->details is array of the latest gameserveritem_t version but so far the newer structures only
         * have added fields in the end. */
        return (gameserveritem_t_105 *)(request->details + request->details_count);
    }

    STEAMCLIENT_CALL( ISteamMatchmakingServers_SteamMatchMakingServers003_GetServerDetails, &params );
    /* request->details is array of the latest gameserveritem_t version but so far the newer structures only
     * have added fields in the end. */
    if (request && request->details && params._ret.ptr) return (gameserveritem_t_105 *)(request->details + iServer);
    return get_unix_buffer( params._ret );
}
