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

#include "cppIVRNotifications_IVRNotifications_001.h"

DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_001_GetErrorString, 16)
DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_001_CreateNotification, 40)
DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_001_DismissNotification, 8)

uint32_t __thiscall winIVRNotifications_IVRNotifications_001_GetErrorString(struct w_steam_iface *_this, NotificationError_t error, char *pchBuffer, uint32_t unBufferSize)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRNotifications_IVRNotifications_001_GetErrorString(_this->u_iface, error, pchBuffer, unBufferSize);
    return _ret;
}

NotificationError_t __thiscall winIVRNotifications_IVRNotifications_001_CreateNotification(struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, const char *strType, const char *strText, const char *strCategory, const NotificationBitmap *photo, VRNotificationId *notificationId)
{
    NotificationError_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRNotifications_IVRNotifications_001_CreateNotification(_this->u_iface, ulOverlayHandle, ulUserValue, strType, strText, strCategory, photo, notificationId);
    return _ret;
}

NotificationError_t __thiscall winIVRNotifications_IVRNotifications_001_DismissNotification(struct w_steam_iface *_this, VRNotificationId notificationId)
{
    NotificationError_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRNotifications_IVRNotifications_001_DismissNotification(_this->u_iface, notificationId);
    return _ret;
}

extern vtable_ptr winIVRNotifications_IVRNotifications_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRNotifications_IVRNotifications_001,
        VTABLE_ADD_FUNC(winIVRNotifications_IVRNotifications_001_GetErrorString)
        VTABLE_ADD_FUNC(winIVRNotifications_IVRNotifications_001_CreateNotification)
        VTABLE_ADD_FUNC(winIVRNotifications_IVRNotifications_001_DismissNotification)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVRNotifications_IVRNotifications_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRNotifications_IVRNotifications_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRNotifications_IVRNotifications_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRNotifications_IVRNotifications_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(3);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 3 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRNotifications_IVRNotifications_001_GetErrorString, 3, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRNotifications_IVRNotifications_001_CreateNotification, 7, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRNotifications_IVRNotifications_001_DismissNotification, 1, FALSE, FALSE);
    for (i = 0; i < 3; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRNotifications_IVRNotifications_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRNotifications_IVRNotifications_002.h"

DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_002_CreateNotification, 40)
DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_002_RemoveNotification, 8)

EVRNotificationError __thiscall winIVRNotifications_IVRNotifications_002_CreateNotification(struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, const char *pchText, EVRNotificationStyle style, const NotificationBitmap_t *pImage, VRNotificationId *pNotificationId)
{
    EVRNotificationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRNotifications_IVRNotifications_002_CreateNotification(_this->u_iface, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
    return _ret;
}

EVRNotificationError __thiscall winIVRNotifications_IVRNotifications_002_RemoveNotification(struct w_steam_iface *_this, VRNotificationId notificationId)
{
    EVRNotificationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRNotifications_IVRNotifications_002_RemoveNotification(_this->u_iface, notificationId);
    return _ret;
}

extern vtable_ptr winIVRNotifications_IVRNotifications_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRNotifications_IVRNotifications_002,
        VTABLE_ADD_FUNC(winIVRNotifications_IVRNotifications_002_CreateNotification)
        VTABLE_ADD_FUNC(winIVRNotifications_IVRNotifications_002_RemoveNotification)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVRNotifications_IVRNotifications_002(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRNotifications_IVRNotifications_002_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRNotifications_IVRNotifications_002(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRNotifications_IVRNotifications_002_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(2);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 2 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRNotifications_IVRNotifications_002_CreateNotification, 7, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRNotifications_IVRNotifications_002_RemoveNotification, 1, FALSE, FALSE);
    for (i = 0; i < 2; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRNotifications_IVRNotifications_002_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

