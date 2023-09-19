struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params
{
    void *linux_side;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params
{
    void *linux_side;
    uint32_t iApp;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params
{
    void *linux_side;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params
{
    void *linux_side;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params
{
    void *linux_side;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params
{
    void *linux_side;
    uint32_t iApp;
    MatchMakingKeyValuePair_t **ppchFilters;
    uint32_t nFilters;
    void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails_params
{
    void *linux_side;
    gameserveritem_t *_ret;
    uint32_t eType;
    int32_t iServer;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery_params
{
    void *linux_side;
    uint32_t eType;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery_params
{
    void *linux_side;
    uint32_t eType;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing_params
{
    void *linux_side;
    bool _ret;
    uint32_t eType;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t eType;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer_params
{
    void *linux_side;
    uint32_t eType;
    int32_t iServer;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unIP;
    uint16_t usPort;
    void /*ISteamMatchmakingPingResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unIP;
    uint16_t usPort;
    void /*ISteamMatchmakingPlayersResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unIP;
    uint16_t usPort;
    void /*ISteamMatchmakingRulesResponse*/ *pRequestServersResponse;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *params );

struct cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params
{
    void *linux_side;
    int32_t hServerQuery;
};
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery( struct cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery_params *params );

