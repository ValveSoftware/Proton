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

#include "cppIVRResources_IVRResources_001.h"

typedef struct __winIVRResources_IVRResources_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRResources_IVRResources_001;

DEFINE_THISCALL_WRAPPER(winIVRResources_IVRResources_001_LoadSharedResource, 16)
uint32_t __thiscall winIVRResources_IVRResources_001_LoadSharedResource(winIVRResources_IVRResources_001 *_this, const char * pchResourceName, char * pchBuffer, uint32_t unBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRResources_IVRResources_001_LoadSharedResource(_this->linux_side, pchResourceName, pchBuffer, unBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRResources_IVRResources_001_GetResourceFullPath, 20)
uint32_t __thiscall winIVRResources_IVRResources_001_GetResourceFullPath(winIVRResources_IVRResources_001 *_this, const char * pchResourceName, const char * pchResourceTypeDirectory, char * pchPathBuffer, uint32_t unBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRResources_IVRResources_001_GetResourceFullPath(_this->linux_side, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen);
}

extern vtable_ptr winIVRResources_IVRResources_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRResources_IVRResources_001,
        VTABLE_ADD_FUNC(winIVRResources_IVRResources_001_LoadSharedResource)
        VTABLE_ADD_FUNC(winIVRResources_IVRResources_001_GetResourceFullPath)
    );
#ifndef __GNUC__
}
#endif

winIVRResources_IVRResources_001 *create_winIVRResources_IVRResources_001(void *linux_side)
{
    winIVRResources_IVRResources_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRResources_IVRResources_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRResources_IVRResources_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRResources_IVRResources_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRResources_IVRResources_001 *create_winIVRResources_IVRResources_001_FnTable(void *linux_side)
{
    winIVRResources_IVRResources_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRResources_IVRResources_001));
    struct thunk *thunks = alloc_thunks(2);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 2 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRResources_IVRResources_001_LoadSharedResource, 3, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRResources_IVRResources_001_GetResourceFullPath, 4, FALSE, FALSE);
    for (i = 0; i < 2; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRResources_IVRResources_001_FnTable(void *object)
{
    winIVRResources_IVRResources_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

