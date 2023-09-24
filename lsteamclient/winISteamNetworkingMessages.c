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
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser(_this->u_iface, identityRemote, pubData, cubData, nSendFlags, nRemoteChannel);
    return _ret;
}

int __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel(struct w_steam_iface *_this, int nLocalChannel, winSteamNetworkingMessage_t_158 **ppOutMessages, int nMaxMessages)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel(_this->u_iface, nLocalChannel, ppOutMessages, nMaxMessages);
    return _ret;
}

bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser(_this->u_iface, identityRemote);
    return _ret;
}

bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser(_this->u_iface, identityRemote);
    return _ret;
}

bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, int nLocalChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser(_this->u_iface, identityRemote, nLocalChannel);
    return _ret;
}

ESteamNetworkingConnectionState __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, SteamNetConnectionInfo_t *pConnectionInfo, SteamNetConnectionRealTimeStatus_t *pQuickStatus)
{
    ESteamNetworkingConnectionState _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo(_this->u_iface, identityRemote, pConnectionInfo, pQuickStatus);
    return _ret;
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

