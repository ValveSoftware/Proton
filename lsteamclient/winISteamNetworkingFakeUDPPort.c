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

#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"

typedef struct __winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort, 4)
void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP, 20)
EResult __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *_this, const SteamNetworkingIPAddr * remoteAddress, const void * pData, uint32 cbData, int nSendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_SendMessageToFakeIP(_this->linux_side, remoteAddress, pData, cbData, nSendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages, 12)
int __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *_this, winSteamNetworkingMessage_t_157 ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages(_this->linux_side, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup, 8)
void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *_this, const SteamNetworkingIPAddr * remoteAddress)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ScheduleCleanup(_this->linux_side, remoteAddress);
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

winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001(void *linux_side)
{
    winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001));
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_vtable, 4, "SteamNetworkingFakeUDPPort001");
    r->linux_side = linux_side;
    return r;
}

