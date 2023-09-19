struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous_params
{
    void *linux_side;
    CSteamID steamIDRemote;
    uint32_t unConnectionIDSrc;
    const void *pMsgRendezvous;
    uint32_t cbRendezvous;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure_params
{
    void *linux_side;
    CSteamID steamIDRemote;
    uint32_t unConnectionIDDest;
    uint32_t nReason;
    const char *pszReason;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON_params
{
    void *linux_side;
    int32_t _ret;
    void *buf;
    uint32_t cbBuf;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket_params
{
    void *linux_side;
    const void *pTicket;
    uint32_t cbTicket;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t idxTicket;
    void *buf;
    uint32_t cbBuf;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg_params
{
    void *linux_side;
    const void *pMsg;
    uint32_t cbMsg;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg_params *params );

