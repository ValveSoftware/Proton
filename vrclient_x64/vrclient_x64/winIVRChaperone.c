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

#include "cppIVRChaperone_IVRChaperone_002.h"

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetCalibrationState, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetHardBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_ReloadInfo, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_SetSceneColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetBoundsColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_AreBoundsVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_ForceBoundsVisible, 8)

ChaperoneCalibrationState __thiscall winIVRChaperone_IVRChaperone_002_GetCalibrationState(struct w_steam_iface *_this)
{
    ChaperoneCalibrationState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_002_GetCalibrationState(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo(struct w_steam_iface *_this, ChaperoneSoftBoundsInfo_t *pInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo(_this->u_iface, pInfo);
    return _ret;
}

bool __thiscall winIVRChaperone_IVRChaperone_002_GetHardBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo(_this->u_iface, pQuadsBuffer, punQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo(struct w_steam_iface *_this, ChaperoneSeatedBoundsInfo_t *pInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo(_this->u_iface, pInfo);
    return _ret;
}

void __thiscall winIVRChaperone_IVRChaperone_002_ReloadInfo(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_002_ReloadInfo(_this->u_iface);
}

void __thiscall winIVRChaperone_IVRChaperone_002_SetSceneColor(struct w_steam_iface *_this, HmdColor_t color)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_002_SetSceneColor(_this->u_iface, color);
}

void __thiscall winIVRChaperone_IVRChaperone_002_GetBoundsColor(struct w_steam_iface *_this, HmdColor_t *pOutputColorArray, int nNumOutputColors)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_002_GetBoundsColor(_this->u_iface, pOutputColorArray, nNumOutputColors);
}

bool __thiscall winIVRChaperone_IVRChaperone_002_AreBoundsVisible(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_002_AreBoundsVisible(_this->u_iface);
    return _ret;
}

void __thiscall winIVRChaperone_IVRChaperone_002_ForceBoundsVisible(struct w_steam_iface *_this, bool bForce)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible(_this->u_iface, bForce);
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

struct w_steam_iface *create_winIVRChaperone_IVRChaperone_002(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperone_IVRChaperone_002_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRChaperone_IVRChaperone_002(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRChaperone_IVRChaperone_002_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(9);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 9 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRChaperone_IVRChaperone_002_GetCalibrationState, 0, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRChaperone_IVRChaperone_002_GetHardBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRChaperone_IVRChaperone_002_ReloadInfo, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRChaperone_IVRChaperone_002_SetSceneColor, 1, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRChaperone_IVRChaperone_002_GetBoundsColor, 2, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRChaperone_IVRChaperone_002_AreBoundsVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRChaperone_IVRChaperone_002_ForceBoundsVisible, 1, FALSE, FALSE);
    for (i = 0; i < 9; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperone_IVRChaperone_002_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRChaperone_IVRChaperone_003.h"

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetCalibrationState, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetPlayAreaRect, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_ReloadInfo, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_SetSceneColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetBoundsColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_AreBoundsVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_ForceBoundsVisible, 8)

ChaperoneCalibrationState __thiscall winIVRChaperone_IVRChaperone_003_GetCalibrationState(struct w_steam_iface *_this)
{
    ChaperoneCalibrationState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_003_GetCalibrationState(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRChaperone_IVRChaperone_003_GetPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize(_this->u_iface, pSizeX, pSizeZ);
    return _ret;
}

bool __thiscall winIVRChaperone_IVRChaperone_003_GetPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect(_this->u_iface, rect);
    return _ret;
}

void __thiscall winIVRChaperone_IVRChaperone_003_ReloadInfo(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_003_ReloadInfo(_this->u_iface);
}

void __thiscall winIVRChaperone_IVRChaperone_003_SetSceneColor(struct w_steam_iface *_this, HmdColor_t color)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_003_SetSceneColor(_this->u_iface, color);
}

void __thiscall winIVRChaperone_IVRChaperone_003_GetBoundsColor(struct w_steam_iface *_this, HmdColor_t *pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t *pOutputCameraColor)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_003_GetBoundsColor(_this->u_iface, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
}

bool __thiscall winIVRChaperone_IVRChaperone_003_AreBoundsVisible(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_003_AreBoundsVisible(_this->u_iface);
    return _ret;
}

void __thiscall winIVRChaperone_IVRChaperone_003_ForceBoundsVisible(struct w_steam_iface *_this, bool bForce)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible(_this->u_iface, bForce);
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

struct w_steam_iface *create_winIVRChaperone_IVRChaperone_003(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperone_IVRChaperone_003_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRChaperone_IVRChaperone_003(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRChaperone_IVRChaperone_003_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(8);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 8 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRChaperone_IVRChaperone_003_GetCalibrationState, 0, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRChaperone_IVRChaperone_003_GetPlayAreaSize, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRChaperone_IVRChaperone_003_GetPlayAreaRect, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRChaperone_IVRChaperone_003_ReloadInfo, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRChaperone_IVRChaperone_003_SetSceneColor, 1, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRChaperone_IVRChaperone_003_GetBoundsColor, 4, TRUE, FALSE);
    init_thunk(&thunks[6], r, winIVRChaperone_IVRChaperone_003_AreBoundsVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRChaperone_IVRChaperone_003_ForceBoundsVisible, 1, FALSE, FALSE);
    for (i = 0; i < 8; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperone_IVRChaperone_003_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRChaperone_IVRChaperone_004.h"

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_GetCalibrationState, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_GetPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_GetPlayAreaRect, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_ReloadInfo, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_SetSceneColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_GetBoundsColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_AreBoundsVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_ForceBoundsVisible, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_ResetZeroPose, 8)

ChaperoneCalibrationState __thiscall winIVRChaperone_IVRChaperone_004_GetCalibrationState(struct w_steam_iface *_this)
{
    ChaperoneCalibrationState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_004_GetCalibrationState(_this->u_iface);
    return _ret;
}

bool __thiscall winIVRChaperone_IVRChaperone_004_GetPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_004_GetPlayAreaSize(_this->u_iface, pSizeX, pSizeZ);
    return _ret;
}

bool __thiscall winIVRChaperone_IVRChaperone_004_GetPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_004_GetPlayAreaRect(_this->u_iface, rect);
    return _ret;
}

