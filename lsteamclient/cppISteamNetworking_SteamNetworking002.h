struct cppISteamNetworking_SteamNetworking002_CreateListenSocket_params
{
    void *linux_side;
    SNetListenSocket_t _ret;
    int32_t nVirtualP2PPort;
    uint32_t nIP;
    uint16_t nPort;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking002_CreateListenSocket( struct cppISteamNetworking_SteamNetworking002_CreateListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    CSteamID steamIDTarget;
    int32_t nVirtualPort;
    int32_t nTimeoutSec;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_CreateConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    uint32_t nIP;
    uint16_t nPort;
    int32_t nTimeoutSec;
};
extern void cppISteamNetworking_SteamNetworking002_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking002_CreateConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_DestroySocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking002_DestroySocket( struct cppISteamNetworking_SteamNetworking002_DestroySocket_params *params );

struct cppISteamNetworking_SteamNetworking002_DestroyListenSocket_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking002_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking002_DestroyListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_SendDataOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubData;
    uint32_t cubData;
    bool bReliable;
};
extern void cppISteamNetworking_SteamNetworking002_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking002_SendDataOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    uint32_t *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubDest;
    uint32_t cubDest;
    uint32_t *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_IsDataAvailable_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32_t *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking002_IsDataAvailable( struct cppISteamNetworking_SteamNetworking002_IsDataAvailable_params *params );

struct cppISteamNetworking_SteamNetworking002_RetrieveData_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    void *pubDest;
    uint32_t cubDest;
    uint32_t *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking002_RetrieveData( struct cppISteamNetworking_SteamNetworking002_RetrieveData_params *params );

struct cppISteamNetworking_SteamNetworking002_GetSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    CSteamID *pSteamIDRemote;
    int32_t *peSocketStatus;
    uint32_t *punIPRemote;
    uint16_t *punPortRemote;
};
extern void cppISteamNetworking_SteamNetworking002_GetSocketInfo( struct cppISteamNetworking_SteamNetworking002_GetSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking002_GetListenSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32_t *pnIP;
    uint16_t *pnPort;
};
extern void cppISteamNetworking_SteamNetworking002_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking002_GetListenSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking002_GetSocketConnectionType_params
{
    void *linux_side;
    uint32_t _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking002_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking002_GetSocketConnectionType_params *params );

struct cppISteamNetworking_SteamNetworking002_GetMaxPacketSize_params
{
    void *linux_side;
    int32_t _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking002_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking002_GetMaxPacketSize_params *params );

