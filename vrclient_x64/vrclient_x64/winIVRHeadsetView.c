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

#include "cppIVRHeadsetView_IVRHeadsetView_001.h"

typedef struct __winIVRHeadsetView_IVRHeadsetView_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRHeadsetView_IVRHeadsetView_001;

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize, 12)
void __thiscall winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize(winIVRHeadsetView_IVRHeadsetView_001 *_this, uint32_t nWidth, uint32_t nHeight)
{
    TRACE("%p\n", _this);
    cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize(_this->linux_side, nWidth, nHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize, 12)
void __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize(winIVRHeadsetView_IVRHeadsetView_001 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode, 8)
void __thiscall winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode(winIVRHeadsetView_IVRHeadsetView_001 *_this, HeadsetViewMode_t eHeadsetViewMode)
{
    TRACE("%p\n", _this);
    cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode(_this->linux_side, eHeadsetViewMode);
}

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode, 4)
HeadsetViewMode_t __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode(winIVRHeadsetView_IVRHeadsetView_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped, 5)
void __thiscall winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped(winIVRHeadsetView_IVRHeadsetView_001 *_this, bool bCropped)
{
    TRACE("%p\n", _this);
    cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped(_this->linux_side, bCropped);
}

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped, 4)
bool __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped(winIVRHeadsetView_IVRHeadsetView_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio, 4)
float __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio(winIVRHeadsetView_IVRHeadsetView_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange, 12)
void __thiscall winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange(winIVRHeadsetView_IVRHeadsetView_001 *_this, float flStartPct, float flEndPct)
{
    TRACE("%p\n", _this);
    cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange(_this->linux_side, flStartPct, flEndPct);
}

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange, 12)
void __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange(winIVRHeadsetView_IVRHeadsetView_001 *_this, float * pStartPct, float * pEndPct)
{
    TRACE("%p\n", _this);
    cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange(_this->linux_side, pStartPct, pEndPct);
}

extern vtable_ptr winIVRHeadsetView_IVRHeadsetView_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRHeadsetView_IVRHeadsetView_001,
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize)
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize)
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode)
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode)
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped)
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped)
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio)
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange)
        VTABLE_ADD_FUNC(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange)
    );
#ifndef __GNUC__
}
#endif

winIVRHeadsetView_IVRHeadsetView_001 *create_winIVRHeadsetView_IVRHeadsetView_001(void *linux_side)
{
    winIVRHeadsetView_IVRHeadsetView_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRHeadsetView_IVRHeadsetView_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRHeadsetView_IVRHeadsetView_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRHeadsetView_IVRHeadsetView_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRHeadsetView_IVRHeadsetView_001 *create_winIVRHeadsetView_IVRHeadsetView_001_FnTable(void *linux_side)
{
    winIVRHeadsetView_IVRHeadsetView_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRHeadsetView_IVRHeadsetView_001));
    struct thunk *thunks = alloc_thunks(9);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 9 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped, 1, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped, 0, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange, 2, TRUE, FALSE);
    init_thunk(&thunks[8], r, winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange, 2, FALSE, FALSE);
    for (i = 0; i < 9; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRHeadsetView_IVRHeadsetView_001_FnTable(void *object)
{
    winIVRHeadsetView_IVRHeadsetView_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

