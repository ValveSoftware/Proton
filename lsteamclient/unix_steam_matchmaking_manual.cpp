#if 0
#pragma makedep unix
#endif

#include "unix_private.h"

#include <unordered_map>

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

template <typename T> void free_callback_obj(T *obj)
{
    obj->w_iface = (struct w_iface *)0xdeadbeef;
    *(void **)obj = (void *)0xdeadbeef;
    delete obj;
}

struct SteamMatchmakingServerListResponse_099u : u_ISteamMatchmakingServerListResponse_099u
{
    struct w_iface *w_iface;
    virtual void ServerResponded( int32_t );
    virtual void ServerFailedToRespond( int32_t );
    virtual void RefreshComplete( uint32_t );
};

void SteamMatchmakingServerListResponse_099u::ServerResponded( int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_0_1, (intptr_t)iServer, 0 );
}

void SteamMatchmakingServerListResponse_099u::ServerFailedToRespond( int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_1, (intptr_t)iServer, 0 );
}

void SteamMatchmakingServerListResponse_099u::RefreshComplete( uint32_t response )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_1, (intptr_t)response, 0 );
    TRACE( "RefreshComplete this %p, w_iface %p.\n", this, this->w_iface );
}

u_ISteamMatchmakingServerListResponse_099u *create_LinuxISteamMatchmakingServerListResponse_099u( void *win )
{
    SteamMatchmakingServerListResponse_099u *ret;

    if (!win) return NULL;

    if (!(ret = new SteamMatchmakingServerListResponse_099u())) return NULL;
    ret->w_iface = (struct w_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}

struct SteamMatchmakingServerListResponse_106 : u_ISteamMatchmakingServerListResponse_106
{
    struct w_iface *w_iface;
    struct w_request *w_request;

    SteamMatchmakingServerListResponse_106( w_ISteamMatchmakingServerListResponse_106 *w_iface, void *w_request );
    virtual void ServerResponded( void *, int32_t );
    virtual void ServerFailedToRespond( void *, int32_t );
    virtual void RefreshComplete( void *, uint32_t );
};

SteamMatchmakingServerListResponse_106::SteamMatchmakingServerListResponse_106( w_ISteamMatchmakingServerListResponse_106 *w_iface, void *w_request )
    : w_iface( (struct w_iface *)w_iface ), w_request( (struct w_request *)w_request )
{
    TRACE( "%p, %p -> %p\n", w_iface, w_request, this );
}

void SteamMatchmakingServerListResponse_106::ServerResponded( void *hRequest, int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_0_2, (intptr_t)this->w_request, (intptr_t)iServer );
}

void SteamMatchmakingServerListResponse_106::ServerFailedToRespond( void *hRequest, int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_2, (intptr_t)this->w_request, (intptr_t)iServer );
}

void SteamMatchmakingServerListResponse_106::RefreshComplete( void *hRequest, uint32_t response )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_2, (intptr_t)this->w_request, (intptr_t)response );
    TRACE( "RefreshComplete this %p, w_iface %p.\n", this, this->w_iface );
}

struct SteamMatchmakingPingResponse : u_ISteamMatchmakingPingResponse
{
    struct w_iface *w_iface;
    virtual void ServerResponded( gameserveritem_t_165 * );
    virtual void ServerFailedToRespond(  );
};

void SteamMatchmakingPingResponse::ServerResponded( gameserveritem_t_165 *server )
{
    queue_vtable_callback_0_server_responded( this->w_iface, server );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

void SteamMatchmakingPingResponse::ServerFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

struct u_ISteamMatchmakingPingResponse *create_LinuxISteamMatchmakingPingResponse( void *win )
{
    SteamMatchmakingPingResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingPingResponse())) return NULL;
    ret->w_iface = (struct w_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}

struct SteamMatchmakingPlayersResponse : u_ISteamMatchmakingPlayersResponse
{
    struct w_iface *w_iface;
    virtual void AddPlayerToList( const char *, int32_t, float );
    virtual void PlayersFailedToRespond(  );
    virtual void PlayersRefreshComplete(  );
};

