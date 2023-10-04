/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_GetDriverCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_GetDriverName, 16)
DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_GetDriverHandle, 8)
DEFINE_THISCALL_WRAPPER(winIVRDriverManager_IVRDriverManager_001_IsEnabled, 8)

uint32_t __thiscall winIVRDriverManager_IVRDriverManager_001_GetDriverCount(struct w_steam_iface *_this)
{
    struct IVRDriverManager_IVRDriverManager_001_GetDriverCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRDriverManager_IVRDriverManager_001_GetDriverCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRDriverManager_IVRDriverManager_001_GetDriverName(struct w_steam_iface *_this, uint32_t nDriver, char *pchValue, uint32_t unBufferSize)
{
    struct IVRDriverManager_IVRDriverManager_001_GetDriverName_params params =
    {
        .linux_side = _this->u_iface,
        .nDriver = nDriver,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRDriverManager_IVRDriverManager_001_GetDriverName, &params );
    return params._ret;
}

uint64_t __thiscall winIVRDriverManager_IVRDriverManager_001_GetDriverHandle(struct w_steam_iface *_this, const char *pchDriverName)
{
    struct IVRDriverManager_IVRDriverManager_001_GetDriverHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchDriverName = pchDriverName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRDriverManager_IVRDriverManager_001_GetDriverHandle, &params );
    return params._ret;
}

int8_t __thiscall winIVRDriverManager_IVRDriverManager_001_IsEnabled(struct w_steam_iface *_this, uint32_t nDriver)
{
    struct IVRDriverManager_IVRDriverManager_001_IsEnabled_params params =
    {
        .linux_side = _this->u_iface,
        .nDriver = nDriver,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRDriverManager_IVRDriverManager_001_IsEnabled, &params );
    return params._ret;
}

extern vtable_ptr winIVRDriverManager_IVRDriverManager_001_vtable;

DEFINE_RTTI_DATA0(winIVRDriverManager_IVRDriverManager_001, 0, ".?AVIVRDriverManager@@")

__ASM_BLOCK_BEGIN(winIVRDriverManager_IVRDriverManager_001_vtables)
    __ASM_VTABLE(winIVRDriverManager_IVRDriverManager_001,
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_GetDriverCount)
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_GetDriverName)
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_GetDriverHandle)
        VTABLE_ADD_FUNC(winIVRDriverManager_IVRDriverManager_001_IsEnabled)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRDriverManager_IVRDriverManager_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRDriverManager_IVRDriverManager_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRDriverManager_IVRDriverManager_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRDriverManager_IVRDriverManager_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRDriverManager_IVRDriverManager_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRDriverManager_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRDriverManager_IVRDriverManager_001_rtti( base );
#endif /* __x86_64__ */
}
