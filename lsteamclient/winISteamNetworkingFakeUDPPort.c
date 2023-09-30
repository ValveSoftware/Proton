/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup, 8)

void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( &params );
}

uint32_t __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *remoteAddress, const void *pData, uint32_t cbData, int32_t nSendFlags)
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .remoteAddress = remoteAddress,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP( &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages(struct w_steam_iface *_this, w_SteamNetworkingMessage_t_153a **ppOutMessages, int32_t nMaxMessages)
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params params =
    {
        .linux_side = _this->u_iface,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup(struct w_steam_iface *_this, const SteamNetworkingIPAddr *remoteAddress)
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params params =
    {
        .linux_side = _this->u_iface,
        .remoteAddress = remoteAddress,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup( &params );
}

extern vtable_ptr winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001,
        VTABLE_ADD_FUNC(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort)
        VTABLE_ADD_FUNC(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP)
        VTABLE_ADD_FUNC(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages)
        VTABLE_ADD_FUNC(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), 0, sizeof(struct w_steam_iface));
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_vtable, 4, "SteamNetworkingFakeUDPPort001");
    r->u_iface = u_iface;
    return r;
}

