/* This file is auto-generated, do not edit. */

#include "config.h"
#include "wine/port.h"

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

#include "cppIVRExtendedDisplay_IVRExtendedDisplay_001.h"

typedef struct __winIVRExtendedDisplay_IVRExtendedDisplay_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRExtendedDisplay_IVRExtendedDisplay_001;

DEFINE_THISCALL_WRAPPER(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds, 36)
void __thiscall winIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds(winIVRExtendedDisplay_IVRExtendedDisplay_001 *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds(_this->linux_side, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport, 40)
void __thiscall winIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport(winIVRExtendedDisplay_IVRExtendedDisplay_001 *_this, EVREye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport(_this->linux_side, eEye, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo, 20)
void __thiscall winIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo(winIVRExtendedDisplay_IVRExtendedDisplay_001 *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    TRACE("%p\n", _this);
    cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo(_this->linux_side, pnAdapterIndex, pnAdapterOutputIndex);
}

extern vtable_ptr winIVRExtendedDisplay_IVRExtendedDisplay_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRExtendedDisplay_IVRExtendedDisplay_001,
        VTABLE_ADD_FUNC(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds)
        VTABLE_ADD_FUNC(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport)
        VTABLE_ADD_FUNC(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo)
    );
#ifndef __GNUC__
}
#endif

winIVRExtendedDisplay_IVRExtendedDisplay_001 *create_winIVRExtendedDisplay_IVRExtendedDisplay_001(void *linux_side)
{
    winIVRExtendedDisplay_IVRExtendedDisplay_001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRExtendedDisplay_IVRExtendedDisplay_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRExtendedDisplay_IVRExtendedDisplay_001_vtable;
    r->linux_side = linux_side;
    return r;
}

