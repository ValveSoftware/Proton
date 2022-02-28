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

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRNotifications_IVRNotifications_002.h"

typedef struct __winIVRNotifications_IVRNotifications_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRNotifications_IVRNotifications_002;

DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_002_CreateNotification, 40)
EVRNotificationError __thiscall winIVRNotifications_IVRNotifications_002_CreateNotification(winIVRNotifications_IVRNotifications_002 *_this, VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, const char * pchText, EVRNotificationStyle style, NotificationBitmap_t * pImage, VRNotificationId * pNotificationId)
{
    TRACE("%p\n", _this);
    return cppIVRNotifications_IVRNotifications_002_CreateNotification(_this->linux_side, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}

DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_002_RemoveNotification, 8)
EVRNotificationError __thiscall winIVRNotifications_IVRNotifications_002_RemoveNotification(winIVRNotifications_IVRNotifications_002 *_this, VRNotificationId notificationId)
{
    TRACE("%p\n", _this);
    return cppIVRNotifications_IVRNotifications_002_RemoveNotification(_this->linux_side, notificationId);
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

winIVRNotifications_IVRNotifications_002 *create_winIVRNotifications_IVRNotifications_002(void *linux_side)
{
    winIVRNotifications_IVRNotifications_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRNotifications_IVRNotifications_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRNotifications_IVRNotifications_002_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRNotifications_IVRNotifications_002(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRNotifications_IVRNotifications_002 *create_winIVRNotifications_IVRNotifications_002_FnTable(void *linux_side)
{
    winIVRNotifications_IVRNotifications_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRNotifications_IVRNotifications_002));
    struct thunk *thunks = alloc_thunks(2);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 2 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRNotifications_IVRNotifications_002_CreateNotification, 7, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRNotifications_IVRNotifications_002_RemoveNotification, 1, FALSE, FALSE);
    for (i = 0; i < 2; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRNotifications_IVRNotifications_002_FnTable(void *object)
{
    winIVRNotifications_IVRNotifications_002 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRNotifications_IVRNotifications_001.h"

typedef struct __winIVRNotifications_IVRNotifications_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRNotifications_IVRNotifications_001;

DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_001_GetErrorString, 16)
uint32_t __thiscall winIVRNotifications_IVRNotifications_001_GetErrorString(winIVRNotifications_IVRNotifications_001 *_this, NotificationError_t error, char * pchBuffer, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRNotifications_IVRNotifications_001_GetErrorString(_this->linux_side, error, pchBuffer, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_001_CreateNotification, 40)
NotificationError_t __thiscall winIVRNotifications_IVRNotifications_001_CreateNotification(winIVRNotifications_IVRNotifications_001 *_this, VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, const char * strType, const char * strText, const char * strCategory, NotificationBitmap * photo, VRNotificationId * notificationId)
{
    TRACE("%p\n", _this);
    return cppIVRNotifications_IVRNotifications_001_CreateNotification(_this->linux_side, ulOverlayHandle, ulUserValue, strType, strText, strCategory, photo, notificationId);
}

DEFINE_THISCALL_WRAPPER(winIVRNotifications_IVRNotifications_001_DismissNotification, 8)
NotificationError_t __thiscall winIVRNotifications_IVRNotifications_001_DismissNotification(winIVRNotifications_IVRNotifications_001 *_this, VRNotificationId notificationId)
{
    TRACE("%p\n", _this);
    return cppIVRNotifications_IVRNotifications_001_DismissNotification(_this->linux_side, notificationId);
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

winIVRNotifications_IVRNotifications_001 *create_winIVRNotifications_IVRNotifications_001(void *linux_side)
{
    winIVRNotifications_IVRNotifications_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRNotifications_IVRNotifications_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRNotifications_IVRNotifications_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRNotifications_IVRNotifications_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRNotifications_IVRNotifications_001 *create_winIVRNotifications_IVRNotifications_001_FnTable(void *linux_side)
{
    winIVRNotifications_IVRNotifications_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRNotifications_IVRNotifications_001));
    struct thunk *thunks = alloc_thunks(3);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 3 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRNotifications_IVRNotifications_001_GetErrorString, 3, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRNotifications_IVRNotifications_001_CreateNotification, 7, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRNotifications_IVRNotifications_001_DismissNotification, 1, FALSE, FALSE);
    for (i = 0; i < 3; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRNotifications_IVRNotifications_001_FnTable(void *object)
{
    winIVRNotifications_IVRNotifications_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

