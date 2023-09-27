struct cppISteamNetworking_SteamNetworking002_CreateListenSocket_params
{
    void *linux_side;
    SNetListenSocket_t _ret;
    int nVirtualP2PPort;
    uint32 nIP;
    uint16 nPort;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking002_CreateListenSocket( struct cppISteamNetworking_SteamNetworking002_CreateListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    CSteamID steamIDTarget;
    int nVirtualPort;
    int nTimeoutSec;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_CreateConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    uint32 nIP;
    uint16 nPort;
    int nTimeoutSec;
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
    uint32 cubData;
    bool bReliable;
};
extern void cppISteamNetworking_SteamNetworking002_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking002_SendDataOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params *params );

struct cppISteamNetworking_SteamNetworking002_IsDataAvailable_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking002_IsDataAvailable( struct cppISteamNetworking_SteamNetworking002_IsDataAvailable_params *params );

struct cppISteamNetworking_SteamNetworking002_RetrieveData_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking002_RetrieveData( struct cppISteamNetworking_SteamNetworking002_RetrieveData_params *params );

struct cppISteamNetworking_SteamNetworking002_GetSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    CSteamID *pSteamIDRemote;
    int *peSocketStatus;
    uint32 *punIPRemote;
    uint16 *punPortRemote;
};
extern void cppISteamNetworking_SteamNetworking002_GetSocketInfo( struct cppISteamNetworking_SteamNetworking002_GetSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking002_GetListenSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pnIP;
    uint16 *pnPort;
};
extern void cppISteamNetworking_SteamNetworking002_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking002_GetListenSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking002_GetSocketConnectionType_params
{
    void *linux_side;
    ESNetSocketConnectionType _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking002_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking002_GetSocketConnectionType_params *params );

struct cppISteamNetworking_SteamNetworking002_GetMaxPacketSize_params
{
    void *linux_side;
    int _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking002_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking002_GetMaxPacketSize_params *params );

