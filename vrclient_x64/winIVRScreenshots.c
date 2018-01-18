/* This file is auto-generated, do not edit. */

#include "config.h"
#include "wine/port.h"

#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRScreenshots_IVRScreenshots_001.h"

typedef struct __winIVRScreenshots_IVRScreenshots_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRScreenshots_IVRScreenshots_001;

DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_RequestScreenshot, 32)
EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_RequestScreenshot(winIVRScreenshots_IVRScreenshots_001 *_this, ScreenshotHandle_t * pOutScreenshotHandle, EVRScreenshotType type, const char * pchPreviewFilename, const char * pchVRFilename)
{
    TRACE("%p\n", _this);
    return cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot(_this->linux_side, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
}

DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_HookScreenshot, 16)
EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_HookScreenshot(winIVRScreenshots_IVRScreenshots_001 *_this, EVRScreenshotType * pSupportedTypes, int numTypes)
{
    TRACE("%p\n", _this);
    return cppIVRScreenshots_IVRScreenshots_001_HookScreenshot(_this->linux_side, pSupportedTypes, numTypes);
}

DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType, 16)
EVRScreenshotType __thiscall winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType(winIVRScreenshots_IVRScreenshots_001 *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType(_this->linux_side, screenshotHandle, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename, 32)
uint32_t __thiscall winIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename(winIVRScreenshots_IVRScreenshots_001 *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char * pchFilename, uint32_t cchFilename, EVRScreenshotError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename(_this->linux_side, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress, 12)
EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress(winIVRScreenshots_IVRScreenshots_001 *_this, ScreenshotHandle_t screenshotHandle, float flProgress)
{
    TRACE("%p\n", _this);
    return cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress(_this->linux_side, screenshotHandle, flProgress);
}

DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot, 28)
EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot(winIVRScreenshots_IVRScreenshots_001 *_this, ScreenshotHandle_t * pOutScreenshotHandle, const char * pchPreviewFilename, const char * pchVRFilename)
{
    TRACE("%p\n", _this);
    return cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot(_this->linux_side, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
}

DEFINE_THISCALL_WRAPPER(winIVRScreenshots_IVRScreenshots_001_SubmitScreenshot, 28)
EVRScreenshotError __thiscall winIVRScreenshots_IVRScreenshots_001_SubmitScreenshot(winIVRScreenshots_IVRScreenshots_001 *_this, ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, const char * pchSourcePreviewFilename, const char * pchSourceVRFilename)
{
    TRACE("%p\n", _this);
    return cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot(_this->linux_side, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
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

winIVRScreenshots_IVRScreenshots_001 *create_winIVRScreenshots_IVRScreenshots_001(void *linux_side)
{
    winIVRScreenshots_IVRScreenshots_001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRScreenshots_IVRScreenshots_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRScreenshots_IVRScreenshots_001_vtable;
    r->linux_side = linux_side;
    return r;
}

