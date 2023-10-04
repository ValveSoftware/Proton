/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode, 8)
DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode, 4)
DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped, 8)
DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped, 4)
DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio, 4)
DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange, 12)
DEFINE_THISCALL_WRAPPER(winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange, 12)

void __thiscall winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize(struct w_steam_iface *_this, uint32_t nWidth, uint32_t nHeight)
{
    struct IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize_params params =
    {
        .linux_side = _this->u_iface,
        .nWidth = nWidth,
        .nHeight = nHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize, &params );
}

void __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize(struct w_steam_iface *_this, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize_params params =
    {
        .linux_side = _this->u_iface,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize, &params );
}

void __thiscall winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode(struct w_steam_iface *_this, uint32_t eHeadsetViewMode)
{
    struct IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode_params params =
    {
        .linux_side = _this->u_iface,
        .eHeadsetViewMode = eHeadsetViewMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode, &params );
}

uint32_t __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode(struct w_steam_iface *_this)
{
    struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode, &params );
    return params._ret;
}

void __thiscall winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped(struct w_steam_iface *_this, int8_t bCropped)
{
    struct IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped_params params =
    {
        .linux_side = _this->u_iface,
        .bCropped = bCropped,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped, &params );
}

int8_t __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped(struct w_steam_iface *_this)
{
    struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped, &params );
    return params._ret;
}

float __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio(struct w_steam_iface *_this)
{
    struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio, &params );
    return params._ret;
}

void __thiscall winIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange(struct w_steam_iface *_this, float flStartPct, float flEndPct)
{
    struct IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange_params params =
    {
        .linux_side = _this->u_iface,
        .flStartPct = flStartPct,
        .flEndPct = flEndPct,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange, &params );
}

void __thiscall winIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange(struct w_steam_iface *_this, float *pStartPct, float *pEndPct)
{
    struct IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange_params params =
    {
        .linux_side = _this->u_iface,
        .pStartPct = pStartPct,
        .pEndPct = pEndPct,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange, &params );
}

extern vtable_ptr winIVRHeadsetView_IVRHeadsetView_001_vtable;

DEFINE_RTTI_DATA0(winIVRHeadsetView_IVRHeadsetView_001, 0, ".?AVIVRHeadsetView@@")

__ASM_BLOCK_BEGIN(winIVRHeadsetView_IVRHeadsetView_001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRHeadsetView_IVRHeadsetView_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRHeadsetView_IVRHeadsetView_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRHeadsetView_IVRHeadsetView_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRHeadsetView_IVRHeadsetView_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRHeadsetView_IVRHeadsetView_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRHeadsetView_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRHeadsetView_IVRHeadsetView_001_rtti( base );
#endif /* __x86_64__ */
}
