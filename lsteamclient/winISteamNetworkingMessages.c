/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingMessages_SteamNetworkingMessages002.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo, 16)

EResult __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, const void *pubData, uint32 cubData, int nSendFlags, int nRemoteChannel)
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .pubData = pubData,
        .cubData = cubData,
        .nSendFlags = nSendFlags,
        .nRemoteChannel = nRemoteChannel,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel(struct w_steam_iface *_this, int nLocalChannel, winSteamNetworkingMessage_t_158 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalChannel = nLocalChannel,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote)
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote)
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, int nLocalChannel)
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nLocalChannel = nLocalChannel,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser( &params );
    return params._ret;
}

ESteamNetworkingConnectionState __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, SteamNetConnectionInfo_t *pConnectionInfo, SteamNetConnectionRealTimeStatus_t *pQuickStatus)
{
    struct cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .pConnectionInfo = pConnectionInfo,
        .pQuickStatus = pQuickStatus,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo( &params );
    return params._ret;
}

extern vtable_ptr winISteamNetworkingMessages_SteamNetworkingMessages002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingMessages_SteamNetworkingMessages002,
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser)
        VTABLE_ADD_FUNC(winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingMessages_SteamNetworkingMessages002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingMessages002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingMessages_SteamNetworkingMessages002_vtable, 6, "SteamNetworkingMessages002");
    r->u_iface = u_iface;
    return r;
}

