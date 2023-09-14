struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    const SteamNetworkingIPAddr *localAddress;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIPAddr *address;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params
{
    void *linux_side;
    HSteamListenSocket _ret;
    int nLocalVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIdentity *identityRemote;
    int nRemoteVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    int nReason;
    const char *pszDebug;
    bool bEnableLinger;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params
{
    void *linux_side;
    bool _ret;
    HSteamListenSocket hSocket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    int64 nUserData;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params
{
    void *linux_side;
    int64 _ret;
    HSteamNetConnection hPeer;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params
{
    void *linux_side;
    HSteamNetConnection hPeer;
    const char *pszName;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hPeer;
    char *pszName;
    int nMaxLen;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
    const void *pData;
    uint32 cbData;
    int nSendFlags;
    int64 *pOutMessageNumber;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params
{
    void *linux_side;
    int nMessages;
    winSteamNetworkingMessage_t_152 *const *pMessages;
    int64 *pOutMessageNumberOrResult;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params
{
    void *linux_side;
    uint32_t _ret;
    HSteamNetConnection hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params
{
    void *linux_side;
    int _ret;
    HSteamNetConnection hConn;
    winSteamNetworkingMessage_t_152 **ppOutMessages;
    int nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    SteamNetConnectionInfo_t *pInfo;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    SteamNetworkingQuickConnectionStatus *pStats;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params
{
    void *linux_side;
    int _ret;
    HSteamNetConnection hConn;
    char *pszBuf;
    int cbBuf;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params
{
    void *linux_side;
    bool _ret;
    HSteamListenSocket hSocket;
    SteamNetworkingIPAddr *address;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection *pOutConnection1;
    HSteamNetConnection *pOutConnection2;
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
    HSteamNetPollGroup _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params
{
    void *linux_side;
    bool _ret;
    HSteamNetPollGroup hPollGroup;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params
{
    void *linux_side;
    bool _ret;
    HSteamNetConnection hConn;
    HSteamNetPollGroup hPollGroup;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params
{
    void *linux_side;
    int _ret;
    HSteamNetPollGroup hPollGroup;
    winSteamNetworkingMessage_t_152 **ppOutMessages;
    int nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params
{
    void *linux_side;
    bool _ret;
    const void *pvTicket;
    int cbTicket;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params
{
    void *linux_side;
    int _ret;
    const SteamNetworkingIdentity *identityGameServer;
    int nRemoteVirtualPort;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    const SteamNetworkingIdentity *identityTarget;
    int nRemoteVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params
{
    void *linux_side;
    uint16 _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params
{
    void *linux_side;
    SteamNetworkingPOPID _ret;
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
    HSteamListenSocket _ret;
    int nLocalVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramGameCoordinatorServerLogin *pLoginInfo;
    int *pcbSignedBlob;
    void *pBlob;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params
{
    void *linux_side;
    HSteamNetConnection _ret;
    void /*ISteamNetworkingConnectionSignaling*/ *pSignaling;
    const SteamNetworkingIdentity *pPeerIdentity;
    int nRemoteVirtualPort;
    int nOptions;
    const SteamNetworkingConfigValue_t *pOptions;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params
{
    void *linux_side;
    bool _ret;
    const void *pMsg;
    int cbMsg;
    void /*ISteamNetworkingSignalingRecvContext*/ *pContext;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params
{
    void *linux_side;
    bool _ret;
    int *pcbBlob;
    void *pBlob;
    SteamNetworkingErrMsg *errMsg;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params
{
    void *linux_side;
    bool _ret;
    const void *pCertificate;
    int cbCertificate;
    SteamNetworkingErrMsg *errMsg;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params
{
    void *linux_side;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params *params );

