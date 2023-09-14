struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    const SteamNetworkingIPAddr *localAddress;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIPAddr *address;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    int nVirtualPort;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIdentity *identityRemote;
    int nVirtualPort;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    int nReason;
    const char *pszDebug;
    bool bEnableLinger;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket_params
{
    void *linux_side;
    bool _ret;
    HSteamListenSocket hSocket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    int64 nUserData;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData_params
{
    void *linux_side;
    int64 _ret;
    HSteamNetConnection hPeer;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName_params
{
    void *linux_side;
    HSteamNetConnection hPeer;
    const char *pszName;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    char *pszName;
    int nMaxLen;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
    const void *pData;
    uint32 cbData;
    int nSendFlags;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params
{
    void *linux_side;
    int _ret;
    HSteamNetConnection hConn;
    winSteamNetworkingMessage_t_144 **ppOutMessages;
    int nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params
{
    void *linux_side;
    int _ret;
    HSteamListenSocket hSocket;
    winSteamNetworkingMessage_t_144 **ppOutMessages;
    int nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    SteamNetConnectionInfo_t *pInfo;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    SteamNetworkingQuickConnectionStatus *pStats;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus_params
{
    void *linux_side;
    int _ret;
    HSteamNetConnection hConn;
    char *pszBuf;
    int cbBuf;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress_params
{
    void *linux_side;
    bool _ret;
    HSteamListenSocket hSocket;
    SteamNetworkingIPAddr *address;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection *pOutConnection1;
    HSteamNetConnection *pOutConnection2;
    bool bUseNetworkLoopback;
    const SteamNetworkingIdentity *pIdentity1;
    const SteamNetworkingIdentity *pIdentity2;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIdentity *pIdentity;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket_params
{
    void *linux_side;
    bool _ret;
    const void *pvTicket;
    int cbTicket;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer_params
{
    void *linux_side;
    int _ret;
    const SteamNetworkingIdentity *identityGameServer;
    int nVirtualPort;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIdentity *identityTarget;
    int nVirtualPort;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort_params
{
    void *linux_side;
    uint16 _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID_params
{
    void *linux_side;
    SteamNetworkingPOPID _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress_params
{
    void *linux_side;
    bool _ret;
    SteamDatagramHostedAddress *pRouting;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    int nVirtualPort;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket_params *params );

