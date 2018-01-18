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

#include "cppIVRResources_IVRResources_001.h"

typedef struct __winIVRResources_IVRResources_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRResources_IVRResources_001;

DEFINE_THISCALL_WRAPPER(winIVRResources_IVRResources_001_LoadSharedResource, 24)
uint32_t __thiscall winIVRResources_IVRResources_001_LoadSharedResource(winIVRResources_IVRResources_001 *_this, const char * pchResourceName, char * pchBuffer, uint32_t unBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRResources_IVRResources_001_LoadSharedResource(_this->linux_side, pchResourceName, pchBuffer, unBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRResources_IVRResources_001_GetResourceFullPath, 32)
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
    winIVRResources_IVRResources_001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRResources_IVRResources_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRResources_IVRResources_001_vtable;
    r->linux_side = linux_side;
    return r;
}

