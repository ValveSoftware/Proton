/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRMailbox_IVRMailbox_001_undoc1, 12)
DEFINE_THISCALL_WRAPPER(winIVRMailbox_IVRMailbox_001_undoc2, 12)
DEFINE_THISCALL_WRAPPER(winIVRMailbox_IVRMailbox_001_undoc3, 20)
DEFINE_THISCALL_WRAPPER(winIVRMailbox_IVRMailbox_001_undoc4, 24)

uint32_t __thiscall winIVRMailbox_IVRMailbox_001_undoc1(struct w_steam_iface *_this, const char *a, uint64_t *b)
{
    struct IVRMailbox_IVRMailbox_001_undoc1_params params =
    {
        .linux_side = _this->u_iface,
        .a = a,
        .b = b,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRMailbox_IVRMailbox_001_undoc1, &params );
    return params._ret;
}

uint32_t __thiscall winIVRMailbox_IVRMailbox_001_undoc2(struct w_steam_iface *_this, uint64_t a)
{
    struct IVRMailbox_IVRMailbox_001_undoc2_params params =
    {
        .linux_side = _this->u_iface,
        .a = a,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRMailbox_IVRMailbox_001_undoc2, &params );
    return params._ret;
}

uint32_t __thiscall winIVRMailbox_IVRMailbox_001_undoc3(struct w_steam_iface *_this, uint64_t a, const char *b, const char *c)
{
    struct IVRMailbox_IVRMailbox_001_undoc3_params params =
    {
        .linux_side = _this->u_iface,
        .a = a,
        .b = b,
        .c = c,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRMailbox_IVRMailbox_001_undoc3, &params );
    return params._ret;
}

uint32_t __thiscall winIVRMailbox_IVRMailbox_001_undoc4(struct w_steam_iface *_this, uint64_t a, char *b, uint32_t c, uint32_t *d)
{
    struct IVRMailbox_IVRMailbox_001_undoc4_params params =
    {
        .linux_side = _this->u_iface,
        .a = a,
        .b = b,
        .c = c,
        .d = d,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRMailbox_IVRMailbox_001_undoc4, &params );
    return params._ret;
}

extern vtable_ptr winIVRMailbox_IVRMailbox_001_vtable;

DEFINE_RTTI_DATA0(winIVRMailbox_IVRMailbox_001, 0, ".?AVIVRMailbox@@")

__ASM_BLOCK_BEGIN(winIVRMailbox_IVRMailbox_001_vtables)
    __ASM_VTABLE(winIVRMailbox_IVRMailbox_001,
        VTABLE_ADD_FUNC(winIVRMailbox_IVRMailbox_001_undoc1)
        VTABLE_ADD_FUNC(winIVRMailbox_IVRMailbox_001_undoc2)
        VTABLE_ADD_FUNC(winIVRMailbox_IVRMailbox_001_undoc3)
        VTABLE_ADD_FUNC(winIVRMailbox_IVRMailbox_001_undoc4)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRMailbox_IVRMailbox_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRMailbox_IVRMailbox_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRMailbox_IVRMailbox_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRMailbox_IVRMailbox_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRMailbox_IVRMailbox_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRMailbox_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRMailbox_IVRMailbox_001_rtti( base );
#endif /* __x86_64__ */
}
