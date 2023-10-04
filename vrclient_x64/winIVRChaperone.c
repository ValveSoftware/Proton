/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetCalibrationState, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetHardBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_ReloadInfo, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_SetSceneColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_GetBoundsColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_AreBoundsVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_002_ForceBoundsVisible, 8)

uint32_t __thiscall winIVRChaperone_IVRChaperone_002_GetCalibrationState(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_002_GetCalibrationState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_GetCalibrationState, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo(struct w_steam_iface *_this, ChaperoneSoftBoundsInfo_t *pInfo)
{
    struct IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_GetSoftBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperone_IVRChaperone_002_GetHardBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    struct IVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .punQuadsCount = punQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_GetHardBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo(struct w_steam_iface *_this, ChaperoneSeatedBoundsInfo_t *pInfo)
{
    struct IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo, &params );
    return params._ret;
}

void __thiscall winIVRChaperone_IVRChaperone_002_ReloadInfo(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_002_ReloadInfo_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_ReloadInfo, &params );
}

void __thiscall winIVRChaperone_IVRChaperone_002_SetSceneColor(struct w_steam_iface *_this, HmdColor_t color)
{
    struct IVRChaperone_IVRChaperone_002_SetSceneColor_params params =
    {
        .linux_side = _this->u_iface,
        .color = color,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_SetSceneColor, &params );
}

void __thiscall winIVRChaperone_IVRChaperone_002_GetBoundsColor(struct w_steam_iface *_this, HmdColor_t *pOutputColorArray, int32_t nNumOutputColors)
{
    struct IVRChaperone_IVRChaperone_002_GetBoundsColor_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputColorArray = pOutputColorArray,
        .nNumOutputColors = nNumOutputColors,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_GetBoundsColor, &params );
}

int8_t __thiscall winIVRChaperone_IVRChaperone_002_AreBoundsVisible(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_002_AreBoundsVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_AreBoundsVisible, &params );
    return params._ret;
}

void __thiscall winIVRChaperone_IVRChaperone_002_ForceBoundsVisible(struct w_steam_iface *_this, int8_t bForce)
{
    struct IVRChaperone_IVRChaperone_002_ForceBoundsVisible_params params =
    {
        .linux_side = _this->u_iface,
        .bForce = bForce,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_002_ForceBoundsVisible, &params );
}

extern vtable_ptr winIVRChaperone_IVRChaperone_002_vtable;

DEFINE_RTTI_DATA0(winIVRChaperone_IVRChaperone_002, 0, ".?AVIVRChaperone@@")

__ASM_BLOCK_BEGIN(winIVRChaperone_IVRChaperone_002_vtables)
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
__ASM_BLOCK_END

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

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetCalibrationState, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetPlayAreaRect, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_ReloadInfo, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_SetSceneColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_GetBoundsColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_AreBoundsVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_003_ForceBoundsVisible, 8)

uint32_t __thiscall winIVRChaperone_IVRChaperone_003_GetCalibrationState(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_003_GetCalibrationState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_003_GetCalibrationState, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperone_IVRChaperone_003_GetPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    struct IVRChaperone_IVRChaperone_003_GetPlayAreaSize_params params =
    {
        .linux_side = _this->u_iface,
        .pSizeX = pSizeX,
        .pSizeZ = pSizeZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_003_GetPlayAreaSize, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperone_IVRChaperone_003_GetPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    struct IVRChaperone_IVRChaperone_003_GetPlayAreaRect_params params =
    {
        .linux_side = _this->u_iface,
        .rect = rect,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_003_GetPlayAreaRect, &params );
    return params._ret;
}

void __thiscall winIVRChaperone_IVRChaperone_003_ReloadInfo(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_003_ReloadInfo_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_003_ReloadInfo, &params );
}

void __thiscall winIVRChaperone_IVRChaperone_003_SetSceneColor(struct w_steam_iface *_this, HmdColor_t color)
{
    struct IVRChaperone_IVRChaperone_003_SetSceneColor_params params =
    {
        .linux_side = _this->u_iface,
        .color = color,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_003_SetSceneColor, &params );
}

void __thiscall winIVRChaperone_IVRChaperone_003_GetBoundsColor(struct w_steam_iface *_this, HmdColor_t *pOutputColorArray, int32_t nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t *pOutputCameraColor)
{
    struct IVRChaperone_IVRChaperone_003_GetBoundsColor_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputColorArray = pOutputColorArray,
        .nNumOutputColors = nNumOutputColors,
        .flCollisionBoundsFadeDistance = flCollisionBoundsFadeDistance,
        .pOutputCameraColor = pOutputCameraColor,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_003_GetBoundsColor, &params );
}

