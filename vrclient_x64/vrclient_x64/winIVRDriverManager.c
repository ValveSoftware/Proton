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

#include "cppIVRDriverManager_IVRDriverManager_001.h"

typedef struct __winIVRDriverManager_IVRDriverManager_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRDriverManager_IVRDriverManager_001;

DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_GetDriverCount, 4)
uint32_t __thiscall winIVRDriverManager_IVRDriverManager_001_GetDriverCount(winIVRDriverManager_IVRDriverManager_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRDriverManager_IVRDriverManager_001_GetDriverCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_GetDriverName, 16)
uint32_t __thiscall winIVRDriverManager_IVRDriverManager_001_GetDriverName(winIVRDriverManager_IVRDriverManager_001 *_this, DriverId_t nDriver, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRDriverManager_IVRDriverManager_001_GetDriverName(_this->linux_side, nDriver, pchValue, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_GetDriverHandle, 8)
DriverHandle_t __thiscall winIVRDriverManager_IVRDriverManager_001_GetDriverHandle(winIVRDriverManager_IVRDriverManager_001 *_this, const char * pchDriverName)
{
    TRACE("%p\n", _this);
    return cppIVRDriverManager_IVRDriverManager_001_GetDriverHandle(_this->linux_side, pchDriverName);
}

DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_IsEnabled, 8)
bool __thiscall winIVRDriverManager_IVRDriverManager_001_IsEnabled(winIVRDriverManager_IVRDriverManager_001 *_this, DriverId_t nDriver)
{
    TRACE("%p\n", _this);
    return cppIVRDriverManager_IVRDriverManager_001_IsEnabled(_this->linux_side, nDriver);
}

extern vtable_ptr winIVRDriverManager_IVRDriverManager_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRDriverManager_IVRDriverManager_001,
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_GetDriverCount)
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_GetDriverName)
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_GetDriverHandle)
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_IsEnabled)
    );
#ifndef __GNUC__
}
#endif

winIVRDriverManager_IVRDriverManager_001 *create_winIVRDriverManager_IVRDriverManager_001(void *linux_side)
{
    winIVRDriverManager_IVRDriverManager_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRDriverManager_IVRDriverManager_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRDriverManager_IVRDriverManager_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRDriverManager_IVRDriverManager_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRDriverManager_IVRDriverManager_001 *create_winIVRDriverManager_IVRDriverManager_001_FnTable(void *linux_side)
{
    winIVRDriverManager_IVRDriverManager_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRDriverManager_IVRDriverManager_001));
    struct thunk *thunks = alloc_thunks(4);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 4 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRDriverManager_IVRDriverManager_001_GetDriverCount, 0, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRDriverManager_IVRDriverManager_001_GetDriverName, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRDriverManager_IVRDriverManager_001_GetDriverHandle, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRDriverManager_IVRDriverManager_001_IsEnabled, 1, FALSE, FALSE);
    for (i = 0; i < 4; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRDriverManager_IVRDriverManager_001_FnTable(void *object)
{
    winIVRDriverManager_IVRDriverManager_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

