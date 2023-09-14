struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    const SteamNetworkingIPAddr *localAddress;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIPAddr *address;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    int32_t nVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIdentity *identityRemote;
    int32_t nVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    int32_t nReason;
    const char *pszDebug;
    bool bEnableLinger;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket_params
{
    void *linux_side;
    bool _ret;
    HSteamListenSocket hSocket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    int64_t nUserData;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData_params
{
    void *linux_side;
    int64_t _ret;
    HSteamNetConnection hPeer;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName_params
{
    void *linux_side;
    HSteamNetConnection hPeer;
    const char *pszName;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    char *pszName;
    int32_t nMaxLen;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
    const void *pData;
    uint32_t cbData;
    int32_t nSendFlags;
    int64_t *pOutMessageNumber;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params
{
    void *linux_side;
    int32_t nMessages;
    winSteamNetworkingMessage_t_149 *const *pMessages;
    int64_t *pOutMessageNumberOrResult;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params
{
    void *linux_side;
    int32_t _ret;
    HSteamNetConnection hConn;
    winSteamNetworkingMessage_t_149 **ppOutMessages;
    int32_t nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    SteamNetConnectionInfo_t *pInfo;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    SteamNetworkingQuickConnectionStatus *pStats;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus_params
{
    void *linux_side;
    int32_t _ret;
    HSteamNetConnection hConn;
    char *pszBuf;
    int32_t cbBuf;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress_params
{
    void *linux_side;
    bool _ret;
    HSteamListenSocket hSocket;
    SteamNetworkingIPAddr *address;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection *pOutConnection1;
    HSteamNetConnection *pOutConnection2;
    bool bUseNetworkLoopback;
    const SteamNetworkingIdentity *pIdentity1;
    const SteamNetworkingIdentity *pIdentity2;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIdentity *pIdentity;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus_params
{
    void *linux_side;
    uint32_t _ret;
    SteamNetAuthenticationStatus_t *pDetails;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup_params
{
    void *linux_side;
    HSteamNetPollGroup _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup_params
{
    void *linux_side;
    bool _ret;
    HSteamNetPollGroup hPollGroup;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    HSteamNetPollGroup hPollGroup;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params
{
    void *linux_side;
    int32_t _ret;
    HSteamNetPollGroup hPollGroup;
    winSteamNetworkingMessage_t_149 **ppOutMessages;
    int32_t nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket_params
{
    void *linux_side;
    bool _ret;
    const void *pvTicket;
    int32_t cbTicket;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer_params
{
    void *linux_side;
    int32_t _ret;
    const SteamNetworkingIdentity *identityGameServer;
    int32_t nVirtualPort;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIdentity *identityTarget;
    int32_t nVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort_params
{
    void *linux_side;
    uint16_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID_params
{
    void *linux_side;
    SteamNetworkingPOPID _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramHostedAddress *pRouting;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    int32_t nVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramGameCoordinatorServerLogin *pLoginInfo;
    int32_t *pcbSignedBlob;
    void *pBlob;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    void /*ISteamNetworkingConnectionCustomSignaling*/ *pSignaling;
    const SteamNetworkingIdentity *pPeerIdentity;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params
{
    void *linux_side;
    bool _ret;
    const void *pMsg;
    int32_t cbMsg;
    void /*ISteamNetworkingCustomSignalingRecvContext*/ *pContext;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest_params
{
    void *linux_side;
    bool _ret;
    int32_t *pcbBlob;
    void *pBlob;
    SteamNetworkingErrMsg *errMsg;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate_params
{
    void *linux_side;
    bool _ret;
    const void *pCertificate;
    int32_t cbCertificate;
    SteamNetworkingErrMsg *errMsg;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate_params *params );

