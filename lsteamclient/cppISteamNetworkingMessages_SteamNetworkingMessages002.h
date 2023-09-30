/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIdentity_144 *identityRemote;
    const void *pubData;
    uint32_t cubData;
    int32_t nSendFlags;
    int32_t nRemoteChannel;
};
extern void cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params *params );

struct cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params
{
    void *linux_side;
    int32_t _ret;
    int32_t nLocalChannel;
    w_SteamNetworkingMessage_t_153a **ppOutMessages;
    int32_t nMaxMessages;
};
extern void cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *params );

struct cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params
{
    void *linux_side;
    bool _ret;
    const SteamNetworkingIdentity_144 *identityRemote;
};
extern void cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params *params );

struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params
{
    void *linux_side;
    bool _ret;
    const SteamNetworkingIdentity_144 *identityRemote;
};
extern void cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params *params );

struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params
{
    void *linux_side;
    bool _ret;
    const SteamNetworkingIdentity_144 *identityRemote;
    int32_t nLocalChannel;
};
extern void cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params *params );

struct cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params
{
    void *linux_side;
    uint32_t _ret;
    const SteamNetworkingIdentity_144 *identityRemote;
    SteamNetConnectionInfo_t_153a *pConnectionInfo;
    SteamNetConnectionRealTimeStatus_t *pQuickStatus;
};
extern void cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
