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

#include "cppIVRMailbox_IVRMailbox_001.h"

typedef struct __winIVRMailbox_IVRMailbox_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRMailbox_IVRMailbox_001;

DEFINE_THISCALL_WRAPPER(winIVRMailbox_IVRMailbox_001_undoc1, 12)
vrmb_typeb __thiscall winIVRMailbox_IVRMailbox_001_undoc1(winIVRMailbox_IVRMailbox_001 *_this, const char * a, vrmb_typea * b)
{
    TRACE("%p\n", _this);
    return cppIVRMailbox_IVRMailbox_001_undoc1(_this->linux_side, a, b);
}

DEFINE_THISCALL_WRAPPER(winIVRMailbox_IVRMailbox_001_undoc2, 12)
vrmb_typeb __thiscall winIVRMailbox_IVRMailbox_001_undoc2(winIVRMailbox_IVRMailbox_001 *_this, vrmb_typea a)
{
    TRACE("%p\n", _this);
    return cppIVRMailbox_IVRMailbox_001_undoc2(_this->linux_side, a);
}

DEFINE_THISCALL_WRAPPER(winIVRMailbox_IVRMailbox_001_undoc3, 20)
vrmb_typeb __thiscall winIVRMailbox_IVRMailbox_001_undoc3(winIVRMailbox_IVRMailbox_001 *_this, vrmb_typea a, const char * b, const char * c)
{
    TRACE("%p\n", _this);
    return ivrmailbox_undoc3(cppIVRMailbox_IVRMailbox_001_undoc3, _this->linux_side, a, b, c, 1);
}

DEFINE_THISCALL_WRAPPER(winIVRMailbox_IVRMailbox_001_undoc4, 24)
vrmb_typeb __thiscall winIVRMailbox_IVRMailbox_001_undoc4(winIVRMailbox_IVRMailbox_001 *_this, vrmb_typea a, char * b, uint32_t c, uint32_t * d)
{
    TRACE("%p\n", _this);
    return cppIVRMailbox_IVRMailbox_001_undoc4(_this->linux_side, a, b, c, d);
}

extern vtable_ptr winIVRMailbox_IVRMailbox_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRMailbox_IVRMailbox_001,
        VTABLE_ADD_FUNC(winIVRMailbox_IVRMailbox_001_undoc1)
        VTABLE_ADD_FUNC(winIVRMailbox_IVRMailbox_001_undoc2)
        VTABLE_ADD_FUNC(winIVRMailbox_IVRMailbox_001_undoc3)
        VTABLE_ADD_FUNC(winIVRMailbox_IVRMailbox_001_undoc4)
    );
#ifndef __GNUC__
}
#endif

winIVRMailbox_IVRMailbox_001 *create_winIVRMailbox_IVRMailbox_001(void *linux_side)
{
    winIVRMailbox_IVRMailbox_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRMailbox_IVRMailbox_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRMailbox_IVRMailbox_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRMailbox_IVRMailbox_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRMailbox_IVRMailbox_001 *create_winIVRMailbox_IVRMailbox_001_FnTable(void *linux_side)
{
    winIVRMailbox_IVRMailbox_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRMailbox_IVRMailbox_001));
    struct thunk *thunks = alloc_thunks(4);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 4 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRMailbox_IVRMailbox_001_undoc1, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRMailbox_IVRMailbox_001_undoc2, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRMailbox_IVRMailbox_001_undoc3, 3, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRMailbox_IVRMailbox_001_undoc4, 4, FALSE, FALSE);
    for (i = 0; i < 4; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRMailbox_IVRMailbox_001_FnTable(void *object)
{
    winIVRMailbox_IVRMailbox_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

