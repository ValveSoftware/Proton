/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Open, 24)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Close, 12)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Read, 24)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Write, 20)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer, 12)

uint32_t __thiscall winIVRIOBuffer_IVRIOBuffer_001_Open(struct w_steam_iface *_this, const char *pchPath, uint32_t mode, uint32_t unElementSize, uint32_t unElements, uint64_t *pulBuffer)
{
    struct IVRIOBuffer_IVRIOBuffer_001_Open_params params =
    {
        .linux_side = _this->u_iface,
        .pchPath = pchPath,
        .mode = mode,
        .unElementSize = unElementSize,
        .unElements = unElements,
        .pulBuffer = pulBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_001_Open, &params );
    return params._ret;
}

uint32_t __thiscall winIVRIOBuffer_IVRIOBuffer_001_Close(struct w_steam_iface *_this, uint64_t ulBuffer)
{
    struct IVRIOBuffer_IVRIOBuffer_001_Close_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_001_Close, &params );
    return params._ret;
}

uint32_t __thiscall winIVRIOBuffer_IVRIOBuffer_001_Read(struct w_steam_iface *_this, uint64_t ulBuffer, void *pDst, uint32_t unBytes, uint32_t *punRead)
{
    struct IVRIOBuffer_IVRIOBuffer_001_Read_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
        .pDst = pDst,
        .unBytes = unBytes,
        .punRead = punRead,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_001_Read, &params );
    return params._ret;
}

uint32_t __thiscall winIVRIOBuffer_IVRIOBuffer_001_Write(struct w_steam_iface *_this, uint64_t ulBuffer, void *pSrc, uint32_t unBytes)
{
    struct IVRIOBuffer_IVRIOBuffer_001_Write_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
        .pSrc = pSrc,
        .unBytes = unBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_001_Write, &params );
    return params._ret;
}

uint64_t __thiscall winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer(struct w_steam_iface *_this, uint64_t ulBuffer)
{
    struct IVRIOBuffer_IVRIOBuffer_001_PropertyContainer_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_001_PropertyContainer, &params );
    return params._ret;
}

extern vtable_ptr winIVRIOBuffer_IVRIOBuffer_001_vtable;

DEFINE_RTTI_DATA0(winIVRIOBuffer_IVRIOBuffer_001, 0, ".?AVIVRIOBuffer@@")

__ASM_BLOCK_BEGIN(winIVRIOBuffer_IVRIOBuffer_001_vtables)
    __ASM_VTABLE(winIVRIOBuffer_IVRIOBuffer_001,
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Open)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Close)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Read)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Write)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRIOBuffer_IVRIOBuffer_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRIOBuffer_IVRIOBuffer_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRIOBuffer_IVRIOBuffer_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRIOBuffer_IVRIOBuffer_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(5);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 5 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRIOBuffer_IVRIOBuffer_001_Open, 5, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRIOBuffer_IVRIOBuffer_001_Close, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRIOBuffer_IVRIOBuffer_001_Read, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRIOBuffer_IVRIOBuffer_001_Write, 3, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer, 1, FALSE, FALSE);
    for (i = 0; i < 5; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRIOBuffer_IVRIOBuffer_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_Open, 24)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_Close, 12)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_Read, 24)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_Write, 20)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_PropertyContainer, 12)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_HasReaders, 12)

uint32_t __thiscall winIVRIOBuffer_IVRIOBuffer_002_Open(struct w_steam_iface *_this, const char *pchPath, uint32_t mode, uint32_t unElementSize, uint32_t unElements, uint64_t *pulBuffer)
{
    struct IVRIOBuffer_IVRIOBuffer_002_Open_params params =
    {
        .linux_side = _this->u_iface,
        .pchPath = pchPath,
        .mode = mode,
        .unElementSize = unElementSize,
        .unElements = unElements,
        .pulBuffer = pulBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_002_Open, &params );
    return params._ret;
}

uint32_t __thiscall winIVRIOBuffer_IVRIOBuffer_002_Close(struct w_steam_iface *_this, uint64_t ulBuffer)
{
    struct IVRIOBuffer_IVRIOBuffer_002_Close_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_002_Close, &params );
    return params._ret;
}

uint32_t __thiscall winIVRIOBuffer_IVRIOBuffer_002_Read(struct w_steam_iface *_this, uint64_t ulBuffer, void *pDst, uint32_t unBytes, uint32_t *punRead)
{
    struct IVRIOBuffer_IVRIOBuffer_002_Read_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
        .pDst = pDst,
        .unBytes = unBytes,
        .punRead = punRead,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_002_Read, &params );
    return params._ret;
}

uint32_t __thiscall winIVRIOBuffer_IVRIOBuffer_002_Write(struct w_steam_iface *_this, uint64_t ulBuffer, void *pSrc, uint32_t unBytes)
{
    struct IVRIOBuffer_IVRIOBuffer_002_Write_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
        .pSrc = pSrc,
        .unBytes = unBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_002_Write, &params );
    return params._ret;
}

uint64_t __thiscall winIVRIOBuffer_IVRIOBuffer_002_PropertyContainer(struct w_steam_iface *_this, uint64_t ulBuffer)
{
    struct IVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_002_PropertyContainer, &params );
    return params._ret;
}

int8_t __thiscall winIVRIOBuffer_IVRIOBuffer_002_HasReaders(struct w_steam_iface *_this, uint64_t ulBuffer)
{
    struct IVRIOBuffer_IVRIOBuffer_002_HasReaders_params params =
    {
        .linux_side = _this->u_iface,
        .ulBuffer = ulBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRIOBuffer_IVRIOBuffer_002_HasReaders, &params );
    return params._ret;
}

extern vtable_ptr winIVRIOBuffer_IVRIOBuffer_002_vtable;

DEFINE_RTTI_DATA0(winIVRIOBuffer_IVRIOBuffer_002, 0, ".?AVIVRIOBuffer@@")

__ASM_BLOCK_BEGIN(winIVRIOBuffer_IVRIOBuffer_002_vtables)
    __ASM_VTABLE(winIVRIOBuffer_IVRIOBuffer_002,
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_Open)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_Close)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_Read)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_Write)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_PropertyContainer)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_HasReaders)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRIOBuffer_IVRIOBuffer_002(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRIOBuffer_IVRIOBuffer_002_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRIOBuffer_IVRIOBuffer_002(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRIOBuffer_IVRIOBuffer_002_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(6);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 6 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRIOBuffer_IVRIOBuffer_002_Open, 5, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRIOBuffer_IVRIOBuffer_002_Close, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRIOBuffer_IVRIOBuffer_002_Read, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRIOBuffer_IVRIOBuffer_002_Write, 3, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRIOBuffer_IVRIOBuffer_002_PropertyContainer, 1, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRIOBuffer_IVRIOBuffer_002_HasReaders, 1, FALSE, FALSE);
    for (i = 0; i < 6; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRIOBuffer_IVRIOBuffer_002_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRIOBuffer_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRIOBuffer_IVRIOBuffer_001_rtti( base );
    init_winIVRIOBuffer_IVRIOBuffer_002_rtti( base );
#endif /* __x86_64__ */
}
