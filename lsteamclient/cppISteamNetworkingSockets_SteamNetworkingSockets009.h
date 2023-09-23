struct cppISteamNetworkingSockets_SteamNetworkingSockets009;
struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIPAddr *localAddress;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIPAddr *address;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t nLocalVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIdentity *identityRemote;
    int32_t nRemoteVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params
{
    void *linux_side;
    bool _ret;
    uint32_t hPeer;
    int32_t nReason;
    const char *pszDebug;
    bool bEnableLinger;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params
{
    void *linux_side;
    bool _ret;
    uint32_t hPeer;
    int64_t nUserData;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params
{
    void *linux_side;
    int64_t _ret;
    uint32_t hPeer;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params
{
    void *linux_side;
    uint32_t hPeer;
    const char *pszName;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params
{
    void *linux_side;
    bool _ret;
    uint32_t hPeer;
    char *pszName;
    int32_t nMaxLen;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t hConn;
    const void *pData;
    uint32_t cbData;
    int32_t nSendFlags;
    int64_t *pOutMessageNumber;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params
{
    void *linux_side;
    int32_t nMessages;
    winSteamNetworkingMessage_t_152 *const *pMessages;
    int64_t *pOutMessageNumberOrResult;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t hConn;
    winSteamNetworkingMessage_t_152 **ppOutMessages;
    int32_t nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t hConn;
    SteamNetConnectionInfo_t *pInfo;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params
{
    void *linux_side;
    bool _ret;
    uint32_t hConn;
    SteamNetworkingQuickConnectionStatus *pStats;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t hConn;
    char *pszBuf;
    int32_t cbBuf;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
    SteamNetworkingIPAddr *address;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params
{
    void *linux_side;
    bool _ret;
    uint32_t *pOutConnection1;
    uint32_t *pOutConnection2;
    bool bUseNetworkLoopback;
    const SteamNetworkingIdentity *pIdentity1;
    const SteamNetworkingIdentity *pIdentity2;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIdentity *pIdentity;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params
{
    void *linux_side;
    uint32_t _ret;
    SteamNetAuthenticationStatus_t *pDetails;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params
{
    void *linux_side;
    bool _ret;
    uint32_t hPollGroup;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params
{
    void *linux_side;
    bool _ret;
    uint32_t hConn;
    uint32_t hPollGroup;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t hPollGroup;
    winSteamNetworkingMessage_t_152 **ppOutMessages;
    int32_t nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params
{
    void *linux_side;
    bool _ret;
    const void *pvTicket;
    int32_t cbTicket;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params
{
    void *linux_side;
    int32_t _ret;
    const SteamNetworkingIdentity *identityGameServer;
    int32_t nRemoteVirtualPort;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIdentity *identityTarget;
    int32_t nRemoteVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params
{
    void *linux_side;
    uint16_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramHostedAddress *pRouting;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t nLocalVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramGameCoordinatorServerLogin *pLoginInfo;
    int32_t *pcbSignedBlob;
    void *pBlob;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params
{
    void *linux_side;
    uint32_t _ret;
    void /*ISteamNetworkingConnectionSignaling*/ *pSignaling;
    const SteamNetworkingIdentity *pPeerIdentity;
    int32_t nRemoteVirtualPort;
    int32_t nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params
{
    void *linux_side;
    bool _ret;
    const void *pMsg;
    int32_t cbMsg;
    void /*ISteamNetworkingSignalingRecvContext*/ *pContext;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params
{
    void *linux_side;
    bool _ret;
    int32_t *pcbBlob;
    void *pBlob;
    char (*errMsg)[1024];
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params
{
    void *linux_side;
    bool _ret;
    const void *pCertificate;
    int32_t cbCertificate;
    char (*errMsg)[1024];
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params
{
    void *linux_side;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params *params );