void SteamMatchmakingPlayersResponse::AddPlayerToList(const char *pchName, int nScore, float flTimePlayed)
{
    queue_vtable_callback_0_add_player_to_list( this->w_iface, pchName, nScore, flTimePlayed );
}

void SteamMatchmakingPlayersResponse::PlayersFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

void SteamMatchmakingPlayersResponse::PlayersRefreshComplete(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

struct u_ISteamMatchmakingPlayersResponse *create_LinuxISteamMatchmakingPlayersResponse( void *win )
{
    struct SteamMatchmakingPlayersResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingPlayersResponse())) return NULL;
    ret->w_iface = (struct w_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}

struct SteamMatchmakingRulesResponse : u_ISteamMatchmakingRulesResponse
{
    struct w_iface *w_iface;
    virtual void RulesResponded( const char *, const char * );
    virtual void RulesFailedToRespond(  );
    virtual void RulesRefreshComplete(  );
};

void SteamMatchmakingRulesResponse::RulesResponded(const char *pchRule, const char *pchValue)
{
    queue_vtable_callback_0_rules_responded( this->w_iface, pchRule, pchValue );
}

void SteamMatchmakingRulesResponse::RulesFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

void SteamMatchmakingRulesResponse::RulesRefreshComplete(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

struct u_ISteamMatchmakingRulesResponse *create_LinuxISteamMatchmakingRulesResponse( void *win )
{
    SteamMatchmakingRulesResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingRulesResponse())) return NULL;
    ret->w_iface = (struct w_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}


struct SteamMatchmakingServerFriendsResponse : u_ISteamMatchmakingServerFriendsResponse
{
    struct w_iface *w_iface;
    virtual void AddFriendToList( CSteamID steamID, const char *pchName, int8_t bCurrentlyConnected );
    virtual void FriendsFailedToRespond(  );
    virtual void FriendsRefreshComplete(  );
};

void SteamMatchmakingServerFriendsResponse::AddFriendToList( CSteamID steamID, const char *pchName, int8_t bCurrentlyConnected )
{
    queue_vtable_callback_0_friends_responded( this->w_iface, steamID, pchName, bCurrentlyConnected );
}

void SteamMatchmakingServerFriendsResponse::FriendsFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

void SteamMatchmakingServerFriendsResponse::FriendsRefreshComplete(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2_0, 0, 0 );
    TRACE("Deleting this %p, w_iface %p.\n", this, this->w_iface);
    free_callback_obj(this);
}

struct u_ISteamMatchmakingServerFriendsResponse *create_LinuxISteamMatchmakingServerFriendsResponse( void *win )
{
    SteamMatchmakingServerFriendsResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingServerFriendsResponse())) return NULL;
    ret->w_iface = (struct w_iface *)win;

    TRACE("-> %p.\n", ret);
    return ret;
}

template< typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestInternetServerList( u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingServerListResponse_099u *u_response = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    iface->RequestInternetServerList( params->iApp, filters, params->nFilters, u_response );
    if (filters) delete[] filters;

    return 0;
}

template< typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestLANServerList( u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingServerListResponse_099u *u_response = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );
    iface->RequestLANServerList( params->iApp, u_response );
    return 0;
}

template< typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestFriendsServerList( u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingServerListResponse_099u *u_response = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    iface->RequestFriendsServerList( params->iApp, filters, params->nFilters, u_response );
    if (filters) delete[] filters;

    return 0;
}

template< typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestFavoritesServerList( u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingServerListResponse_099u *u_response = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    iface->RequestFavoritesServerList( params->iApp, filters, params->nFilters, u_response );
    if (filters) delete[] filters;

    return 0;
}

template< typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestHistoryServerList( u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingServerListResponse_099u *u_response = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    iface->RequestHistoryServerList( params->iApp, filters, params->nFilters, u_response );
    if (filters) delete[] filters;

    return 0;
}

template< typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestSpectatorServerList( u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingServerListResponse_099u *u_response = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    iface->RequestSpectatorServerList( params->iApp, filters, params->nFilters, u_response );
    if (filters) delete[] filters;

    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestInternetServerList( Iface *iface, Params *params, bool wow64 )
{
    auto w_response = params->pRequestServersResponse;
    SteamMatchmakingServerListResponse_106 *u_response = new SteamMatchmakingServerListResponse_106( w_response, params->_ret );
    struct w_request *w_request = u_response->w_request;

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    w_request->u_request = iface->RequestInternetServerList( params->iApp, filters, params->nFilters, w_response ? u_response : nullptr );
    if (filters) delete[] filters;

    if (!w_request->u_request) delete u_response;
    else w_request->u_response = u_response;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestLANServerList( Iface *iface, Params *params, bool wow64 )
{
    auto w_response = params->pRequestServersResponse;
    SteamMatchmakingServerListResponse_106 *u_response = new SteamMatchmakingServerListResponse_106( w_response, params->_ret );
    struct w_request *w_request = u_response->w_request;
    w_request->u_request = iface->RequestLANServerList( params->iApp, w_response ? u_response : nullptr );
    if (!w_request->u_request) delete u_response;
    else w_request->u_response = u_response;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestFriendsServerList( Iface *iface, Params *params, bool wow64 )
{
    auto w_response = params->pRequestServersResponse;
    SteamMatchmakingServerListResponse_106 *u_response = new SteamMatchmakingServerListResponse_106( w_response, params->_ret );
    struct w_request *w_request = u_response->w_request;

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    w_request->u_request = iface->RequestFriendsServerList( params->iApp, filters, params->nFilters, w_response ? u_response : nullptr );
    if (filters) delete[] filters;

    if (!w_request->u_request) delete u_response;
    else w_request->u_response = u_response;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestFavoritesServerList( Iface *iface, Params *params, bool wow64 )
{
    auto w_response = params->pRequestServersResponse;
    SteamMatchmakingServerListResponse_106 *u_response = new SteamMatchmakingServerListResponse_106( w_response, params->_ret );
    struct w_request *w_request = u_response->w_request;

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    w_request->u_request = iface->RequestFavoritesServerList( params->iApp, filters, params->nFilters, w_response ? u_response : nullptr );
    if (filters) delete[] filters;

    if (!w_request->u_request) delete u_response;
    else w_request->u_response = u_response;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestHistoryServerList( Iface *iface, Params *params, bool wow64 )
{
    auto w_response = params->pRequestServersResponse;
    SteamMatchmakingServerListResponse_106 *u_response = new SteamMatchmakingServerListResponse_106( w_response, params->_ret );
    struct w_request *w_request = u_response->w_request;

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    w_request->u_request = iface->RequestHistoryServerList( params->iApp, filters, params->nFilters, w_response ? u_response : nullptr );
    delete[] filters;

    if (!w_request->u_request) delete u_response;
    else w_request->u_response = u_response;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_RequestSpectatorServerList( Iface *iface, Params *params, bool wow64 )
{
    auto w_response = params->pRequestServersResponse;
    SteamMatchmakingServerListResponse_106 *u_response = new SteamMatchmakingServerListResponse_106( w_response, params->_ret );
    struct w_request *w_request = u_response->w_request;

    MatchMakingKeyValuePair_t **filters = params->ppchFilters ? new MatchMakingKeyValuePair_t *[params->nFilters] : nullptr;
    for (int i = 0; filters && i < params->nFilters; i++) filters[i] = params->ppchFilters[i];
    w_request->u_request = iface->RequestSpectatorServerList( params->iApp, filters, params->nFilters, w_response ? u_response : nullptr );
    delete[] filters;

    if (!w_request->u_request) delete u_response;
    else w_request->u_response = u_response;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_PingServer( Iface *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingPingResponse *u_response = create_LinuxISteamMatchmakingPingResponse( params->pRequestServersResponse );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_response );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_PlayerDetails( Iface *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingPlayersResponse *u_response = create_LinuxISteamMatchmakingPlayersResponse( params->pRequestServersResponse );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_response );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_ServerFriends( Iface *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingServerFriendsResponse *u_response = create_LinuxISteamMatchmakingServerFriendsResponse( params->pRequestServersResponse );
    params->_ret = iface->ServerFriends( params->unIP, params->usPort, u_response );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_ServerRules( Iface *iface, Params *params, bool wow64 )
{
    u_ISteamMatchmakingRulesResponse *u_response = create_LinuxISteamMatchmakingRulesResponse( params->pRequestServersResponse );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_response );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_ReleaseRequest( Iface *iface, Params *params, bool wow64 )
{
    struct w_request *w_request = (struct w_request *)(void *)params->hServerListRequest;
    iface->ReleaseRequest( w_request ? (void *)w_request->u_request : nullptr );
    if (w_request) free_callback_obj( (SteamMatchmakingServerListResponse_106 *)w_request->u_response );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_GetServerDetails( Iface *iface, Params *params, bool wow64 )
{
    struct w_request *w_request = (struct w_request *)(void *)params->hRequest;
    auto *item = iface->GetServerDetails( w_request ? (void *)w_request->u_request : nullptr, params->iServer );
    if (w_request && w_request->details)
    {
        /* request->details is array of the latest gameserveritem_t version but so far the newer structures only
         * have added fields in the end. */
        memset( &w_request->details[params->iServer], 0, sizeof(w_request->details[params->iServer]) );
        memcpy( &w_request->details[params->iServer], item, sizeof(*item) );
    }
    params->_ret = item;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_CancelQuery( Iface *iface, Params *params, bool wow64 )
{
    struct w_request *w_request = (struct w_request *)(void *)params->hRequest;
    iface->CancelQuery( w_request ? (void *)w_request->u_request : nullptr );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_RefreshQuery( Iface *iface, Params *params, bool wow64 )
{
    struct w_request *w_request = (struct w_request *)(void *)params->hRequest;
    iface->RefreshQuery( w_request ? (void *)w_request->u_request : nullptr );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_IsRefreshing( Iface *iface, Params *params, bool wow64 )
{
    struct w_request *w_request = (struct w_request *)(void *)params->hRequest;
    params->_ret = iface->IsRefreshing( w_request ? (void *)w_request->u_request : nullptr );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_GetServerCount( Iface *iface, Params *params, bool wow64 )
{
    struct w_request *w_request = (struct w_request *)(void *)params->hRequest;
    params->_ret = iface->GetServerCount( w_request ? (void *)w_request->u_request : nullptr );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamMatchmakingServers_RefreshServer( Iface *iface, Params *params, bool wow64 )
{
    struct w_request *w_request = (struct w_request *)(void *)params->hRequest;
    iface->RefreshServer( w_request ? (void *)w_request->u_request : nullptr, params->iServer );
    return 0;
}

LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, RequestInternetServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, RequestLANServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, RequestFriendsServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, RequestFavoritesServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, RequestHistoryServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, RequestSpectatorServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, PingServer );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, PlayerDetails );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers001, ServerRules );

LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, RequestInternetServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, RequestLANServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, RequestFriendsServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, RequestFavoritesServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, RequestHistoryServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, RequestSpectatorServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, PingServer );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, PlayerDetails );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, ServerRules );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, ReleaseRequest );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, GetServerDetails );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, CancelQuery );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, RefreshQuery );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, IsRefreshing );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, GetServerCount );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers002, RefreshServer );

LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, RequestInternetServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, RequestLANServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, RequestFriendsServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, RequestFavoritesServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, RequestHistoryServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, RequestSpectatorServerList );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, PingServer );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, PlayerDetails );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, ServerFriends );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, ServerRules );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, ReleaseRequest );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, GetServerDetails );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, CancelQuery );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, RefreshQuery );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, IsRefreshing );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, GetServerCount );
LSTEAMCLIENT_UNIX_IMPL( ISteamMatchmakingServers, SteamMatchMakingServers003, RefreshServer );
