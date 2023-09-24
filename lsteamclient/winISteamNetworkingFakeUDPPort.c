/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup, 8)

void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort(_this->u_iface);
}

EResult __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *remoteAddress, const void *pData, uint32 cbData, int nSendFlags)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP(_this->u_iface, remoteAddress, pData, cbData, nSendFlags);
    return _ret;
}

int __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages(struct w_steam_iface *_this, winSteamNetworkingMessage_t_158 **ppOutMessages, int nMaxMessages)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages(_this->u_iface, ppOutMessages, nMaxMessages);
    return _ret;
}

void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup(struct w_steam_iface *_this, const SteamNetworkingIPAddr *remoteAddress)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup(_this->u_iface, remoteAddress);
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

