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

#include "cppISteamGameCoordinator_SteamGameCoordinator001.h"

typedef struct __winISteamGameCoordinator_SteamGameCoordinator001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameCoordinator_SteamGameCoordinator001;

DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_SendMessage, 16)
EGCResults __thiscall winISteamGameCoordinator_SteamGameCoordinator001_SendMessage(winISteamGameCoordinator_SteamGameCoordinator001 *_this, uint32 unMsgType, const void * pubData, uint32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage(_this->linux_side, unMsgType, pubData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable, 8)
bool __thiscall winISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable(winISteamGameCoordinator_SteamGameCoordinator001 *_this, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable(_this->linux_side, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage, 20)
EGCResults __thiscall winISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage(winISteamGameCoordinator_SteamGameCoordinator001 *_this, uint32 * punMsgType, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage(_this->linux_side, punMsgType, pubDest, cubDest, pcubMsgSize);
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

winISteamGameCoordinator_SteamGameCoordinator001 *create_winISteamGameCoordinator_SteamGameCoordinator001(void *linux_side)
{
    winISteamGameCoordinator_SteamGameCoordinator001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameCoordinator_SteamGameCoordinator001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameCoordinator_SteamGameCoordinator001_vtable;
    r->linux_side = linux_side;
    return r;
}

