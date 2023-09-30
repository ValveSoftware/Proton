/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRResources_IVRResources_001_LoadSharedResource, 16)
DEFINE_THISCALL_WRAPPER(winIVRResources_IVRResources_001_GetResourceFullPath, 20)

uint32_t __thiscall winIVRResources_IVRResources_001_LoadSharedResource(struct w_steam_iface *_this, const char *pchResourceName, char *pchBuffer, uint32_t unBufferLen)
{
    struct IVRResources_IVRResources_001_LoadSharedResource_params params =
    {
        .linux_side = _this->u_iface,
        .pchResourceName = pchResourceName,
        .pchBuffer = pchBuffer,
        .unBufferLen = unBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRResources_IVRResources_001_LoadSharedResource, &params );
    return params._ret;
}

uint32_t __thiscall winIVRResources_IVRResources_001_GetResourceFullPath(struct w_steam_iface *_this, const char *pchResourceName, const char *pchResourceTypeDirectory, char *pchPathBuffer, uint32_t unBufferLen)
{
    struct IVRResources_IVRResources_001_GetResourceFullPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchResourceName = pchResourceName,
        .pchResourceTypeDirectory = pchResourceTypeDirectory,
        .pchPathBuffer = pchPathBuffer,
        .unBufferLen = unBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRResources_IVRResources_001_GetResourceFullPath, &params );
    return params._ret;
}

extern vtable_ptr winIVRResources_IVRResources_001_vtable;

DEFINE_RTTI_DATA0(winIVRResources_IVRResources_001, 0, ".?AVIVRResources@@")

__ASM_BLOCK_BEGIN(winIVRResources_IVRResources_001_vtables)
    __ASM_VTABLE(winIVRResources_IVRResources_001,
        VTABLE_ADD_FUNC(winIVRResources_IVRResources_001_LoadSharedResource)
        VTABLE_ADD_FUNC(winIVRResources_IVRResources_001_GetResourceFullPath)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRResources_IVRResources_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRResources_IVRResources_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRResources_IVRResources_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRResources_IVRResources_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(2);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 2 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRResources_IVRResources_001_LoadSharedResource, 3, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRResources_IVRResources_001_GetResourceFullPath, 4, FALSE, FALSE);
    for (i = 0; i < 2; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRResources_IVRResources_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRResources_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRResources_IVRResources_001_rtti( base );
#endif /* __x86_64__ */
}
