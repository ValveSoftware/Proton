struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous_params
{
    void *linux_side;
    CSteamID steamIDRemote;
    uint32 unConnectionIDSrc;
    const void *pMsgRendezvous;
    uint32 cbRendezvous;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure_params
{
    void *linux_side;
    CSteamID steamIDRemote;
    uint32 unConnectionIDDest;
    uint32 nReason;
    const char *pszReason;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON_params
{
    void *linux_side;
    int _ret;
    void *buf;
    uint32 cbBuf;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket_params
{
    void *linux_side;
    const void *pTicket;
    uint32 cbTicket;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket_params
{
    void *linux_side;
    int _ret;
    uint32 idxTicket;
    void *buf;
    uint32 cbBuf;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket_params *params );

struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg_params
{
    void *linux_side;
    const void *pMsg;
    uint32 cbMsg;
};
extern void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg( struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg_params *params );

