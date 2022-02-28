/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVROverlayView_IVROverlayView_003.h"

typedef struct __winIVROverlayView_IVROverlayView_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlayView_IVROverlayView_003;

DEFINE_THISCALL_WRAPPER(winIVROverlayView_IVROverlayView_003_AcquireOverlayView, 24)
EVROverlayError __thiscall winIVROverlayView_IVROverlayView_003_AcquireOverlayView(winIVROverlayView_IVROverlayView_003 *_this, VROverlayHandle_t ulOverlayHandle, VRNativeDevice_t * pNativeDevice, VROverlayView_t * pOverlayView, uint32_t unOverlayViewSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlayView_IVROverlayView_003_AcquireOverlayView(_this->linux_side, ulOverlayHandle, pNativeDevice, pOverlayView, unOverlayViewSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlayView_IVROverlayView_003_ReleaseOverlayView, 8)
EVROverlayError __thiscall winIVROverlayView_IVROverlayView_003_ReleaseOverlayView(winIVROverlayView_IVROverlayView_003 *_this, VROverlayView_t * pOverlayView)
{
    TRACE("%p\n", _this);
    return cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView(_this->linux_side, pOverlayView);
}

DEFINE_THISCALL_WRAPPER(winIVROverlayView_IVROverlayView_003_PostOverlayEvent, 16)
void __thiscall winIVROverlayView_IVROverlayView_003_PostOverlayEvent(winIVROverlayView_IVROverlayView_003 *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t * pvrEvent)
{
    TRACE("%p\n", _this);
    cppIVROverlayView_IVROverlayView_003_PostOverlayEvent(_this->linux_side, ulOverlayHandle, pvrEvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlayView_IVROverlayView_003_IsViewingPermitted, 12)
bool __thiscall winIVROverlayView_IVROverlayView_003_IsViewingPermitted(winIVROverlayView_IVROverlayView_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlayView_IVROverlayView_003_IsViewingPermitted(_this->linux_side, ulOverlayHandle);
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

winIVROverlayView_IVROverlayView_003 *create_winIVROverlayView_IVROverlayView_003(void *linux_side)
{
    winIVROverlayView_IVROverlayView_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlayView_IVROverlayView_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlayView_IVROverlayView_003_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlayView_IVROverlayView_003(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlayView_IVROverlayView_003 *create_winIVROverlayView_IVROverlayView_003_FnTable(void *linux_side)
{
    winIVROverlayView_IVROverlayView_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlayView_IVROverlayView_003));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlayView_IVROverlayView_003_FnTable(void *object)
{
    winIVROverlayView_IVROverlayView_003 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

