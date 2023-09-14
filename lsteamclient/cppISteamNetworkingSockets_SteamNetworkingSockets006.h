struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    const SteamNetworkingIPAddr *localAddress;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIPAddr *address;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    int nVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIdentity *identityRemote;
    int nVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    int nReason;
    const char *pszDebug;
    bool bEnableLinger;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params
{
    void *linux_side;
    bool _ret;
    HSteamListenSocket hSocket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    int64 nUserData;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params
{
    void *linux_side;
    int64 _ret;
    HSteamNetConnection hPeer;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params
{
    void *linux_side;
    HSteamNetConnection hPeer;
    const char *pszName;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    char *pszName;
    int nMaxLen;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
    const void *pData;
    uint32 cbData;
    int nSendFlags;
    int64 *pOutMessageNumber;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params
{
    void *linux_side;
    int nMessages;
    winSteamNetworkingMessage_t_147 **pMessages;
    int64 *pOutMessageNumberOrResult;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params
{
    void *linux_side;
    int _ret;
    HSteamNetConnection hConn;
    winSteamNetworkingMessage_t_147 **ppOutMessages;
    int nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params
{
    void *linux_side;
    int _ret;
    HSteamListenSocket hSocket;
    winSteamNetworkingMessage_t_147 **ppOutMessages;
    int nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    SteamNetConnectionInfo_t *pInfo;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    SteamNetworkingQuickConnectionStatus *pStats;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params
{
    void *linux_side;
    int _ret;
    HSteamNetConnection hConn;
    char *pszBuf;
    int cbBuf;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params
{
    void *linux_side;
    bool _ret;
    HSteamListenSocket hSocket;
    SteamNetworkingIPAddr *address;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection *pOutConnection1;
    HSteamNetConnection *pOutConnection2;
    bool bUseNetworkLoopback;
    const SteamNetworkingIdentity *pIdentity1;
    const SteamNetworkingIdentity *pIdentity2;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIdentity *pIdentity;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params
{
    void *linux_side;
    uint32_t _ret;
    SteamNetAuthenticationStatus_t *pDetails;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params
{
    void *linux_side;
    bool _ret;
    const void *pvTicket;
    int cbTicket;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params
{
    void *linux_side;
    int _ret;
    const SteamNetworkingIdentity *identityGameServer;
    int nVirtualPort;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIdentity *identityTarget;
    int nVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params
{
    void *linux_side;
    uint16 _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params
{
    void *linux_side;
    SteamNetworkingPOPID _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramHostedAddress *pRouting;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    int nVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramGameCoordinatorServerLogin *pLoginInfo;
    int *pcbSignedBlob;
    void *pBlob;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    void /*ISteamNetworkingConnectionCustomSignaling*/ *pSignaling;
    const SteamNetworkingIdentity *pPeerIdentity;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params
{
    void *linux_side;
    bool _ret;
    const void *pMsg;
    int cbMsg;
    void /*ISteamNetworkingCustomSignalingRecvContext*/ *pContext;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *params );

