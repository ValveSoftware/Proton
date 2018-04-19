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

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRChaperone_IVRChaperone_003.h"

typedef struct __winIVRChaperone_IVRChaperone_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRChaperone_IVRChaperone_003;

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetCalibrationState, 4)
ChaperoneCalibrationState __thiscall winIVRChaperone_IVRChaperone_003_GetCalibrationState(winIVRChaperone_IVRChaperone_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_003_GetCalibrationState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetPlayAreaSize, 20)
bool __thiscall winIVRChaperone_IVRChaperone_003_GetPlayAreaSize(winIVRChaperone_IVRChaperone_003 *_this, float * pSizeX, float * pSizeZ)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize(_this->linux_side, pSizeX, pSizeZ);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetPlayAreaRect, 12)
bool __thiscall winIVRChaperone_IVRChaperone_003_GetPlayAreaRect(winIVRChaperone_IVRChaperone_003 *_this, HmdQuad_t * rect)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect(_this->linux_side, rect);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_ReloadInfo, 4)
void __thiscall winIVRChaperone_IVRChaperone_003_ReloadInfo(winIVRChaperone_IVRChaperone_003 *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_003_ReloadInfo(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_SetSceneColor, 20)
void __thiscall winIVRChaperone_IVRChaperone_003_SetSceneColor(winIVRChaperone_IVRChaperone_003 *_this, HmdColor_t color)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_003_SetSceneColor(_this->linux_side, color);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetBoundsColor, 28)
void __thiscall winIVRChaperone_IVRChaperone_003_GetBoundsColor(winIVRChaperone_IVRChaperone_003 *_this, HmdColor_t * pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t * pOutputCameraColor)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_003_GetBoundsColor(_this->linux_side, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_AreBoundsVisible, 4)
bool __thiscall winIVRChaperone_IVRChaperone_003_AreBoundsVisible(winIVRChaperone_IVRChaperone_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_003_AreBoundsVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_ForceBoundsVisible, 5)
void __thiscall winIVRChaperone_IVRChaperone_003_ForceBoundsVisible(winIVRChaperone_IVRChaperone_003 *_this, bool bForce)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible(_this->linux_side, bForce);
}

extern vtable_ptr winIVRChaperone_IVRChaperone_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRChaperone_IVRChaperone_003,
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_003_GetCalibrationState)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_003_GetPlayAreaSize)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_003_GetPlayAreaRect)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_003_ReloadInfo)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_003_SetSceneColor)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_003_GetBoundsColor)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_003_AreBoundsVisible)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_003_ForceBoundsVisible)
    );
#ifndef __GNUC__
}
#endif

winIVRChaperone_IVRChaperone_003 *create_winIVRChaperone_IVRChaperone_003(void *linux_side)
{
    winIVRChaperone_IVRChaperone_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRChaperone_IVRChaperone_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperone_IVRChaperone_003_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRChaperone_IVRChaperone_003(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRChaperone_IVRChaperone_002.h"

typedef struct __winIVRChaperone_IVRChaperone_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRChaperone_IVRChaperone_002;

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetCalibrationState, 4)
ChaperoneCalibrationState __thiscall winIVRChaperone_IVRChaperone_002_GetCalibrationState(winIVRChaperone_IVRChaperone_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_002_GetCalibrationState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo, 12)
bool __thiscall winIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo(winIVRChaperone_IVRChaperone_002 *_this, ChaperoneSoftBoundsInfo_t * pInfo)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo(_this->linux_side, pInfo);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetHardBoundsInfo, 20)
bool __thiscall winIVRChaperone_IVRChaperone_002_GetHardBoundsInfo(winIVRChaperone_IVRChaperone_002 *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo(_this->linux_side, pQuadsBuffer, punQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo, 12)
bool __thiscall winIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo(winIVRChaperone_IVRChaperone_002 *_this, ChaperoneSeatedBoundsInfo_t * pInfo)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo(_this->linux_side, pInfo);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_ReloadInfo, 4)
void __thiscall winIVRChaperone_IVRChaperone_002_ReloadInfo(winIVRChaperone_IVRChaperone_002 *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_002_ReloadInfo(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_SetSceneColor, 20)
void __thiscall winIVRChaperone_IVRChaperone_002_SetSceneColor(winIVRChaperone_IVRChaperone_002 *_this, HmdColor_t color)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_002_SetSceneColor(_this->linux_side, color);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetBoundsColor, 16)
void __thiscall winIVRChaperone_IVRChaperone_002_GetBoundsColor(winIVRChaperone_IVRChaperone_002 *_this, HmdColor_t * pOutputColorArray, int nNumOutputColors)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_002_GetBoundsColor(_this->linux_side, pOutputColorArray, nNumOutputColors);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_AreBoundsVisible, 4)
bool __thiscall winIVRChaperone_IVRChaperone_002_AreBoundsVisible(winIVRChaperone_IVRChaperone_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRChaperone_IVRChaperone_002_AreBoundsVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_ForceBoundsVisible, 5)
void __thiscall winIVRChaperone_IVRChaperone_002_ForceBoundsVisible(winIVRChaperone_IVRChaperone_002 *_this, bool bForce)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible(_this->linux_side, bForce);
}

extern vtable_ptr winIVRChaperone_IVRChaperone_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRChaperone_IVRChaperone_002,
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_GetCalibrationState)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_GetHardBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_ReloadInfo)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_SetSceneColor)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_GetBoundsColor)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_AreBoundsVisible)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_002_ForceBoundsVisible)
    );
#ifndef __GNUC__
}
#endif

winIVRChaperone_IVRChaperone_002 *create_winIVRChaperone_IVRChaperone_002(void *linux_side)
{
    winIVRChaperone_IVRChaperone_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRChaperone_IVRChaperone_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperone_IVRChaperone_002_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRChaperone_IVRChaperone_002(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

