struct cppISteamNetworking_SteamNetworking001_CreateListenSocket_params
{
    void *linux_side;
    SNetListenSocket_t _ret;
    int nVirtualP2PPort;
    uint32 nIP;
    uint16 nPort;
};
extern void cppISteamNetworking_SteamNetworking001_CreateListenSocket( struct cppISteamNetworking_SteamNetworking001_CreateListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    CSteamID steamIDTarget;
    int nVirtualPort;
    int nTimeoutSec;
};
extern void cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_CreateConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    uint32 nIP;
    uint16 nPort;
    int nTimeoutSec;
};
extern void cppISteamNetworking_SteamNetworking001_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking001_CreateConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_DestroySocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking001_DestroySocket( struct cppISteamNetworking_SteamNetworking001_DestroySocket_params *params );

struct cppISteamNetworking_SteamNetworking001_DestroyListenSocket_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking001_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking001_DestroyListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_SendDataOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubData;
    uint32 cubData;
    bool bReliable;
};
extern void cppISteamNetworking_SteamNetworking001_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking001_SendDataOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params *params );

struct cppISteamNetworking_SteamNetworking001_IsDataAvailable_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking001_IsDataAvailable( struct cppISteamNetworking_SteamNetworking001_IsDataAvailable_params *params );

struct cppISteamNetworking_SteamNetworking001_RetrieveData_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking001_RetrieveData( struct cppISteamNetworking_SteamNetworking001_RetrieveData_params *params );

struct cppISteamNetworking_SteamNetworking001_GetSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    CSteamID *pSteamIDRemote;
    int *peSocketStatus;
    uint32 *punIPRemote;
    uint16 *punPortRemote;
};
extern void cppISteamNetworking_SteamNetworking001_GetSocketInfo( struct cppISteamNetworking_SteamNetworking001_GetSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking001_GetListenSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pnIP;
    uint16 *pnPort;
};
extern void cppISteamNetworking_SteamNetworking001_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking001_GetListenSocketInfo_params *params );

