/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetLastError, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetVSync, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetVSync, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetGamma, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetGamma, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetGraphicsDevice, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_WaitGetPoses, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_Submit, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetOverlayDefaults, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetOverlayRaw, 24)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetOverlayFromFile, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_ClearOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection, 48)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetTrackingSpace, 4)

uint32_t __thiscall winIVRCompositor_IVRCompositor_005_GetLastError(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_005_GetLastError_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_GetLastError, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_005_SetVSync(struct w_steam_iface *_this, int8_t bVSync)
{
    struct IVRCompositor_IVRCompositor_005_SetVSync_params params =
    {
        .linux_side = _this->u_iface,
        .bVSync = bVSync,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_SetVSync, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_005_GetVSync(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_GetVSync_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_GetVSync, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_005_SetGamma(struct w_steam_iface *_this, float fGamma)
{
    struct IVRCompositor_IVRCompositor_005_SetGamma_params params =
    {
        .linux_side = _this->u_iface,
        .fGamma = fGamma,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_SetGamma, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_005_GetGamma(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_GetGamma_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_GetGamma, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_005_SetGraphicsDevice(struct w_steam_iface *_this, uint32_t eType, void *pDevice)
{
    struct IVRCompositor_IVRCompositor_005_SetGraphicsDevice_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
        .pDevice = pDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_SetGraphicsDevice, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pPoseArray, uint32_t unPoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_005_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pPoseArray = pPoseArray,
        .unPoseArrayCount = unPoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_WaitGetPoses, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_Submit(struct w_steam_iface *_this, uint32_t eEye, void *pTexture, Compositor_TextureBounds *pBounds)
{
    struct IVRCompositor_IVRCompositor_005_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_Submit, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_GetOverlayDefaults(struct w_steam_iface *_this, Compositor_OverlaySettings *pSettings)
{
    struct IVRCompositor_IVRCompositor_005_GetOverlayDefaults_params params =
    {
        .linux_side = _this->u_iface,
        .pSettings = pSettings,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_GetOverlayDefaults, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_SetOverlay(struct w_steam_iface *_this, void *pTexture, Compositor_OverlaySettings *pSettings)
{
    struct IVRCompositor_IVRCompositor_005_SetOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pTexture = pTexture,
        .pSettings = pSettings,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_SetOverlay, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_SetOverlayRaw(struct w_steam_iface *_this, void *buffer, uint32_t width, uint32_t height, uint32_t depth, Compositor_OverlaySettings *pSettings)
{
    struct IVRCompositor_IVRCompositor_005_SetOverlayRaw_params params =
    {
        .linux_side = _this->u_iface,
        .buffer = buffer,
        .width = width,
        .height = height,
        .depth = depth,
        .pSettings = pSettings,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_SetOverlayRaw, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_SetOverlayFromFile(struct w_steam_iface *_this, const char *pchFilePath, Compositor_OverlaySettings *pSettings)
{
    struct IVRCompositor_IVRCompositor_005_SetOverlayFromFile_params params =
    {
        .linux_side = _this->u_iface,
        .pchFilePath = pchFilePath,
        .pSettings = pSettings,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_SetOverlayFromFile, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_ClearOverlay(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_ClearOverlay_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_ClearOverlay, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_005_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_090 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_005_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_GetFrameTiming, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_005_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_005_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_005_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_FadeGrid, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_005_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_005_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_IsFullscreen, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection(struct w_steam_iface *_this, const Compositor_OverlaySettings *pSettings, float fAspectRatio, uint32_t eOrigin, HmdVector3_t vSource, HmdVector3_t vDirection, HmdVector2_t *pvecIntersectionUV, HmdVector3_t *pvecIntersectionTrackingSpace)
{
    struct IVRCompositor_IVRCompositor_005_ComputeOverlayIntersection_params params =
    {
        .linux_side = _this->u_iface,
        .pSettings = pSettings,
        .fAspectRatio = fAspectRatio,
        .eOrigin = eOrigin,
        .vSource = vSource,
        .vDirection = vDirection,
        .pvecIntersectionUV = pvecIntersectionUV,
        .pvecIntersectionTrackingSpace = pvecIntersectionTrackingSpace,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_ComputeOverlayIntersection, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_005_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_005_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_005_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_005_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_GetTrackingSpace, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_005_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_005, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_005_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_005,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_GetLastError)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_SetVSync)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_GetVSync)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_SetGamma)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_GetGamma)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_SetGraphicsDevice)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_GetOverlayDefaults)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_SetOverlay)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_ClearOverlay)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_005_GetTrackingSpace)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_005(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_005_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_005(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_005_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(24);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 24 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_005_GetLastError, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_005_SetVSync, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_005_GetVSync, 0, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_005_SetGamma, 1, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_005_GetGamma, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_005_SetGraphicsDevice, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_005_WaitGetPoses, 2, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_005_Submit, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_005_GetOverlayDefaults, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_005_SetOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_005_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_005_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_005_ClearOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_005_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_005_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_005_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_005_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_005_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_005_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_005_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection, 7, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_005_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_005_GetTrackingSpace, 0, FALSE, FALSE);
    for (i = 0; i < 24; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_005_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetLastError, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_SetVSync, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetVSync, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_SetGamma, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetGamma, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_SetGraphicsDevice, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_Submit, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_CanRenderScene, 4)

uint32_t __thiscall winIVRCompositor_IVRCompositor_006_GetLastError(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_006_GetLastError_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_GetLastError, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_006_SetVSync(struct w_steam_iface *_this, int8_t bVSync)
{
    struct IVRCompositor_IVRCompositor_006_SetVSync_params params =
    {
        .linux_side = _this->u_iface,
        .bVSync = bVSync,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_SetVSync, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_006_GetVSync(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_GetVSync_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_GetVSync, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_006_SetGamma(struct w_steam_iface *_this, float fGamma)
{
    struct IVRCompositor_IVRCompositor_006_SetGamma_params params =
    {
        .linux_side = _this->u_iface,
        .fGamma = fGamma,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_SetGamma, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_006_GetGamma(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_GetGamma_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_GetGamma, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_006_SetGraphicsDevice(struct w_steam_iface *_this, uint32_t eType, void *pDevice)
{
    struct IVRCompositor_IVRCompositor_006_SetGraphicsDevice_params params =
    {
        .linux_side = _this->u_iface,
        .eType = eType,
        .pDevice = pDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_SetGraphicsDevice, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_006_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_006_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_006_Submit(struct w_steam_iface *_this, uint32_t eEye, void *pTexture, VRTextureBounds_t *pBounds)
{
    struct IVRCompositor_IVRCompositor_006_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_Submit, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_006_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_090 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_006_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_GetFrameTiming, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_006_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_006_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_006_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_006_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_FadeGrid, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_006_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_006_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_006_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_006_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_IsFullscreen, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_006_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_006_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_006_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_006_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_006_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_CanRenderScene, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_006_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_006, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_006_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_006,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_GetLastError)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_SetVSync)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_GetVSync)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_SetGamma)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_GetGamma)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_SetGraphicsDevice)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_006_CanRenderScene)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_006(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_006_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_006(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_006_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(20);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 20 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_006_GetLastError, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_006_SetVSync, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_006_GetVSync, 0, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_006_SetGamma, 1, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_006_GetGamma, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_006_SetGraphicsDevice, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_006_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_006_Submit, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_006_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_006_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_006_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_006_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_006_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_006_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_006_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_006_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_006_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_006_CanRenderScene, 0, FALSE, FALSE);
    for (i = 0; i < 20; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_006_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetLastError, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_SetVSync, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetVSync, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_SetGamma, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetGamma, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_CanRenderScene, 4)

uint32_t __thiscall winIVRCompositor_IVRCompositor_007_GetLastError(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_007_GetLastError_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_GetLastError, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_007_SetVSync(struct w_steam_iface *_this, int8_t bVSync)
{
    struct IVRCompositor_IVRCompositor_007_SetVSync_params params =
    {
        .linux_side = _this->u_iface,
        .bVSync = bVSync,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_SetVSync, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_007_GetVSync(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_GetVSync_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_GetVSync, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_007_SetGamma(struct w_steam_iface *_this, float fGamma)
{
    struct IVRCompositor_IVRCompositor_007_SetGamma_params params =
    {
        .linux_side = _this->u_iface,
        .fGamma = fGamma,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_SetGamma, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_007_GetGamma(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_GetGamma_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_GetGamma, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_007_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_007_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_007_Submit(struct w_steam_iface *_this, uint32_t eEye, uint32_t eTextureType, void *pTexture, const VRTextureBounds_t *pBounds)
{
    struct IVRCompositor_IVRCompositor_007_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .eTextureType = eTextureType,
        .pTexture = pTexture,
        .pBounds = pBounds,
    };
    TRACE("%p\n", _this);
    if (eTextureType == TextureType_DirectX) FIXME( "Not implemented Direct3D API!\n" );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_Submit, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_007_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_093 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_007_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_GetFrameTiming, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_007_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_007_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_007_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_007_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_FadeGrid, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_007_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_007_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_007_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_007_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_IsFullscreen, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_007_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_007_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_007_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_007_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_007_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_CanRenderScene, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_007_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_007, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_007_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_007,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_GetLastError)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_SetVSync)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_GetVSync)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_SetGamma)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_GetGamma)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_007_CanRenderScene)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_007(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_007_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_007(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_007_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(19);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 19 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_007_GetLastError, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_007_SetVSync, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_007_GetVSync, 0, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_007_SetGamma, 1, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_007_GetGamma, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_007_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_007_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_007_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_007_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_007_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_007_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_007_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_007_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_007_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_007_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_007_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_007_CanRenderScene, 0, FALSE, FALSE);
    for (i = 0; i < 19; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_007_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetLastError, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_SetVSync, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetVSync, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_SetGamma, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetGamma, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_Submit, 24)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_SetSkyboxOverride, 32)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetLastFrameRenderer, 4)

uint32_t __thiscall winIVRCompositor_IVRCompositor_008_GetLastError(struct w_steam_iface *_this, char *pchBuffer, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_008_GetLastError_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_GetLastError, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_008_SetVSync(struct w_steam_iface *_this, int8_t bVSync)
{
    struct IVRCompositor_IVRCompositor_008_SetVSync_params params =
    {
        .linux_side = _this->u_iface,
        .bVSync = bVSync,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_SetVSync, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_008_GetVSync(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_GetVSync_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_GetVSync, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_008_SetGamma(struct w_steam_iface *_this, float fGamma)
{
    struct IVRCompositor_IVRCompositor_008_SetGamma_params params =
    {
        .linux_side = _this->u_iface,
        .fGamma = fGamma,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_SetGamma, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_008_GetGamma(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_GetGamma_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_GetGamma, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_008_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_008_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_008_Submit(struct w_steam_iface *_this, uint32_t eEye, uint32_t eTextureType, void *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags)
{
    struct IVRCompositor_IVRCompositor_008_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .eTextureType = eTextureType,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE("%p\n", _this);
    if (eTextureType == TextureType_DirectX) FIXME( "Not implemented Direct3D API!\n" );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_Submit, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_008_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_093 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_008_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_GetFrameTiming, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_008_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_008_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_008_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_008_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_FadeGrid, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_008_SetSkyboxOverride(struct w_steam_iface *_this, uint32_t eTextureType, void *pFront, void *pBack, void *pLeft, void *pRight, void *pTop, void *pBottom)
{
    struct IVRCompositor_IVRCompositor_008_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .eTextureType = eTextureType,
        .pFront = pFront,
        .pBack = pBack,
        .pLeft = pLeft,
        .pRight = pRight,
        .pTop = pTop,
        .pBottom = pBottom,
    };
    TRACE("%p\n", _this);
    if (eTextureType == TextureType_DirectX) FIXME( "Not implemented Direct3D API!\n" );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_SetSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_008_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_008_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_008_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_008_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_008_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_IsFullscreen, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_008_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_008_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_008_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_008_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_008_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_008_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_HideMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_008_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_CompositorDumpImages, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_GetFrameTimeRemaining, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_008_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_GetLastFrameRenderer, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_008_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_008, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_008_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_008,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_GetLastError)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_SetVSync)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_GetVSync)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_SetGamma)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_GetGamma)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_008_GetLastFrameRenderer)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_008(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_008_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_008(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_008_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(26);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 26 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_008_GetLastError, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_008_SetVSync, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_008_GetVSync, 0, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_008_SetGamma, 1, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_008_GetGamma, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_008_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_008_Submit, 5, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_008_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_008_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_008_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_008_SetSkyboxOverride, 7, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_008_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_008_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_008_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_008_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_008_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_008_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_008_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_008_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_008_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_008_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_008_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_008_GetLastFrameRenderer, 0, FALSE, FALSE);
    for (i = 0; i < 26; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_008_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CompositorDumpImages, 4)

void __thiscall winIVRCompositor_IVRCompositor_009_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_009_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_009_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_009_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_009_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_009_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_009_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_GetLastPoses, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_009_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_009_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_009_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_0913 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_009_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_GetFrameTiming, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_009_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_009_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_009_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_009_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_009_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_009_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_009_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_009_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_009_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_009_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_009_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_009_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_009_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_009_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_009_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_009_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_CompositorDumpImages, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_009_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_009, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_009_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_009,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_009_CompositorDumpImages)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_009(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_009_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_009(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_009_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(24);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 24 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_009_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_009_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_009_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_009_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_009_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_009_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_009_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_009_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_009_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_009_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_009_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_009_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_009_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_009_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_009_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_009_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_009_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_009_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_009_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_009_CompositorDumpImages, 0, FALSE, FALSE);
    for (i = 0; i < 24; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_009_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CompositorDumpImages, 4)

void __thiscall winIVRCompositor_IVRCompositor_010_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_010_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_010_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_010_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_010_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_010_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_010_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_GetLastPoses, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_010_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_010_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_010_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_0914 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_010_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_GetFrameTiming, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_010_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_010_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_010_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_010_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_010_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_010_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_010_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_010_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_010_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_010_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_010_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_010_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_010_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_010_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_010_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_010_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_CompositorDumpImages, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_010_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_010, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_010_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_010,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_010_CompositorDumpImages)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_010(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_010_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_010(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_010_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(24);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 24 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_010_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_010_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_010_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_010_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_010_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_010_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_010_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_010_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_010_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_010_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_010_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_010_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_010_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_010_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_010_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_010_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_010_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_010_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_010_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_010_CompositorDumpImages, 0, FALSE, FALSE);
    for (i = 0; i < 24; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_010_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CompositorDumpImages, 4)

void __thiscall winIVRCompositor_IVRCompositor_011_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_011_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_011_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_011_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_011_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_011_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_011_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_GetLastPoses, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_011_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_011_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_011_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_0915 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_011_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_GetFrameTiming, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_011_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_011_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_011_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_011_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_011_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_011_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_011_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_011_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_011_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_011_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_011_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_011_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_011_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_011_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_011_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_011_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_CompositorDumpImages, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_011_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_011, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_011_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_011,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_011_CompositorDumpImages)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_011(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_011_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_011(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_011_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(24);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 24 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_011_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_011_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_011_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_011_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_011_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_011_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_011_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_011_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_011_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_011_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_011_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_011_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_011_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_011_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_011_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_011_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_011_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_011_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_011_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_011_CompositorDumpImages, 0, FALSE, FALSE);
    for (i = 0; i < 24; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_011_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources, 4)

void __thiscall winIVRCompositor_IVRCompositor_012_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_012_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_012_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_012_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_012_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_012_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_012_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_0915 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_012_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_GetFrameTiming, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_012_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_012_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_012_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_012_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_012_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_012_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_012_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_012_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_012_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_012_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_012_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_012_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_012_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_012_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_012_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_012, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_012_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_012,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_012(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_012_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_012(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_012_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(26);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 26 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_012_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_012_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_012_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_012_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_012_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_012_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_012_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_012_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_012_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_012_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_012_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_012_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_012_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_012_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_012_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_012_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_012_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_012_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_012_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_012_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    for (i = 0; i < 26; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_012_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn, 8)

void __thiscall winIVRCompositor_IVRCompositor_013_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_013_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_013_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_013_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_013_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_013_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_013_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_0915 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_013_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_GetFrameTiming, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_013_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_013_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_013_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_013_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_013_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_013_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_013_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_013_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_013_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_013_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_013_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_013_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_013_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_013_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_013_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_013, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_013_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_013,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_013(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_013_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_013(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_013_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(27);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 27 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_013_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_013_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_013_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_013_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_013_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_013_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_013_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_013_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_013_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_013_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_013_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_013_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_013_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_013_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_013_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_013_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_013_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_013_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_013_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_013_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    for (i = 0; i < 27; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_013_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_SuspendRendering, 8)

void __thiscall winIVRCompositor_IVRCompositor_014_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_014_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_014_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_014_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_014_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_014_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_014_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_0920 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_014_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_GetFrameTiming, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_014_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_014_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_014_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_014_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_014_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_014_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_014_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_014_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_014_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_014_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_014_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_014_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_014_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_014_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_014_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_014_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_014_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_014_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_SuspendRendering, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_014_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_014, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_014_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_014,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_014_SuspendRendering)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_014(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_014_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_014(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_014_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(29);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 29 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_014_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_014_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_014_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_014_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_014_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_014_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_014_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_014_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_014_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_014_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_014_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_014_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_014_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_014_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_014_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_014_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_014_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_014_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_014_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_014_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_014_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_014_SuspendRendering, 1, FALSE, FALSE);
    for (i = 0; i < 29; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_014_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_RequestScreenshot, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess, 8)

void __thiscall winIVRCompositor_IVRCompositor_015_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_015_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_015_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_015_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_015_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_015_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_015_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_0920 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_015_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetFrameTiming, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_015_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_015_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_015_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_015_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_015_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_015_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_015_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_015_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_015_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_015_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_015_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_RequestScreenshot(struct w_steam_iface *_this, uint32_t type, const char *pchDestinationFileName, const char *pchVRDestinationFileName)
{
    struct IVRCompositor_IVRCompositor_015_RequestScreenshot_params params =
    {
        .linux_side = _this->u_iface,
        .type = type,
        .pchDestinationFileName = pchDestinationFileName,
        .pchVRDestinationFileName = pchVRDestinationFileName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_RequestScreenshot, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_015_GetCurrentScreenshotType_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetCurrentScreenshotType, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_015_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_015_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_015, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_015_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_015,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_RequestScreenshot)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_015(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_015_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_015(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_015_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(37);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 37 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_015_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_015_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_015_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_015_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_015_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_015_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_015_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_015_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_015_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_015_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_015_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_015_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_015_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_015_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_015_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_015_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_015_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_015_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_015_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_015_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_015_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_015_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_015_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_015_RequestScreenshot, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_015_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    for (i = 0; i < 37; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_015_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess, 8)

void __thiscall winIVRCompositor_IVRCompositor_016_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_016_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_016_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_016_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_016_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_016_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_016_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_102 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_016_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetFrameTiming, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_016_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_016_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_016_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_016_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_016_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_016_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_016_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_016_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_016_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_016_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_016_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_016_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_016_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_016_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_016, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_016_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_016,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_016(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_016_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_016(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_016_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(35);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 35 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_016_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_016_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_016_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_016_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_016_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_016_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_016_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_016_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_016_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_016_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_016_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_016_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_016_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_016_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_016_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_016_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_016_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_016_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_016_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_016_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_016_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_016_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_016_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_016_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    for (i = 0; i < 35; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_016_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess, 8)

void __thiscall winIVRCompositor_IVRCompositor_017_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_017_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_017_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_017_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_017_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_017_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_017_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_017_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_017_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_017_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_017_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_017_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_FadeToColor, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_017_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_FadeGrid, &params );
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_017_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_017_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_017_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_017_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_017_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_017_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_017_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_017_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_017_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_017_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_017, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_017_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_017,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_017(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_017_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_017(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_017_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(36);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 36 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_017_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_017_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_017_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_017_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_017_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_017_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_017_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_017_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_017_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_017_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_017_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_017_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_017_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_017_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_017_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_017_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_017_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_017_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_017_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_017_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_017_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_017_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_017_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_017_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_017_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    for (i = 0; i < 36; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_017_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetCurrentFadeColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess, 8)

void __thiscall winIVRCompositor_IVRCompositor_018_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_018_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_018_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_018_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_018_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_018_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_018_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_018_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_018_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_018_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_018_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_018_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_FadeToColor, &params );
}

HmdColor_t * __thiscall winIVRCompositor_IVRCompositor_018_GetCurrentFadeColor(struct w_steam_iface *_this, HmdColor_t *_ret, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_018_GetCurrentFadeColor_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetCurrentFadeColor, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_018_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_FadeGrid, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_GetCurrentGridAlpha_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetCurrentGridAlpha, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_018_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_018_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_018_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_018_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_018_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_018_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_018_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_018_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_018_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_018_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_018_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_018_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_018_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_018_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_018, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_018_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_018,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetCurrentFadeColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_018(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_018_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_018(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_018_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(38);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 38 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_018_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_018_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_018_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_018_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_018_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_018_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_018_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_018_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_018_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_018_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_018_GetCurrentFadeColor, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_018_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_018_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_018_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_018_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_018_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_018_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_018_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_018_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_018_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_018_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_018_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_018_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_018_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_018_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_018_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    for (i = 0; i < 38; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_018_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetCurrentFadeColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired, 16)

void __thiscall winIVRCompositor_IVRCompositor_019_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_019_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_019_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_019_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_019_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_019_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_019_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_019_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_019_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_019_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_019_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_019_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_FadeToColor, &params );
}

HmdColor_t * __thiscall winIVRCompositor_IVRCompositor_019_GetCurrentFadeColor(struct w_steam_iface *_this, HmdColor_t *_ret, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_019_GetCurrentFadeColor_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetCurrentFadeColor, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_019_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_FadeGrid, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_GetCurrentGridAlpha_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetCurrentGridAlpha, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_019_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_019_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_019_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_019_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_019_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_019_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_019_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_019_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_019_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_019_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_019_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_019_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_019_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired(struct w_steam_iface *_this, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired(struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = pPhysicalDevice,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_019_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_019, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_019_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_019,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetCurrentFadeColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_019(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_019_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_019(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_019_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(40);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 40 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_019_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_019_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_019_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_019_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_019_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_019_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_019_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_019_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_019_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_019_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_019_GetCurrentFadeColor, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_019_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_019_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_019_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_019_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_019_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_019_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_019_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_019_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_019_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_019_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_019_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_019_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_019_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_019_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_019_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired, 3, FALSE, FALSE);
    for (i = 0; i < 40; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_019_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetCurrentFadeColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired, 16)

void __thiscall winIVRCompositor_IVRCompositor_020_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_020_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_020_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_020_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_020_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_020_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_020_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_020_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_020_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_020_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_020_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_020_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_FadeToColor, &params );
}

HmdColor_t * __thiscall winIVRCompositor_IVRCompositor_020_GetCurrentFadeColor(struct w_steam_iface *_this, HmdColor_t *_ret, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_020_GetCurrentFadeColor_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetCurrentFadeColor, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_020_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_FadeGrid, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_GetCurrentGridAlpha_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetCurrentGridAlpha, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_020_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_020_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_020_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_020_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_020_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_020_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_020_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_020_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_020_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_020_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_020_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_020_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11(struct w_steam_iface *_this, void *pD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .pD3D11ShaderResourceView = pD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_020_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired(struct w_steam_iface *_this, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired(struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = pPhysicalDevice,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_020_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_020, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_020_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_020,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetCurrentFadeColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_020(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_020_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_020(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_020_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(41);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 41 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_020_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_020_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_020_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_020_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_020_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_020_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_020_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_020_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_020_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_020_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_020_GetCurrentFadeColor, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_020_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_020_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_020_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_020_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_020_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_020_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_020_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_020_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_020_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_020_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_020_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_020_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_020_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_020_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_020_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired, 3, FALSE, FALSE);
    for (i = 0; i < 41; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_020_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetCurrentFadeColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SetExplicitTimingMode, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData, 4)

void __thiscall winIVRCompositor_IVRCompositor_021_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_021_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_021_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_021_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_021_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_021_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_021_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_021_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_103a *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_021_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_021_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_021_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_021_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_FadeToColor, &params );
}

HmdColor_t * __thiscall winIVRCompositor_IVRCompositor_021_GetCurrentFadeColor(struct w_steam_iface *_this, HmdColor_t *_ret, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_021_GetCurrentFadeColor_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetCurrentFadeColor, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_021_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_FadeGrid, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_GetCurrentGridAlpha_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetCurrentGridAlpha, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_021_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_021_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_021_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_021_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_021_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_021_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_021_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_021_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_021_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_021_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_021_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11(struct w_steam_iface *_this, void *pD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .pD3D11ShaderResourceView = pD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_021_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired(struct w_steam_iface *_this, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired(struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = pPhysicalDevice,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_SetExplicitTimingMode(struct w_steam_iface *_this, int8_t bExplicitTimingMode)
{
    struct IVRCompositor_IVRCompositor_021_SetExplicitTimingMode_params params =
    {
        .linux_side = _this->u_iface,
        .bExplicitTimingMode = bExplicitTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SetExplicitTimingMode, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_SubmitExplicitTimingData_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SubmitExplicitTimingData, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_021_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_021, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_021_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_021,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetCurrentFadeColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_SetExplicitTimingMode)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_021(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_021_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_021(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_021_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(43);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 43 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_021_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_021_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_021_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_021_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_021_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_021_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_021_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_021_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_021_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_021_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_021_GetCurrentFadeColor, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_021_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_021_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_021_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_021_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_021_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_021_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_021_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_021_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_021_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_021_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_021_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_021_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_021_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_021_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_021_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRCompositor_IVRCompositor_021_SetExplicitTimingMode, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData, 0, FALSE, FALSE);
    for (i = 0; i < 43; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_021_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetCurrentFadeColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SetExplicitTimingMode, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading, 4)

void __thiscall winIVRCompositor_IVRCompositor_022_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_022_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_022_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_022_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_022_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_022_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_022_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_1017 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_022_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_1017 *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_022_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_022_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_022_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_022_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_FadeToColor, &params );
}

HmdColor_t * __thiscall winIVRCompositor_IVRCompositor_022_GetCurrentFadeColor(struct w_steam_iface *_this, HmdColor_t *_ret, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_022_GetCurrentFadeColor_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetCurrentFadeColor, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_022_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_FadeGrid, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_GetCurrentGridAlpha_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetCurrentGridAlpha, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_022_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_022_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_022_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_022_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_022_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_022_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_022_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_022_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_022_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_022_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_022_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11(struct w_steam_iface *_this, void *pD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .pD3D11ShaderResourceView = pD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_022_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired(struct w_steam_iface *_this, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired(struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = pPhysicalDevice,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_SetExplicitTimingMode(struct w_steam_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params params =
    {
        .linux_side = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SetExplicitTimingMode, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_022_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_022, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_022_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_022,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetCurrentFadeColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_SetExplicitTimingMode)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_022(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_022_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_022(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_022_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(46);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 46 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_022_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_022_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_022_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_022_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_022_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_022_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_022_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_022_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_022_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_022_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_022_GetCurrentFadeColor, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_022_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_022_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_022_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_022_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_022_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_022_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_022_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_022_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_022_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_022_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_022_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_022_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_022_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_022_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_022_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRCompositor_IVRCompositor_022_SetExplicitTimingMode, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading, 0, FALSE, FALSE);
    for (i = 0; i < 46; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_022_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetCurrentFadeColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetCurrentGridAlpha, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_SetExplicitTimingMode, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_SetStageOverride_Async, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_024_ClearStageOverride, 4)

void __thiscall winIVRCompositor_IVRCompositor_024_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_024_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_024_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_024_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_024_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_024_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_024_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_1017 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_024_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_1017 *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_024_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_024_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_024_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_024_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_024_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_FadeToColor, &params );
}

HmdColor_t * __thiscall winIVRCompositor_IVRCompositor_024_GetCurrentFadeColor(struct w_steam_iface *_this, HmdColor_t *_ret, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_024_GetCurrentFadeColor_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetCurrentFadeColor, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_024_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_FadeGrid, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_024_GetCurrentGridAlpha(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_GetCurrentGridAlpha_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetCurrentGridAlpha, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_024_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_024_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_024_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_024_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_024_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_024_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_024_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_024_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_024_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_024_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_024_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_024_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11(struct w_steam_iface *_this, void *pD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .pD3D11ShaderResourceView = pD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_024_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired(struct w_steam_iface *_this, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired(struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = pPhysicalDevice,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_SetExplicitTimingMode(struct w_steam_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_024_SetExplicitTimingMode_params params =
    {
        .linux_side = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SetExplicitTimingMode, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_SubmitExplicitTimingData_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SubmitExplicitTimingData, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_SetStageOverride_Async(struct w_steam_iface *_this, const char *pchRenderModelPath, const HmdMatrix34_t *pTransform, const Compositor_StageRenderSettings *pRenderSettings, uint32_t nSizeOfRenderSettings)
{
    struct IVRCompositor_IVRCompositor_024_SetStageOverride_Async_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelPath = pchRenderModelPath,
        .pTransform = pTransform,
        .pRenderSettings = pRenderSettings,
        .nSizeOfRenderSettings = nSizeOfRenderSettings,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SetStageOverride_Async, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_ClearStageOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_ClearStageOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_ClearStageOverride, &params );
}

extern vtable_ptr winIVRCompositor_IVRCompositor_024_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_024, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_024_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_024,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetCurrentFadeColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetCurrentGridAlpha)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_SetExplicitTimingMode)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_SetStageOverride_Async)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_024_ClearStageOverride)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_024(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_024_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_024(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_024_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(48);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 48 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_024_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_024_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_024_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_024_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_024_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_024_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_024_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_024_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_024_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_024_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_024_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_024_GetCurrentFadeColor, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_024_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_024_GetCurrentGridAlpha, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_024_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_024_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_024_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_024_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_024_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_024_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_024_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_024_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_024_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_024_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_024_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_024_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_024_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_024_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_024_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRCompositor_IVRCompositor_024_SetExplicitTimingMode, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading, 0, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVRCompositor_IVRCompositor_024_SetStageOverride_Async, 4, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVRCompositor_IVRCompositor_024_ClearStageOverride, 0, FALSE, FALSE);
    for (i = 0; i < 48; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_024_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetCurrentFadeColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetCurrentGridAlpha, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_SetExplicitTimingMode, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_SetStageOverride_Async, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_ClearStageOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_026_GetPosesForFrame, 16)

void __thiscall winIVRCompositor_IVRCompositor_026_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_026_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetTrackingSpace, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_026_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount);

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_026_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_026_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_026_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_026_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_1017 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_026_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_1017 *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_026_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_026_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_100 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_026_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_026_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_026_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_FadeToColor, &params );
}

HmdColor_t * __thiscall winIVRCompositor_IVRCompositor_026_GetCurrentFadeColor(struct w_steam_iface *_this, HmdColor_t *_ret, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_026_GetCurrentFadeColor_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetCurrentFadeColor, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeIn)
{
    struct IVRCompositor_IVRCompositor_026_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeIn = bFadeIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_FadeGrid, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_026_GetCurrentGridAlpha(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_GetCurrentGridAlpha_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetCurrentGridAlpha, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_026_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_026_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_026_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_026_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_026_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_026_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_026_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_026_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_026_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11(struct w_steam_iface *_this, void *pD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .pD3D11ShaderResourceView = pD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_026_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired(struct w_steam_iface *_this, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired(struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = pPhysicalDevice,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_SetExplicitTimingMode(struct w_steam_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_026_SetExplicitTimingMode_params params =
    {
        .linux_side = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SetExplicitTimingMode, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_SubmitExplicitTimingData_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SubmitExplicitTimingData, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_SetStageOverride_Async(struct w_steam_iface *_this, const char *pchRenderModelPath, const HmdMatrix34_t *pTransform, const Compositor_StageRenderSettings *pRenderSettings, uint32_t nSizeOfRenderSettings)
{
    struct IVRCompositor_IVRCompositor_026_SetStageOverride_Async_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelPath = pchRenderModelPath,
        .pTransform = pTransform,
        .pRenderSettings = pRenderSettings,
        .nSizeOfRenderSettings = nSizeOfRenderSettings,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SetStageOverride_Async, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_ClearStageOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_ClearStageOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_ClearStageOverride, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults(struct w_steam_iface *_this, Compositor_BenchmarkResults *pBenchmarkResults, uint32_t nSizeOfBenchmarkResults)
{
    struct IVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults_params params =
    {
        .linux_side = _this->u_iface,
        .pBenchmarkResults = pBenchmarkResults,
        .nSizeOfBenchmarkResults = nSizeOfBenchmarkResults,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs(struct w_steam_iface *_this, uint32_t *pRenderPosePredictionID, uint32_t *pGamePosePredictionID)
{
    struct IVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPosePredictionID = pRenderPosePredictionID,
        .pGamePosePredictionID = pGamePosePredictionID,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetPosesForFrame(struct w_steam_iface *_this, uint32_t unPosePredictionID, TrackedDevicePose_t *pPoseArray, uint32_t unPoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_026_GetPosesForFrame_params params =
    {
        .linux_side = _this->u_iface,
        .unPosePredictionID = unPosePredictionID,
        .pPoseArray = pPoseArray,
        .unPoseArrayCount = unPoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_GetPosesForFrame, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_026_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_026, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_026_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_026,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetCurrentFadeColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetCurrentGridAlpha)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_SetExplicitTimingMode)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_SetStageOverride_Async)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_ClearStageOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_026_GetPosesForFrame)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_026(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_026_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_026(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_026_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(51);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 51 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_026_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_026_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_026_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_026_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_026_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_026_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_026_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_026_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_026_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_026_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_026_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_026_GetCurrentFadeColor, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_026_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_026_GetCurrentGridAlpha, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_026_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_026_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_026_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_026_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_026_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_026_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_026_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_026_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_026_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_026_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_026_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_026_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_026_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_026_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_026_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRCompositor_IVRCompositor_026_SetExplicitTimingMode, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading, 0, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVRCompositor_IVRCompositor_026_SetStageOverride_Async, 4, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVRCompositor_IVRCompositor_026_ClearStageOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVRCompositor_IVRCompositor_026_GetPosesForFrame, 3, FALSE, FALSE);
    for (i = 0; i < 51; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_026_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_SetTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetTrackingSpace, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_WaitGetPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetLastPoses, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_Submit, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_PostPresentHandoff, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetFrameTiming, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetFrameTimings, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetCumulativeStats, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_FadeToColor, 28)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetCurrentFadeColor, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_FadeGrid, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_SetSkyboxOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ClearSkyboxOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_CompositorBringToFront, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_CompositorGoToBack, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_CompositorQuit, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_IsFullscreen, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetLastFrameRenderer, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_CanRenderScene, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ShowMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_HideMirrorWindow, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_CompositorDumpImages, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ForceReconnectProcess, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_SuspendRendering, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetMirrorTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired, 16)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_SetExplicitTimingMode, 8)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_SetStageOverride_Async, 20)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_ClearStageOverride, 4)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs, 12)
DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_027_GetPosesForFrame, 16)

void __thiscall winIVRCompositor_IVRCompositor_027_SetTrackingSpace(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct IVRCompositor_IVRCompositor_027_SetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SetTrackingSpace, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_GetTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetTrackingSpace, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_WaitGetPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_027_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_WaitGetPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetLastPoses(struct w_steam_iface *_this, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_027_GetLastPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetLastPoses, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex(struct w_steam_iface *_this, uint32_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    struct IVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unDeviceIndex = unDeviceIndex,
        .pOutputPose = pOutputPose,
        .pOutputGamePose = pOutputGamePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_027_Submit(struct w_steam_iface *_this, uint32_t eEye, const w_Texture_t *pTexture, const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags);

void __thiscall winIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame, &params );
}

extern void __thiscall winIVRCompositor_IVRCompositor_027_PostPresentHandoff(struct w_steam_iface *_this);

int8_t __thiscall winIVRCompositor_IVRCompositor_027_GetFrameTiming(struct w_steam_iface *_this, w_Compositor_FrameTiming_1017 *pTiming, uint32_t unFramesAgo)
{
    struct IVRCompositor_IVRCompositor_027_GetFrameTiming_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .unFramesAgo = unFramesAgo,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetFrameTiming, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetFrameTimings(struct w_steam_iface *_this, w_Compositor_FrameTiming_1017 *pTiming, uint32_t nFrames)
{
    struct IVRCompositor_IVRCompositor_027_GetFrameTimings_params params =
    {
        .linux_side = _this->u_iface,
        .pTiming = pTiming,
        .nFrames = nFrames,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetFrameTimings, &params );
    return params._ret;
}

float __thiscall winIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_GetFrameTimeRemaining_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetFrameTimeRemaining, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_GetCumulativeStats(struct w_steam_iface *_this, Compositor_CumulativeStats_1267 *pStats, uint32_t nStatsSizeInBytes)
{
    struct IVRCompositor_IVRCompositor_027_GetCumulativeStats_params params =
    {
        .linux_side = _this->u_iface,
        .pStats = pStats,
        .nStatsSizeInBytes = nStatsSizeInBytes,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetCumulativeStats, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_027_FadeToColor(struct w_steam_iface *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_027_FadeToColor_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .fRed = fRed,
        .fGreen = fGreen,
        .fBlue = fBlue,
        .fAlpha = fAlpha,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_FadeToColor, &params );
}

HmdColor_t * __thiscall winIVRCompositor_IVRCompositor_027_GetCurrentFadeColor(struct w_steam_iface *_this, HmdColor_t *_ret, int8_t bBackground)
{
    struct IVRCompositor_IVRCompositor_027_GetCurrentFadeColor_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .bBackground = bBackground,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetCurrentFadeColor, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_FadeGrid(struct w_steam_iface *_this, float fSeconds, int8_t bFadeGridIn)
{
    struct IVRCompositor_IVRCompositor_027_FadeGrid_params params =
    {
        .linux_side = _this->u_iface,
        .fSeconds = fSeconds,
        .bFadeGridIn = bFadeGridIn,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_FadeGrid, &params );
}

float __thiscall winIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_GetCurrentGridAlpha_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetCurrentGridAlpha, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRCompositor_IVRCompositor_027_SetSkyboxOverride(struct w_steam_iface *_this, const w_Texture_t *pTextures, uint32_t unTextureCount);

void __thiscall winIVRCompositor_IVRCompositor_027_ClearSkyboxOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_ClearSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ClearSkyboxOverride, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_027_CompositorBringToFront(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_CompositorBringToFront_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_CompositorBringToFront, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_027_CompositorGoToBack(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_CompositorGoToBack_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_CompositorGoToBack, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_027_CompositorQuit(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_CompositorQuit_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_CompositorQuit, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_IsFullscreen(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_IsFullscreen_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_IsFullscreen, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetLastFrameRenderer(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_GetLastFrameRenderer_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetLastFrameRenderer, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_CanRenderScene(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_CanRenderScene_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_CanRenderScene, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_ShowMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_ShowMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ShowMirrorWindow, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_027_HideMirrorWindow(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_HideMirrorWindow_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_HideMirrorWindow, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_IsMirrorWindowVisible_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_IsMirrorWindowVisible, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_CompositorDumpImages(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_CompositorDumpImages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_CompositorDumpImages, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn(struct w_steam_iface *_this, int8_t bOverride)
{
    struct IVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn_params params =
    {
        .linux_side = _this->u_iface,
        .bOverride = bOverride,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_027_ForceReconnectProcess(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_ForceReconnectProcess_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ForceReconnectProcess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_027_SuspendRendering(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct IVRCompositor_IVRCompositor_027_SuspendRendering_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SuspendRendering, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11(struct w_steam_iface *_this, uint32_t eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11(struct w_steam_iface *_this, void *pD3D11ShaderResourceView)
{
    struct IVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .pD3D11ShaderResourceView = pD3D11ShaderResourceView,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetMirrorTextureGL(struct w_steam_iface *_this, uint32_t eEye, uint32_t *pglTextureId, void **pglSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_027_GetMirrorTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pglTextureId = pglTextureId,
        .pglSharedTextureHandle = pglSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetMirrorTextureGL, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture(struct w_steam_iface *_this, uint32_t glTextureId, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture_params params =
    {
        .linux_side = _this->u_iface,
        .glTextureId = glTextureId,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess, &params );
}

void __thiscall winIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess(struct w_steam_iface *_this, void *glSharedTextureHandle)
{
    struct IVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess_params params =
    {
        .linux_side = _this->u_iface,
        .glSharedTextureHandle = glSharedTextureHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired(struct w_steam_iface *_this, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired(struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice, char *pchValue, uint32_t unBufferSize)
{
    struct IVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = pPhysicalDevice,
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_SetExplicitTimingMode(struct w_steam_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params params =
    {
        .linux_side = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SetExplicitTimingMode, &params );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_SubmitExplicitTimingData_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SubmitExplicitTimingData, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported, &params );
    return params._ret;
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_SetStageOverride_Async(struct w_steam_iface *_this, const char *pchRenderModelPath, const HmdMatrix34_t *pTransform, const Compositor_StageRenderSettings *pRenderSettings, uint32_t nSizeOfRenderSettings)
{
    struct IVRCompositor_IVRCompositor_027_SetStageOverride_Async_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelPath = pchRenderModelPath,
        .pTransform = pTransform,
        .pRenderSettings = pRenderSettings,
        .nSizeOfRenderSettings = nSizeOfRenderSettings,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SetStageOverride_Async, &params );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_ClearStageOverride(struct w_steam_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_ClearStageOverride_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_ClearStageOverride, &params );
}

int8_t __thiscall winIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults(struct w_steam_iface *_this, Compositor_BenchmarkResults *pBenchmarkResults, uint32_t nSizeOfBenchmarkResults)
{
    struct IVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults_params params =
    {
        .linux_side = _this->u_iface,
        .pBenchmarkResults = pBenchmarkResults,
        .nSizeOfBenchmarkResults = nSizeOfBenchmarkResults,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs(struct w_steam_iface *_this, uint32_t *pRenderPosePredictionID, uint32_t *pGamePosePredictionID)
{
    struct IVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPosePredictionID = pRenderPosePredictionID,
        .pGamePosePredictionID = pGamePosePredictionID,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs, &params );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetPosesForFrame(struct w_steam_iface *_this, uint32_t unPosePredictionID, TrackedDevicePose_t *pPoseArray, uint32_t unPoseArrayCount)
{
    struct IVRCompositor_IVRCompositor_027_GetPosesForFrame_params params =
    {
        .linux_side = _this->u_iface,
        .unPosePredictionID = unPosePredictionID,
        .pPoseArray = pPoseArray,
        .unPoseArrayCount = unPoseArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_GetPosesForFrame, &params );
    return params._ret;
}

extern vtable_ptr winIVRCompositor_IVRCompositor_027_vtable;

DEFINE_RTTI_DATA0(winIVRCompositor_IVRCompositor_027, 0, ".?AVIVRCompositor@@")

__ASM_BLOCK_BEGIN(winIVRCompositor_IVRCompositor_027_vtables)
    __ASM_VTABLE(winIVRCompositor_IVRCompositor_027,
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_SetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetTrackingSpace)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_WaitGetPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetLastPoses)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_Submit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_PostPresentHandoff)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetFrameTiming)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetFrameTimings)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetCumulativeStats)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_FadeToColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetCurrentFadeColor)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_FadeGrid)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_SetSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ClearSkyboxOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_CompositorBringToFront)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_CompositorGoToBack)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_CompositorQuit)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_IsFullscreen)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetLastFrameRenderer)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_CanRenderScene)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ShowMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_HideMirrorWindow)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_CompositorDumpImages)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ForceReconnectProcess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_SuspendRendering)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetMirrorTextureGL)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_SetExplicitTimingMode)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_SetStageOverride_Async)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_ClearStageOverride)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs)
        VTABLE_ADD_FUNC(winIVRCompositor_IVRCompositor_027_GetPosesForFrame)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_027(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_027_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_027(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRCompositor_IVRCompositor_027_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(51);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 51 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRCompositor_IVRCompositor_027_SetTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRCompositor_IVRCompositor_027_GetTrackingSpace, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRCompositor_IVRCompositor_027_WaitGetPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRCompositor_IVRCompositor_027_GetLastPoses, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRCompositor_IVRCompositor_027_Submit, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRCompositor_IVRCompositor_027_PostPresentHandoff, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRCompositor_IVRCompositor_027_GetFrameTiming, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRCompositor_IVRCompositor_027_GetFrameTimings, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining, 0, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRCompositor_IVRCompositor_027_GetCumulativeStats, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRCompositor_IVRCompositor_027_FadeToColor, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRCompositor_IVRCompositor_027_GetCurrentFadeColor, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRCompositor_IVRCompositor_027_FadeGrid, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha, 0, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRCompositor_IVRCompositor_027_SetSkyboxOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRCompositor_IVRCompositor_027_ClearSkyboxOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRCompositor_IVRCompositor_027_CompositorBringToFront, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRCompositor_IVRCompositor_027_CompositorGoToBack, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRCompositor_IVRCompositor_027_CompositorQuit, 0, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRCompositor_IVRCompositor_027_IsFullscreen, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRCompositor_IVRCompositor_027_GetLastFrameRenderer, 0, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRCompositor_IVRCompositor_027_CanRenderScene, 0, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRCompositor_IVRCompositor_027_ShowMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRCompositor_IVRCompositor_027_HideMirrorWindow, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRCompositor_IVRCompositor_027_CompositorDumpImages, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRCompositor_IVRCompositor_027_ForceReconnectProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRCompositor_IVRCompositor_027_SuspendRendering, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRCompositor_IVRCompositor_027_GetMirrorTextureGL, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRCompositor_IVRCompositor_027_SetExplicitTimingMode, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading, 0, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVRCompositor_IVRCompositor_027_SetStageOverride_Async, 4, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVRCompositor_IVRCompositor_027_ClearStageOverride, 0, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVRCompositor_IVRCompositor_027_GetPosesForFrame, 3, FALSE, FALSE);
    for (i = 0; i < 51; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_027_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRCompositor_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRCompositor_IVRCompositor_005_rtti( base );
    init_winIVRCompositor_IVRCompositor_006_rtti( base );
    init_winIVRCompositor_IVRCompositor_007_rtti( base );
    init_winIVRCompositor_IVRCompositor_008_rtti( base );
    init_winIVRCompositor_IVRCompositor_009_rtti( base );
    init_winIVRCompositor_IVRCompositor_010_rtti( base );
    init_winIVRCompositor_IVRCompositor_011_rtti( base );
    init_winIVRCompositor_IVRCompositor_012_rtti( base );
    init_winIVRCompositor_IVRCompositor_013_rtti( base );
    init_winIVRCompositor_IVRCompositor_014_rtti( base );
    init_winIVRCompositor_IVRCompositor_015_rtti( base );
    init_winIVRCompositor_IVRCompositor_016_rtti( base );
    init_winIVRCompositor_IVRCompositor_017_rtti( base );
    init_winIVRCompositor_IVRCompositor_018_rtti( base );
    init_winIVRCompositor_IVRCompositor_019_rtti( base );
    init_winIVRCompositor_IVRCompositor_020_rtti( base );
    init_winIVRCompositor_IVRCompositor_021_rtti( base );
    init_winIVRCompositor_IVRCompositor_022_rtti( base );
    init_winIVRCompositor_IVRCompositor_024_rtti( base );
    init_winIVRCompositor_IVRCompositor_026_rtti( base );
    init_winIVRCompositor_IVRCompositor_027_rtti( base );
#endif /* __x86_64__ */
}
