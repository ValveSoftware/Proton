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

DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_GetDriverName, 20)
uint32_t __thiscall winIVRDriverManager_IVRDriverManager_001_GetDriverName(winIVRDriverManager_IVRDriverManager_001 *_this, DriverId_t nDriver, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRDriverManager_IVRDriverManager_001_GetDriverName(_this->linux_side, nDriver, pchValue, unBufferSize);
}

extern vtable_ptr winIVRDriverManager_IVRDriverManager_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRDriverManager_IVRDriverManager_001,
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_GetDriverCount)
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_GetDriverName)
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

