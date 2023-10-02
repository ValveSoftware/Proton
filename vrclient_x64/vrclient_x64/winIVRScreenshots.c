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
    struct cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot_params params =
    {
        .linux_side = _this->u_iface,
        .pOutScreenshotHandle = pOutScreenshotHandle,
        .type = type,
        .pchPreviewFilename = pchPreviewFilename,
        .pchVRFilename = pchVRFilename,
    };
    params.pchPreviewFilename = vrclient_dos_to_unix_path( pchPreviewFilename );
    params.pchVRFilename = vrclient_dos_to_unix_path( pchVRFilename );
    TRACE("%p\n", _this);
    cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot( &params );
    vrclient_free_path( params.pchPreviewFilename );
    vrclient_free_path( params.pchVRFilename );
    return params._ret;
}

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_HookScreenshot(struct w_steam_iface *_this, const EVRScreenshotType *pSupportedTypes, int numTypes)
{
    struct cppIVRScreenshots_IVRScreenshots_001_HookScreenshot_params params =
    {
        .linux_side = _this->u_iface,
        .pSupportedTypes = pSupportedTypes,
        .numTypes = numTypes,
    };
    TRACE("%p\n", _this);
    cppIVRScreenshots_IVRScreenshots_001_HookScreenshot( &params );
    return params._ret;
}

EVRScreenshotType __thiscall winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType(struct w_steam_iface *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotError *pError)
{
    struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType_params params =
    {
        .linux_side = _this->u_iface,
        .screenshotHandle = screenshotHandle,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType( &params );
    return params._ret;
}

uint32_t __thiscall winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename(struct w_steam_iface *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char *pchFilename, uint32_t cchFilename, EVRScreenshotError *pError)
{
    struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename_params params =
    {
        .linux_side = _this->u_iface,
        .screenshotHandle = screenshotHandle,
        .filenameType = filenameType,
        .pchFilename = pchFilename,
        .cchFilename = cchFilename,
        .pError = pError,
    };
    TRACE("%p\n", _this);
    cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename( &params );
    params._ret = vrclient_unix_path_to_dos_path( params._ret, pchFilename, pchFilename, cchFilename );
    return params._ret;
}

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress(struct w_steam_iface *_this, ScreenshotHandle_t screenshotHandle, float flProgress)
{
    struct cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress_params params =
    {
        .linux_side = _this->u_iface,
        .screenshotHandle = screenshotHandle,
        .flProgress = flProgress,
    };
    TRACE("%p\n", _this);
    cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress( &params );
    return params._ret;
}

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot(struct w_steam_iface *_this, ScreenshotHandle_t *pOutScreenshotHandle, const char *pchPreviewFilename, const char *pchVRFilename)
{
    struct cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot_params params =
    {
        .linux_side = _this->u_iface,
        .pOutScreenshotHandle = pOutScreenshotHandle,
        .pchPreviewFilename = pchPreviewFilename,
        .pchVRFilename = pchVRFilename,
    };
    params.pchPreviewFilename = vrclient_dos_to_unix_path( pchPreviewFilename );
    params.pchVRFilename = vrclient_dos_to_unix_path( pchVRFilename );
    TRACE("%p\n", _this);
    cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot( &params );
    vrclient_free_path( params.pchPreviewFilename );
    vrclient_free_path( params.pchVRFilename );
    return params._ret;
}

EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_SubmitScreenshot(struct w_steam_iface *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, const char *pchSourcePreviewFilename, const char *pchSourceVRFilename)
{
    struct cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot_params params =
    {
        .linux_side = _this->u_iface,
        .screenshotHandle = screenshotHandle,
        .type = type,
        .pchSourcePreviewFilename = pchSourcePreviewFilename,
        .pchSourceVRFilename = pchSourceVRFilename,
    };
    params.pchSourcePreviewFilename = vrclient_dos_to_unix_path( pchSourcePreviewFilename );
    params.pchSourceVRFilename = vrclient_dos_to_unix_path( pchSourceVRFilename );
    TRACE("%p\n", _this);
    cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot( &params );
    vrclient_free_path( params.pchSourcePreviewFilename );
    vrclient_free_path( params.pchSourceVRFilename );
    return params._ret;
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

