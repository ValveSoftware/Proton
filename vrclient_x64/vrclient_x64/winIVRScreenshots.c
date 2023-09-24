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

#include "cppIVRScreenshots_IVRScreenshots_001.h"

DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_RequestScreenshot, 20)
DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_HookScreenshot, 12)
DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType, 12)
DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename, 24)
DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress, 12)
DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot, 16)
DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_SubmitScreenshot, 20)

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_RequestScreenshot(struct w_steam_iface *_this, ScreenshotHandle_t *pOutScreenshotHandle, EVRScreenshotType type, const char *pchPreviewFilename, const char *pchVRFilename)
{
    EVRScreenshotError _ret;
    char lin_pchPreviewFilename[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchPreviewFilename, lin_pchPreviewFilename);
    char lin_pchVRFilename[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchVRFilename, lin_pchVRFilename);
    TRACE("%p\n", _this);
    _ret = cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot(_this->u_iface, pOutScreenshotHandle, type, pchPreviewFilename ? lin_pchPreviewFilename : NULL, pchVRFilename ? lin_pchVRFilename : NULL);
    return _ret;
}

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_HookScreenshot(struct w_steam_iface *_this, const EVRScreenshotType *pSupportedTypes, int numTypes)
{
    EVRScreenshotError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRScreenshots_IVRScreenshots_001_HookScreenshot(_this->u_iface, pSupportedTypes, numTypes);
    return _ret;
}

EVRScreenshotType __thiscall winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType(struct w_steam_iface *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotError *pError)
{
    EVRScreenshotType _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType(_this->u_iface, screenshotHandle, pError);
    return _ret;
}

uint32_t __thiscall winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename(struct w_steam_iface *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char *pchFilename, uint32_t cchFilename, EVRScreenshotError *pError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename(_this->u_iface, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
    _ret = vrclient_unix_path_to_dos_path(_ret, pchFilename, pchFilename, cchFilename);
    return _ret;
}

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress(struct w_steam_iface *_this, ScreenshotHandle_t screenshotHandle, float flProgress)
{
    EVRScreenshotError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress(_this->u_iface, screenshotHandle, flProgress);
    return _ret;
}

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot(struct w_steam_iface *_this, ScreenshotHandle_t *pOutScreenshotHandle, const char *pchPreviewFilename, const char *pchVRFilename)
{
    EVRScreenshotError _ret;
    char lin_pchPreviewFilename[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchPreviewFilename, lin_pchPreviewFilename);
    char lin_pchVRFilename[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchVRFilename, lin_pchVRFilename);
    TRACE("%p\n", _this);
    _ret = cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot(_this->u_iface, pOutScreenshotHandle, pchPreviewFilename ? lin_pchPreviewFilename : NULL, pchVRFilename ? lin_pchVRFilename : NULL);
    return _ret;
}

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_SubmitScreenshot(struct w_steam_iface *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, const char *pchSourcePreviewFilename, const char *pchSourceVRFilename)
{
    EVRScreenshotError _ret;
    char lin_pchSourcePreviewFilename[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchSourcePreviewFilename, lin_pchSourcePreviewFilename);
    char lin_pchSourceVRFilename[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchSourceVRFilename, lin_pchSourceVRFilename);
    TRACE("%p\n", _this);
    _ret = cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot(_this->u_iface, screenshotHandle, type, pchSourcePreviewFilename ? lin_pchSourcePreviewFilename : NULL, pchSourceVRFilename ? lin_pchSourceVRFilename : NULL);
    return _ret;
}

extern vtable_ptr winIVRScreenshots_IVRScreenshots_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRScreenshots_IVRScreenshots_001,
        VTABLE_ADD_FUNC(winIVRScreenshots_IVRScreenshots_001_RequestScreenshot)
        VTABLE_ADD_FUNC(winIVRScreenshots_IVRScreenshots_001_HookScreenshot)
        VTABLE_ADD_FUNC(winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType)
        VTABLE_ADD_FUNC(winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename)
        VTABLE_ADD_FUNC(winIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress)
        VTABLE_ADD_FUNC(winIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot)
        VTABLE_ADD_FUNC(winIVRScreenshots_IVRScreenshots_001_SubmitScreenshot)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVRScreenshots_IVRScreenshots_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRScreenshots_IVRScreenshots_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRScreenshots_IVRScreenshots_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRScreenshots_IVRScreenshots_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(7);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 7 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRScreenshots_IVRScreenshots_001_RequestScreenshot, 4, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRScreenshots_IVRScreenshots_001_HookScreenshot, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename, 5, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress, 2, TRUE, FALSE);
    init_thunk(&thunks[5], r, winIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRScreenshots_IVRScreenshots_001_SubmitScreenshot, 4, FALSE, FALSE);
    for (i = 0; i < 7; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRScreenshots_IVRScreenshots_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

