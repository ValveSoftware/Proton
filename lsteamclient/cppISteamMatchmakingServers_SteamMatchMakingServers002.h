struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params
{
    void *linux_side;
    void *_ret;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params
{
    void *linux_side;
    void *_ret;
    uint32_t iApp;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params
{
    void *linux_side;
    void *_ret;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params
{
    void *linux_side;
    void *_ret;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params
{
    void *linux_side;
    void *_ret;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params
{
    void *linux_side;
    void *_ret;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params
{
    void *linux_side;
    void *hServerListRequest;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params
{
    void *linux_side;
    gameserveritem_t *_ret;
    void *hRequest;
    int32_t iServer;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params
{
    void *linux_side;
    void *hRequest;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params
{
    void *linux_side;
    void *hRequest;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params
{
    void *linux_side;
    bool _ret;
    void *hRequest;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params
{
    void *linux_side;
    int32_t _ret;
    void *hRequest;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params
{
    void *linux_side;
    void *hRequest;
    int32_t iServer;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unIP;
    uint16_t usPort;
    void /*ISteamMatchmakingPingResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unIP;
    uint16_t usPort;
    void /*ISteamMatchmakingPlayersResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unIP;
    uint16_t usPort;
    void /*ISteamMatchmakingRulesResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params
{
    void *linux_side;
    int32_t hServerQuery;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery_params *params );

