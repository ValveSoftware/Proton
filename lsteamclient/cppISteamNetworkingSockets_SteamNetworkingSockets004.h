/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIPAddr *localAddress;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIPAddr *address;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t nVirtualPort;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIdentity_144 *identityRemote;
    int32_t nVirtualPort;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection_params
{
    void *linux_side;
    bool _ret;
    uint32_t hPeer;
    int32_t nReason;
    const char *pszDebug;
    bool bEnableLinger;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData_params
{
    void *linux_side;
    bool _ret;
    uint32_t hPeer;
    int64_t nUserData;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData_params
{
    void *linux_side;
    int64_t _ret;
    uint32_t hPeer;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName_params
{
    void *linux_side;
    uint32_t hPeer;
    const char *pszName;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName_params
{
    void *linux_side;
    bool _ret;
    uint32_t hPeer;
    char *pszName;
    int32_t nMaxLen;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t hConn;
    const void *pData;
    uint32_t cbData;
    int32_t nSendFlags;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t hConn;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t hConn;
    w_SteamNetworkingMessage_t_144 **ppOutMessages;
    int32_t nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t hSocket;
    w_SteamNetworkingMessage_t_144 **ppOutMessages;
    int32_t nMaxMessages;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t hConn;
    SteamNetConnectionInfo_t_144 *pInfo;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus_params
{
    void *linux_side;
    bool _ret;
    uint32_t hConn;
    SteamNetworkingQuickConnectionStatus *pStats;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t hConn;
    char *pszBuf;
    int32_t cbBuf;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress_params
{
    void *linux_side;
    bool _ret;
    uint32_t hSocket;
    SteamNetworkingIPAddr *address;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair_params
{
    void *linux_side;
    bool _ret;
    uint32_t *pOutConnection1;
    uint32_t *pOutConnection2;
    bool bUseNetworkLoopback;
    const SteamNetworkingIdentity_144 *pIdentity1;
    const SteamNetworkingIdentity_144 *pIdentity2;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity_params
{
    void *linux_side;
    bool _ret;
    SteamNetworkingIdentity_144 *pIdentity;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus_params
{
    void *linux_side;
    uint32_t _ret;
    SteamNetAuthenticationStatus_t *pDetails;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket_params
{
    void *linux_side;
    bool _ret;
    const void *pvTicket;
    int32_t cbTicket;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer_params
{
    void *linux_side;
    int32_t _ret;
    const SteamNetworkingIdentity_144 *identityGameServer;
    int32_t nVirtualPort;
    SteamDatagramRelayAuthTicket *pOutParsedTicket;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIdentity_144 *identityTarget;
    int32_t nVirtualPort;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort_params
{
    void *linux_side;
    uint16_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramHostedAddress *pRouting;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t nVirtualPort;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket_params *params );

struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin_params
{
    void *linux_side;
    uint32_t _ret;
    SteamDatagramGameCoordinatorServerLogin *pLoginInfo;
    int32_t *pcbSignedBlob;
    void *pBlob;
};
extern void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
