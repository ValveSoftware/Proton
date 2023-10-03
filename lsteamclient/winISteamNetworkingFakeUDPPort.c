/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup, 8)

uint32_t __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *remoteAddress, const void *pData, uint32_t cbData, int32_t nSendFlags)
{
    struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .remoteAddress = remoteAddress,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup(struct w_steam_iface *_this, const SteamNetworkingIPAddr *remoteAddress)
{
    struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup_params params =
    {
        .linux_side = _this->u_iface,
        .remoteAddress = remoteAddress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup, &params );
}

extern vtable_ptr winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001, 0, ".?AVISteamNetworkingFakeUDPPort@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_vtables)
    __ASM_VTABLE(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001,
        VTABLE_ADD_FUNC(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort)
        VTABLE_ADD_FUNC(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP)
        VTABLE_ADD_FUNC(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages)
        VTABLE_ADD_FUNC(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingFakeUDPPort001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_vtable, 4, "SteamNetworkingFakeUDPPort001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamNetworkingFakeUDPPort_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_rtti( base );
#endif /* __x86_64__ */
}
