/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRIOBuffer_IVRIOBuffer_001.h"

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Open, 24)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Close, 12)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Read, 24)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Write, 20)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer, 12)

EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_001_Open(struct w_steam_iface *_this, const char *pchPath, EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, IOBufferHandle_t *pulBuffer)
{
    EIOBufferError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_001_Open(_this->u_iface, pchPath, mode, unElementSize, unElements, pulBuffer);
    return _ret;
}

EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_001_Close(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer)
{
    EIOBufferError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_001_Close(_this->u_iface, ulBuffer);
    return _ret;
}

EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_001_Read(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer, void *pDst, uint32_t unBytes, uint32_t *punRead)
{
    EIOBufferError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_001_Read(_this->u_iface, ulBuffer, pDst, unBytes, punRead);
    return _ret;
}

EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_001_Write(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer, void *pSrc, uint32_t unBytes)
{
    EIOBufferError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_001_Write(_this->u_iface, ulBuffer, pSrc, unBytes);
    return _ret;
}

PropertyContainerHandle_t __thiscall winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer)
{
    PropertyContainerHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer(_this->u_iface, ulBuffer);
    return _ret;
}

extern vtable_ptr winIVRIOBuffer_IVRIOBuffer_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRIOBuffer_IVRIOBuffer_001,
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Open)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Close)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Read)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Write)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer)
    );
#ifndef __GNUC__
}
#endif

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

#include "cppIVRIOBuffer_IVRIOBuffer_002.h"

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_Open, 24)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_Close, 12)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_Read, 24)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_Write, 20)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_PropertyContainer, 12)
DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_002_HasReaders, 12)

EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_002_Open(struct w_steam_iface *_this, const char *pchPath, EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, IOBufferHandle_t *pulBuffer)
{
    EIOBufferError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_002_Open(_this->u_iface, pchPath, mode, unElementSize, unElements, pulBuffer);
    return _ret;
}

EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_002_Close(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer)
{
    EIOBufferError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_002_Close(_this->u_iface, ulBuffer);
    return _ret;
}

EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_002_Read(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer, void *pDst, uint32_t unBytes, uint32_t *punRead)
{
    EIOBufferError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_002_Read(_this->u_iface, ulBuffer, pDst, unBytes, punRead);
    return _ret;
}

EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_002_Write(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer, void *pSrc, uint32_t unBytes)
{
    EIOBufferError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_002_Write(_this->u_iface, ulBuffer, pSrc, unBytes);
    return _ret;
}

PropertyContainerHandle_t __thiscall winIVRIOBuffer_IVRIOBuffer_002_PropertyContainer(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer)
{
    PropertyContainerHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer(_this->u_iface, ulBuffer);
    return _ret;
}

bool __thiscall winIVRIOBuffer_IVRIOBuffer_002_HasReaders(struct w_steam_iface *_this, IOBufferHandle_t ulBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRIOBuffer_IVRIOBuffer_002_HasReaders(_this->u_iface, ulBuffer);
    return _ret;
}

extern vtable_ptr winIVRIOBuffer_IVRIOBuffer_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRIOBuffer_IVRIOBuffer_002,
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_Open)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_Close)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_Read)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_Write)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_PropertyContainer)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_002_HasReaders)
    );
#ifndef __GNUC__
}
#endif

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

