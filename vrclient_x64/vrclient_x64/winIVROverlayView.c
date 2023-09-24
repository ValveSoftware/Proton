/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVROverlayView_IVROverlayView_003.h"

DEFINE_THISCALL_WRAPPER(winIVROverlayView_IVROverlayView_003_AcquireOverlayView, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlayView_IVROverlayView_003_ReleaseOverlayView, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlayView_IVROverlayView_003_PostOverlayEvent, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlayView_IVROverlayView_003_IsViewingPermitted, 12)

EVROverlayError __thiscall winIVROverlayView_IVROverlayView_003_AcquireOverlayView(struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle, VRNativeDevice_t *pNativeDevice, VROverlayView_t *pOverlayView, uint32_t unOverlayViewSize)
{
    EVROverlayError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVROverlayView_IVROverlayView_003_AcquireOverlayView(_this->u_iface, ulOverlayHandle, pNativeDevice, pOverlayView, unOverlayViewSize);
    return _ret;
}

EVROverlayError __thiscall winIVROverlayView_IVROverlayView_003_ReleaseOverlayView(struct w_steam_iface *_this, VROverlayView_t *pOverlayView)
{
    EVROverlayError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView(_this->u_iface, pOverlayView);
    return _ret;
}

void __thiscall winIVROverlayView_IVROverlayView_003_PostOverlayEvent(struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle, const VREvent_t *pvrEvent)
{
    TRACE("%p\n", _this);
    cppIVROverlayView_IVROverlayView_003_PostOverlayEvent(_this->u_iface, ulOverlayHandle, pvrEvent);
}

bool __thiscall winIVROverlayView_IVROverlayView_003_IsViewingPermitted(struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVROverlayView_IVROverlayView_003_IsViewingPermitted(_this->u_iface, ulOverlayHandle);
    return _ret;
}

extern vtable_ptr winIVROverlayView_IVROverlayView_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlayView_IVROverlayView_003,
        VTABLE_ADD_FUNC(winIVROverlayView_IVROverlayView_003_AcquireOverlayView)
        VTABLE_ADD_FUNC(winIVROverlayView_IVROverlayView_003_ReleaseOverlayView)
        VTABLE_ADD_FUNC(winIVROverlayView_IVROverlayView_003_PostOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlayView_IVROverlayView_003_IsViewingPermitted)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVROverlayView_IVROverlayView_003(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlayView_IVROverlayView_003_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVROverlayView_IVROverlayView_003(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVROverlayView_IVROverlayView_003_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(4);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 4 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlayView_IVROverlayView_003_AcquireOverlayView, 4, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlayView_IVROverlayView_003_ReleaseOverlayView, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlayView_IVROverlayView_003_PostOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlayView_IVROverlayView_003_IsViewingPermitted, 1, FALSE, FALSE);
    for (i = 0; i < 4; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlayView_IVROverlayView_003_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