int8_t __thiscall winIVRChaperone_IVRChaperone_003_AreBoundsVisible(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_003_AreBoundsVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_003_AreBoundsVisible, &params );
    return params._ret;
}

void __thiscall winIVRChaperone_IVRChaperone_003_ForceBoundsVisible(struct w_steam_iface *_this, int8_t bForce)
{
    struct IVRChaperone_IVRChaperone_003_ForceBoundsVisible_params params =
    {
        .linux_side = _this->u_iface,
        .bForce = bForce,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_003_ForceBoundsVisible, &params );
}

extern vtable_ptr winIVRChaperone_IVRChaperone_003_vtable;

DEFINE_RTTI_DATA0(winIVRChaperone_IVRChaperone_003, 0, ".?AVIVRChaperone@@")

__ASM_BLOCK_BEGIN(winIVRChaperone_IVRChaperone_003_vtables)
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
__ASM_BLOCK_END

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

DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_GetCalibrationState, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_GetPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_GetPlayAreaRect, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_ReloadInfo, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_SetSceneColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_GetBoundsColor, 20)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_AreBoundsVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_ForceBoundsVisible, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperone_IVRChaperone_004_ResetZeroPose, 8)

uint32_t __thiscall winIVRChaperone_IVRChaperone_004_GetCalibrationState(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_004_GetCalibrationState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_GetCalibrationState, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperone_IVRChaperone_004_GetPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    struct IVRChaperone_IVRChaperone_004_GetPlayAreaSize_params params =
    {
        .linux_side = _this->u_iface,
        .pSizeX = pSizeX,
        .pSizeZ = pSizeZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_GetPlayAreaSize, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperone_IVRChaperone_004_GetPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    struct IVRChaperone_IVRChaperone_004_GetPlayAreaRect_params params =
    {
        .linux_side = _this->u_iface,
        .rect = rect,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_GetPlayAreaRect, &params );
    return params._ret;
}

void __thiscall winIVRChaperone_IVRChaperone_004_ReloadInfo(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_004_ReloadInfo_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_ReloadInfo, &params );
}

void __thiscall winIVRChaperone_IVRChaperone_004_SetSceneColor(struct w_steam_iface *_this, HmdColor_t color)
{
    struct IVRChaperone_IVRChaperone_004_SetSceneColor_params params =
    {
        .linux_side = _this->u_iface,
        .color = color,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_SetSceneColor, &params );
}

void __thiscall winIVRChaperone_IVRChaperone_004_GetBoundsColor(struct w_steam_iface *_this, HmdColor_t *pOutputColorArray, int32_t nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t *pOutputCameraColor)
{
    struct IVRChaperone_IVRChaperone_004_GetBoundsColor_params params =
    {
        .linux_side = _this->u_iface,
        .pOutputColorArray = pOutputColorArray,
        .nNumOutputColors = nNumOutputColors,
        .flCollisionBoundsFadeDistance = flCollisionBoundsFadeDistance,
        .pOutputCameraColor = pOutputCameraColor,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_GetBoundsColor, &params );
}

int8_t __thiscall winIVRChaperone_IVRChaperone_004_AreBoundsVisible(struct w_steam_iface *_this)
{
    struct IVRChaperone_IVRChaperone_004_AreBoundsVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_AreBoundsVisible, &params );
    return params._ret;
}

void __thiscall winIVRChaperone_IVRChaperone_004_ForceBoundsVisible(struct w_steam_iface *_this, int8_t bForce)
{
    struct IVRChaperone_IVRChaperone_004_ForceBoundsVisible_params params =
    {
        .linux_side = _this->u_iface,
        .bForce = bForce,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_ForceBoundsVisible, &params );
}

void __thiscall winIVRChaperone_IVRChaperone_004_ResetZeroPose(struct w_steam_iface *_this, uint32_t eTrackingUniverseOrigin)
{
    struct IVRChaperone_IVRChaperone_004_ResetZeroPose_params params =
    {
        .linux_side = _this->u_iface,
        .eTrackingUniverseOrigin = eTrackingUniverseOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperone_IVRChaperone_004_ResetZeroPose, &params );
}

extern vtable_ptr winIVRChaperone_IVRChaperone_004_vtable;

DEFINE_RTTI_DATA0(winIVRChaperone_IVRChaperone_004, 0, ".?AVIVRChaperone@@")

__ASM_BLOCK_BEGIN(winIVRChaperone_IVRChaperone_004_vtables)
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
__ASM_BLOCK_END

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

void init_winIVRChaperone_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRChaperone_IVRChaperone_002_rtti( base );
    init_winIVRChaperone_IVRChaperone_003_rtti( base );
    init_winIVRChaperone_IVRChaperone_004_rtti( base );
#endif /* __x86_64__ */
}
