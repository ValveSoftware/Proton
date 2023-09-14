/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamGameCoordinator_SteamGameCoordinator001.h"

DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_SendMessage, 16)
DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable, 8)
DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage, 20)

uint32_t __thiscall winISteamGameCoordinator_SteamGameCoordinator001_SendMessage(struct w_steam_iface *_this, uint32 unMsgType, const void *pubData, uint32 cubData)
{
    struct cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params params =
    {
        .linux_side = _this->u_iface,
        .unMsgType = unMsgType,
        .pubData = pubData,
        .cubData = cubData,
    };
    TRACE("%p\n", _this);
    cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage( &params );
    return params._ret;
}

bool __thiscall winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable(struct w_steam_iface *_this, uint32 *pcubMsgSize)
{
    struct cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable( &params );
    return params._ret;
}

uint32_t __thiscall winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage(struct w_steam_iface *_this, uint32 *punMsgType, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
    struct cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params params =
    {
        .linux_side = _this->u_iface,
        .punMsgType = punMsgType,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage( &params );
    return params._ret;
}

extern vtable_ptr winISteamGameCoordinator_SteamGameCoordinator001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameCoordinator_SteamGameCoordinator001,
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_SendMessage)
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable)
        VTABLE_ADD_FUNC(winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamGameCoordinator_SteamGameCoordinator001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameCoordinator001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameCoordinator_SteamGameCoordinator001_vtable, 3, "SteamGameCoordinator001");
    r->u_iface = u_iface;
    return r;
}

