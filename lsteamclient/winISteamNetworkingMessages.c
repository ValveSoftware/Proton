/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingMessages_SteamNetworkingMessages002.h"

typedef struct __winISteamNetworkingMessages_SteamNetworkingMessages002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingMessages_SteamNetworkingMessages002;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser, 24)
EResult __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser(winISteamNetworkingMessages_SteamNetworkingMessages002 *_this, const SteamNetworkingIdentity * identityRemote, const void * pubData, uint32 cubData, int nSendFlags, int nRemoteChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser(_this->linux_side, identityRemote, pubData, cubData, nSendFlags, nRemoteChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel, 16)
int __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel(winISteamNetworkingMessages_SteamNetworkingMessages002 *_this, int nLocalChannel, winSteamNetworkingMessage_t_157 ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel(_this->linux_side, nLocalChannel, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser, 8)
bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser(winISteamNetworkingMessages_SteamNetworkingMessages002 *_this, const SteamNetworkingIdentity * identityRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser(_this->linux_side, identityRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser, 8)
bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser(winISteamNetworkingMessages_SteamNetworkingMessages002 *_this, const SteamNetworkingIdentity * identityRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser(_this->linux_side, identityRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser, 12)
bool __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser(winISteamNetworkingMessages_SteamNetworkingMessages002 *_this, const SteamNetworkingIdentity * identityRemote, int nLocalChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser(_this->linux_side, identityRemote, nLocalChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo, 16)
ESteamNetworkingConnectionState __thiscall winISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo(winISteamNetworkingMessages_SteamNetworkingMessages002 *_this, const SteamNetworkingIdentity * identityRemote, SteamNetConnectionInfo_t * pConnectionInfo, SteamNetConnectionRealTimeStatus_t * pQuickStatus)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo(_this->linux_side, identityRemote, pConnectionInfo, pQuickStatus);
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

winISteamNetworkingMessages_SteamNetworkingMessages002 *create_winISteamNetworkingMessages_SteamNetworkingMessages002(void *linux_side)
{
    winISteamNetworkingMessages_SteamNetworkingMessages002 *r = alloc_mem_for_iface(sizeof(winISteamNetworkingMessages_SteamNetworkingMessages002), "SteamNetworkingMessages002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingMessages_SteamNetworkingMessages002_vtable, 6, "SteamNetworkingMessages002");
    r->linux_side = linux_side;
    return r;
}

