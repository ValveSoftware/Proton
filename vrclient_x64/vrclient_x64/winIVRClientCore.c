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

#include "cppIVRClientCore_IVRClientCore_002.h"

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_Init, 8)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_Cleanup, 4)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid, 8)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_GetGenericInterface, 12)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_BIsHmdPresent, 4)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError, 8)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_GetIDForVRInitError, 8)

extern uint32_t __thiscall winIVRClientCore_IVRClientCore_002_Init(struct w_steam_iface *_this, EVRApplicationType eApplicationType);

extern void __thiscall winIVRClientCore_IVRClientCore_002_Cleanup(struct w_steam_iface *_this);

uint32_t __thiscall winIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid(struct w_steam_iface *_this, const char *pchInterfaceVersion)
{
    struct cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params params =
    {
        .linux_side = _this->u_iface,
        .pchInterfaceVersion = pchInterfaceVersion,
    };
    TRACE("%p\n", _this);
    cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid( &params );
    return params._ret;
}

extern void * __thiscall winIVRClientCore_IVRClientCore_002_GetGenericInterface(struct w_steam_iface *_this, const char *pchNameAndVersion, uint32_t *peError);

extern bool __thiscall winIVRClientCore_IVRClientCore_002_BIsHmdPresent(struct w_steam_iface *_this);

const char * __thiscall winIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError(struct w_steam_iface *_this, EVRInitError eError)
{
    struct cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params params =
    {
        .linux_side = _this->u_iface,
        .eError = eError,
    };
    TRACE("%p\n", _this);
    cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError( &params );
    return params._ret;
}

const char * __thiscall winIVRClientCore_IVRClientCore_002_GetIDForVRInitError(struct w_steam_iface *_this, EVRInitError eError)
{
    struct cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError_params params =
    {
        .linux_side = _this->u_iface,
        .eError = eError,
    };
    TRACE("%p\n", _this);
    cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError( &params );
    return params._ret;
}

extern vtable_ptr winIVRClientCore_IVRClientCore_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRClientCore_IVRClientCore_002,
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_Init)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_Cleanup)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_GetGenericInterface)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_BIsHmdPresent)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_GetIDForVRInitError)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVRClientCore_IVRClientCore_002(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRClientCore_IVRClientCore_002_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRClientCore_IVRClientCore_002(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRClientCore_IVRClientCore_002_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(7);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 7 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRClientCore_IVRClientCore_002_Init, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRClientCore_IVRClientCore_002_Cleanup, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRClientCore_IVRClientCore_002_GetGenericInterface, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRClientCore_IVRClientCore_002_BIsHmdPresent, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError, 1, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRClientCore_IVRClientCore_002_GetIDForVRInitError, 1, FALSE, FALSE);
    for (i = 0; i < 7; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRClientCore_IVRClientCore_002_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRClientCore_IVRClientCore_003.h"

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_Init, 12)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_Cleanup, 4)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid, 8)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_GetGenericInterface, 12)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_BIsHmdPresent, 4)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError, 8)
DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_GetIDForVRInitError, 8)

extern uint32_t __thiscall winIVRClientCore_IVRClientCore_003_Init(struct w_steam_iface *_this, EVRApplicationType eApplicationType, const char *pStartupInfo);

extern void __thiscall winIVRClientCore_IVRClientCore_003_Cleanup(struct w_steam_iface *_this);

uint32_t __thiscall winIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid(struct w_steam_iface *_this, const char *pchInterfaceVersion)
{
    struct cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid_params params =
    {
        .linux_side = _this->u_iface,
        .pchInterfaceVersion = pchInterfaceVersion,
    };
    TRACE("%p\n", _this);
    cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid( &params );
    return params._ret;
}

extern void * __thiscall winIVRClientCore_IVRClientCore_003_GetGenericInterface(struct w_steam_iface *_this, const char *pchNameAndVersion, uint32_t *peError);

extern bool __thiscall winIVRClientCore_IVRClientCore_003_BIsHmdPresent(struct w_steam_iface *_this);

const char * __thiscall winIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError(struct w_steam_iface *_this, EVRInitError eError)
{
    struct cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError_params params =
    {
        .linux_side = _this->u_iface,
        .eError = eError,
    };
    TRACE("%p\n", _this);
    cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError( &params );
    return params._ret;
}

const char * __thiscall winIVRClientCore_IVRClientCore_003_GetIDForVRInitError(struct w_steam_iface *_this, EVRInitError eError)
{
    struct cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError_params params =
    {
        .linux_side = _this->u_iface,
        .eError = eError,
    };
    TRACE("%p\n", _this);
    cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError( &params );
    return params._ret;
}

extern vtable_ptr winIVRClientCore_IVRClientCore_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRClientCore_IVRClientCore_003,
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_Init)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_Cleanup)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_GetGenericInterface)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_BIsHmdPresent)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_GetIDForVRInitError)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVRClientCore_IVRClientCore_003(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRClientCore_IVRClientCore_003_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRClientCore_IVRClientCore_003(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRClientCore_IVRClientCore_003_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(7);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 7 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRClientCore_IVRClientCore_003_Init, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRClientCore_IVRClientCore_003_Cleanup, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRClientCore_IVRClientCore_003_GetGenericInterface, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRClientCore_IVRClientCore_003_BIsHmdPresent, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError, 1, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRClientCore_IVRClientCore_003_GetIDForVRInitError, 1, FALSE, FALSE);
    for (i = 0; i < 7; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRClientCore_IVRClientCore_003_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

