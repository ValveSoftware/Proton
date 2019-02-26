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

#include "cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001.h"

typedef struct __winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData, 32)
uint32 __thiscall winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData(winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *_this, uint32 nAppID, void * pvBuffer, uint32 cbBufferLength, uint32 * piAppId, uint32 * piSteamId, uint32 * piSignature, uint32 * pcbSignature)
{
    TRACE("%p\n", _this);
    return cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData(_this->linux_side, nAppID, pvBuffer, cbBufferLength, piAppId, piSteamId, piSignature, pcbSignature);
}

extern vtable_ptr winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData)
    );
#ifndef __GNUC__
}
#endif

winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *create_winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001(void *linux_side)
{
    winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