void __thiscall winIVRChaperone_IVRChaperone_004_ReloadInfo(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_004_ReloadInfo(_this->u_iface);
}

void __thiscall winIVRChaperone_IVRChaperone_004_SetSceneColor(struct w_steam_iface *_this, HmdColor_t color)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_004_SetSceneColor(_this->u_iface, color);
}

void __thiscall winIVRChaperone_IVRChaperone_004_GetBoundsColor(struct w_steam_iface *_this, HmdColor_t *pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t *pOutputCameraColor)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_004_GetBoundsColor(_this->u_iface, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
}

bool __thiscall winIVRChaperone_IVRChaperone_004_AreBoundsVisible(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperone_IVRChaperone_004_AreBoundsVisible(_this->u_iface);
    return _ret;
}

void __thiscall winIVRChaperone_IVRChaperone_004_ForceBoundsVisible(struct w_steam_iface *_this, bool bForce)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_004_ForceBoundsVisible(_this->u_iface, bForce);
}

void __thiscall winIVRChaperone_IVRChaperone_004_ResetZeroPose(struct w_steam_iface *_this, ETrackingUniverseOrigin eTrackingUniverseOrigin)
{
    TRACE("%p\n", _this);
    cppIVRChaperone_IVRChaperone_004_ResetZeroPose(_this->u_iface, eTrackingUniverseOrigin);
}

extern vtable_ptr winIVRChaperone_IVRChaperone_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRChaperone_IVRChaperone_004,
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_GetCalibrationState)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_GetPlayAreaSize)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_GetPlayAreaRect)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_ReloadInfo)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_SetSceneColor)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_GetBoundsColor)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_AreBoundsVisible)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_ForceBoundsVisible)
        VTABLE_ADD_FUNC(winIVRChaperone_IVRChaperone_004_ResetZeroPose)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVRChaperone_IVRChaperone_004(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperone_IVRChaperone_004_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRChaperone_IVRChaperone_004(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRChaperone_IVRChaperone_004_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(9);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 9 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRChaperone_IVRChaperone_004_GetCalibrationState, 0, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRChaperone_IVRChaperone_004_GetPlayAreaSize, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRChaperone_IVRChaperone_004_GetPlayAreaRect, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRChaperone_IVRChaperone_004_ReloadInfo, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRChaperone_IVRChaperone_004_SetSceneColor, 1, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRChaperone_IVRChaperone_004_GetBoundsColor, 4, TRUE, FALSE);
    init_thunk(&thunks[6], r, winIVRChaperone_IVRChaperone_004_AreBoundsVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRChaperone_IVRChaperone_004_ForceBoundsVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRChaperone_IVRChaperone_004_ResetZeroPose, 1, FALSE, FALSE);
    for (i = 0; i < 9; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperone_IVRChaperone_004_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

