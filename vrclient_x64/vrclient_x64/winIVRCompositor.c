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

#include "cppIVRCompositor_IVRCompositor_022.h"

typedef struct __winIVRCompositor_IVRCompositor_022 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_022;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_022_SetTrackingSpace(winIVRCompositor_IVRCompositor_022 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_022_GetTrackingSpace(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_WaitGetPoses(winIVRCompositor_IVRCompositor_022 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return ivrcompositor_wait_get_poses(cppIVRCompositor_IVRCompositor_022_WaitGetPoses, _this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 22, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_GetLastPoses(winIVRCompositor_IVRCompositor_022 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_022 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_Submit(winIVRCompositor_IVRCompositor_022 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_022_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 22, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_PostPresentHandoff(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_022_PostPresentHandoff, _this->linux_side, 22, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_022_GetFrameTiming(winIVRCompositor_IVRCompositor_022 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetFrameTimings, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetFrameTimings(winIVRCompositor_IVRCompositor_022 *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetFrameTimings(_this->linux_side, pTiming, nFrames);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetCumulativeStats, 16)
void __thiscall winIVRCompositor_IVRCompositor_022_GetCumulativeStats(winIVRCompositor_IVRCompositor_022 *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_GetCumulativeStats(_this->linux_side, pStats, nStatsSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_022_FadeToColor(winIVRCompositor_IVRCompositor_022 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetCurrentFadeColor, 9)
HmdColor_t *__thiscall winIVRCompositor_IVRCompositor_022_GetCurrentFadeColor(winIVRCompositor_IVRCompositor_022 *_this, HmdColor_t *_r, bool bBackground)
{
    TRACE("%p\n", _this);
    *_r = cppIVRCompositor_IVRCompositor_022_GetCurrentFadeColor(_this->linux_side, bBackground);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_022_FadeGrid(winIVRCompositor_IVRCompositor_022 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha, 4)
float __thiscall winIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_SetSkyboxOverride(winIVRCompositor_IVRCompositor_022 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_CompositorBringToFront(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_CompositorGoToBack(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_CompositorQuit(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_022_IsFullscreen(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_022_CanRenderScene(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_ShowMirrorWindow(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_HideMirrorWindow(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_CompositorDumpImages(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_022 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_022_ForceReconnectProcess(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_022_SuspendRendering(winIVRCompositor_IVRCompositor_022 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_SuspendRendering(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11(winIVRCompositor_IVRCompositor_022 *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11(_this->linux_side, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11, 12)
void __thiscall winIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11(winIVRCompositor_IVRCompositor_022 *_this, void * pD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11(_this->linux_side, pD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetMirrorTextureGL, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_GetMirrorTextureGL(winIVRCompositor_IVRCompositor_022 *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetMirrorTextureGL(_this->linux_side, eEye, pglTextureId, pglSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture, 16)
bool __thiscall winIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture(winIVRCompositor_IVRCompositor_022 *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture(_this->linux_side, glTextureId, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_022 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_022 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired(winIVRCompositor_IVRCompositor_022 *_this, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired(_this->linux_side, pchValue, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired, 24)
uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired(winIVRCompositor_IVRCompositor_022 *_this, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return ivrcompositor_get_vulkan_device_extensions_required(cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired, _this->linux_side, pPhysicalDevice, pchValue, unBufferSize, 22, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SetExplicitTimingMode, 8)
void __thiscall winIVRCompositor_IVRCompositor_022_SetExplicitTimingMode(winIVRCompositor_IVRCompositor_022 *_this, EVRCompositorTimingMode eTimingMode)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode(_this->linux_side, eTimingMode);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData, 4)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled, 4)
bool __thiscall winIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled(winIVRCompositor_IVRCompositor_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_022_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
    );
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_022 *create_winIVRCompositor_IVRCompositor_022(void *linux_side)
{
    winIVRCompositor_IVRCompositor_022 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_022));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_022_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_022(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_022 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_022 *create_winIVRCompositor_IVRCompositor_022_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_022 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_022));
    struct thunk *thunks = alloc_thunks(44);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 44 * sizeof(*vtable));
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
    for (i = 0; i < 44; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_022_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_022 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_021.h"

typedef struct __winIVRCompositor_IVRCompositor_021 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_021;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_021_SetTrackingSpace(winIVRCompositor_IVRCompositor_021 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_021_GetTrackingSpace(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_WaitGetPoses(winIVRCompositor_IVRCompositor_021 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return ivrcompositor_wait_get_poses(cppIVRCompositor_IVRCompositor_021_WaitGetPoses, _this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 21, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_GetLastPoses(winIVRCompositor_IVRCompositor_021 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_021 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_Submit(winIVRCompositor_IVRCompositor_021 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_021_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 21, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_PostPresentHandoff(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_021_PostPresentHandoff, _this->linux_side, 21, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_021_GetFrameTiming(winIVRCompositor_IVRCompositor_021 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetFrameTimings, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetFrameTimings(winIVRCompositor_IVRCompositor_021 *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetFrameTimings(_this->linux_side, pTiming, nFrames);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetCumulativeStats, 16)
void __thiscall winIVRCompositor_IVRCompositor_021_GetCumulativeStats(winIVRCompositor_IVRCompositor_021 *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_GetCumulativeStats(_this->linux_side, pStats, nStatsSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_021_FadeToColor(winIVRCompositor_IVRCompositor_021 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetCurrentFadeColor, 9)
HmdColor_t *__thiscall winIVRCompositor_IVRCompositor_021_GetCurrentFadeColor(winIVRCompositor_IVRCompositor_021 *_this, HmdColor_t *_r, bool bBackground)
{
    TRACE("%p\n", _this);
    *_r = cppIVRCompositor_IVRCompositor_021_GetCurrentFadeColor(_this->linux_side, bBackground);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_021_FadeGrid(winIVRCompositor_IVRCompositor_021 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha, 4)
float __thiscall winIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_SetSkyboxOverride(winIVRCompositor_IVRCompositor_021 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_CompositorBringToFront(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_CompositorGoToBack(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_CompositorQuit(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_021_IsFullscreen(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_021_CanRenderScene(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_ShowMirrorWindow(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_HideMirrorWindow(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_CompositorDumpImages(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_021 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_021_ForceReconnectProcess(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_021_SuspendRendering(winIVRCompositor_IVRCompositor_021 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_SuspendRendering(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11(winIVRCompositor_IVRCompositor_021 *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11(_this->linux_side, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11, 12)
void __thiscall winIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11(winIVRCompositor_IVRCompositor_021 *_this, void * pD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11(_this->linux_side, pD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetMirrorTextureGL, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_GetMirrorTextureGL(winIVRCompositor_IVRCompositor_021 *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetMirrorTextureGL(_this->linux_side, eEye, pglTextureId, pglSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture, 16)
bool __thiscall winIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture(winIVRCompositor_IVRCompositor_021 *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture(_this->linux_side, glTextureId, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_021 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_021 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired(winIVRCompositor_IVRCompositor_021 *_this, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired(_this->linux_side, pchValue, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired, 24)
uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired(winIVRCompositor_IVRCompositor_021 *_this, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return ivrcompositor_get_vulkan_device_extensions_required(cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired, _this->linux_side, pPhysicalDevice, pchValue, unBufferSize, 21, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SetExplicitTimingMode, 5)
void __thiscall winIVRCompositor_IVRCompositor_021_SetExplicitTimingMode(winIVRCompositor_IVRCompositor_021 *_this, bool bExplicitTimingMode)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode(_this->linux_side, bExplicitTimingMode);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData, 4)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData(winIVRCompositor_IVRCompositor_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_021_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_021 *create_winIVRCompositor_IVRCompositor_021(void *linux_side)
{
    winIVRCompositor_IVRCompositor_021 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_021));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_021_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_021(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_021 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_021 *create_winIVRCompositor_IVRCompositor_021_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_021 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_021));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_021_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_021 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_020.h"

typedef struct __winIVRCompositor_IVRCompositor_020 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_020;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_020_SetTrackingSpace(winIVRCompositor_IVRCompositor_020 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_020_GetTrackingSpace(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_WaitGetPoses(winIVRCompositor_IVRCompositor_020 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return ivrcompositor_wait_get_poses(cppIVRCompositor_IVRCompositor_020_WaitGetPoses, _this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 20, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_GetLastPoses(winIVRCompositor_IVRCompositor_020 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_020 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_Submit(winIVRCompositor_IVRCompositor_020 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_020_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 20, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_PostPresentHandoff(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_020_PostPresentHandoff, _this->linux_side, 20, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_020_GetFrameTiming(winIVRCompositor_IVRCompositor_020 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetFrameTimings, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetFrameTimings(winIVRCompositor_IVRCompositor_020 *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetFrameTimings(_this->linux_side, pTiming, nFrames);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetCumulativeStats, 16)
void __thiscall winIVRCompositor_IVRCompositor_020_GetCumulativeStats(winIVRCompositor_IVRCompositor_020 *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_GetCumulativeStats(_this->linux_side, pStats, nStatsSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_020_FadeToColor(winIVRCompositor_IVRCompositor_020 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetCurrentFadeColor, 9)
HmdColor_t *__thiscall winIVRCompositor_IVRCompositor_020_GetCurrentFadeColor(winIVRCompositor_IVRCompositor_020 *_this, HmdColor_t *_r, bool bBackground)
{
    TRACE("%p\n", _this);
    *_r = cppIVRCompositor_IVRCompositor_020_GetCurrentFadeColor(_this->linux_side, bBackground);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_020_FadeGrid(winIVRCompositor_IVRCompositor_020 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha, 4)
float __thiscall winIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_SetSkyboxOverride(winIVRCompositor_IVRCompositor_020 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_CompositorBringToFront(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_CompositorGoToBack(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_CompositorQuit(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_020_IsFullscreen(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_020_CanRenderScene(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_ShowMirrorWindow(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_HideMirrorWindow(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_CompositorDumpImages(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_020 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_020_ForceReconnectProcess(winIVRCompositor_IVRCompositor_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_020_SuspendRendering(winIVRCompositor_IVRCompositor_020 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_SuspendRendering(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11(winIVRCompositor_IVRCompositor_020 *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11(_this->linux_side, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11, 12)
void __thiscall winIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11(winIVRCompositor_IVRCompositor_020 *_this, void * pD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11(_this->linux_side, pD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetMirrorTextureGL, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_GetMirrorTextureGL(winIVRCompositor_IVRCompositor_020 *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetMirrorTextureGL(_this->linux_side, eEye, pglTextureId, pglSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture, 16)
bool __thiscall winIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture(winIVRCompositor_IVRCompositor_020 *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture(_this->linux_side, glTextureId, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_020 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_020 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired(winIVRCompositor_IVRCompositor_020 *_this, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired(_this->linux_side, pchValue, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired, 24)
uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired(winIVRCompositor_IVRCompositor_020 *_this, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return ivrcompositor_get_vulkan_device_extensions_required(cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired, _this->linux_side, pPhysicalDevice, pchValue, unBufferSize, 20, &_this->user_data);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_020_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_020 *create_winIVRCompositor_IVRCompositor_020(void *linux_side)
{
    winIVRCompositor_IVRCompositor_020 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_020));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_020_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_020(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_020 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_020 *create_winIVRCompositor_IVRCompositor_020_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_020 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_020));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_020_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_020 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_019.h"

typedef struct __winIVRCompositor_IVRCompositor_019 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_019;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_019_SetTrackingSpace(winIVRCompositor_IVRCompositor_019 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_019_GetTrackingSpace(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_WaitGetPoses(winIVRCompositor_IVRCompositor_019 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return ivrcompositor_wait_get_poses(cppIVRCompositor_IVRCompositor_019_WaitGetPoses, _this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 19, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_GetLastPoses(winIVRCompositor_IVRCompositor_019 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_019 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_Submit(winIVRCompositor_IVRCompositor_019 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_019_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 19, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_PostPresentHandoff(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_019_PostPresentHandoff, _this->linux_side, 19, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_019_GetFrameTiming(winIVRCompositor_IVRCompositor_019 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetFrameTimings, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetFrameTimings(winIVRCompositor_IVRCompositor_019 *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetFrameTimings(_this->linux_side, pTiming, nFrames);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetCumulativeStats, 16)
void __thiscall winIVRCompositor_IVRCompositor_019_GetCumulativeStats(winIVRCompositor_IVRCompositor_019 *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_GetCumulativeStats(_this->linux_side, pStats, nStatsSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_019_FadeToColor(winIVRCompositor_IVRCompositor_019 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetCurrentFadeColor, 9)
HmdColor_t *__thiscall winIVRCompositor_IVRCompositor_019_GetCurrentFadeColor(winIVRCompositor_IVRCompositor_019 *_this, HmdColor_t *_r, bool bBackground)
{
    TRACE("%p\n", _this);
    *_r = cppIVRCompositor_IVRCompositor_019_GetCurrentFadeColor(_this->linux_side, bBackground);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_019_FadeGrid(winIVRCompositor_IVRCompositor_019 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha, 4)
float __thiscall winIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_SetSkyboxOverride(winIVRCompositor_IVRCompositor_019 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_CompositorBringToFront(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_CompositorGoToBack(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_CompositorQuit(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_019_IsFullscreen(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_019_CanRenderScene(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_ShowMirrorWindow(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_HideMirrorWindow(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_CompositorDumpImages(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_019 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_019_ForceReconnectProcess(winIVRCompositor_IVRCompositor_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_019_SuspendRendering(winIVRCompositor_IVRCompositor_019 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_SuspendRendering(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11(winIVRCompositor_IVRCompositor_019 *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11(_this->linux_side, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetMirrorTextureGL, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_GetMirrorTextureGL(winIVRCompositor_IVRCompositor_019 *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetMirrorTextureGL(_this->linux_side, eEye, pglTextureId, pglSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture, 16)
bool __thiscall winIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture(winIVRCompositor_IVRCompositor_019 *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture(_this->linux_side, glTextureId, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_019 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_019 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired(winIVRCompositor_IVRCompositor_019 *_this, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired(_this->linux_side, pchValue, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired, 24)
uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired(winIVRCompositor_IVRCompositor_019 *_this, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return ivrcompositor_get_vulkan_device_extensions_required(cppIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired, _this->linux_side, pPhysicalDevice, pchValue, unBufferSize, 19, &_this->user_data);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_019_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_019 *create_winIVRCompositor_IVRCompositor_019(void *linux_side)
{
    winIVRCompositor_IVRCompositor_019 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_019));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_019_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_019(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_019 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_019 *create_winIVRCompositor_IVRCompositor_019_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_019 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_019));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_019_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_019 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_018.h"

typedef struct __winIVRCompositor_IVRCompositor_018 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_018;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_018_SetTrackingSpace(winIVRCompositor_IVRCompositor_018 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_018_GetTrackingSpace(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_WaitGetPoses(winIVRCompositor_IVRCompositor_018 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return ivrcompositor_wait_get_poses(cppIVRCompositor_IVRCompositor_018_WaitGetPoses, _this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 18, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_GetLastPoses(winIVRCompositor_IVRCompositor_018 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_018 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_Submit(winIVRCompositor_IVRCompositor_018 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_018_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 18, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_PostPresentHandoff(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_018_PostPresentHandoff, _this->linux_side, 18, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_018_GetFrameTiming(winIVRCompositor_IVRCompositor_018 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetFrameTimings, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetFrameTimings(winIVRCompositor_IVRCompositor_018 *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetFrameTimings(_this->linux_side, pTiming, nFrames);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetCumulativeStats, 16)
void __thiscall winIVRCompositor_IVRCompositor_018_GetCumulativeStats(winIVRCompositor_IVRCompositor_018 *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_GetCumulativeStats(_this->linux_side, pStats, nStatsSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_018_FadeToColor(winIVRCompositor_IVRCompositor_018 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetCurrentFadeColor, 9)
HmdColor_t *__thiscall winIVRCompositor_IVRCompositor_018_GetCurrentFadeColor(winIVRCompositor_IVRCompositor_018 *_this, HmdColor_t *_r, bool bBackground)
{
    TRACE("%p\n", _this);
    *_r = cppIVRCompositor_IVRCompositor_018_GetCurrentFadeColor(_this->linux_side, bBackground);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_018_FadeGrid(winIVRCompositor_IVRCompositor_018 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha, 4)
float __thiscall winIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_SetSkyboxOverride(winIVRCompositor_IVRCompositor_018 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_CompositorBringToFront(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_CompositorGoToBack(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_CompositorQuit(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_018_IsFullscreen(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_018_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_018_CanRenderScene(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_ShowMirrorWindow(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_HideMirrorWindow(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_CompositorDumpImages(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_018 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_018_ForceReconnectProcess(winIVRCompositor_IVRCompositor_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_018_SuspendRendering(winIVRCompositor_IVRCompositor_018 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_SuspendRendering(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11(winIVRCompositor_IVRCompositor_018 *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11(_this->linux_side, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_GetMirrorTextureGL, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_GetMirrorTextureGL(winIVRCompositor_IVRCompositor_018 *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_GetMirrorTextureGL(_this->linux_side, eEye, pglTextureId, pglSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture, 16)
bool __thiscall winIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture(winIVRCompositor_IVRCompositor_018 *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture(_this->linux_side, glTextureId, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_018 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_018 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_018_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_018 *create_winIVRCompositor_IVRCompositor_018(void *linux_side)
{
    winIVRCompositor_IVRCompositor_018 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_018));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_018_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_018(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_018 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_018 *create_winIVRCompositor_IVRCompositor_018_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_018 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_018));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_018_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_018 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_017.h"

typedef struct __winIVRCompositor_IVRCompositor_017 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_017;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_017_SetTrackingSpace(winIVRCompositor_IVRCompositor_017 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_017_GetTrackingSpace(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_WaitGetPoses(winIVRCompositor_IVRCompositor_017 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return ivrcompositor_wait_get_poses(cppIVRCompositor_IVRCompositor_017_WaitGetPoses, _this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 17, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_GetLastPoses(winIVRCompositor_IVRCompositor_017 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_017 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_Submit(winIVRCompositor_IVRCompositor_017 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_017_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 17, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_PostPresentHandoff(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_017_PostPresentHandoff, _this->linux_side, 17, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_017_GetFrameTiming(winIVRCompositor_IVRCompositor_017 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetFrameTimings, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetFrameTimings(winIVRCompositor_IVRCompositor_017 *_this, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetFrameTimings(_this->linux_side, pTiming, nFrames);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetCumulativeStats, 16)
void __thiscall winIVRCompositor_IVRCompositor_017_GetCumulativeStats(winIVRCompositor_IVRCompositor_017 *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_GetCumulativeStats(_this->linux_side, pStats, nStatsSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_017_FadeToColor(winIVRCompositor_IVRCompositor_017 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_017_FadeGrid(winIVRCompositor_IVRCompositor_017 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_SetSkyboxOverride(winIVRCompositor_IVRCompositor_017 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_CompositorBringToFront(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_CompositorGoToBack(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_CompositorQuit(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_017_IsFullscreen(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_017_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_017_CanRenderScene(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_ShowMirrorWindow(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_HideMirrorWindow(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_CompositorDumpImages(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_017 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_017_ForceReconnectProcess(winIVRCompositor_IVRCompositor_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_017_SuspendRendering(winIVRCompositor_IVRCompositor_017 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_SuspendRendering(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11(winIVRCompositor_IVRCompositor_017 *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11(_this->linux_side, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_GetMirrorTextureGL, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_GetMirrorTextureGL(winIVRCompositor_IVRCompositor_017 *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_GetMirrorTextureGL(_this->linux_side, eEye, pglTextureId, pglSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture, 16)
bool __thiscall winIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture(winIVRCompositor_IVRCompositor_017 *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture(_this->linux_side, glTextureId, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_017 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_017 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_017 *create_winIVRCompositor_IVRCompositor_017(void *linux_side)
{
    winIVRCompositor_IVRCompositor_017 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_017));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_017_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_017(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_017 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_017 *create_winIVRCompositor_IVRCompositor_017_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_017 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_017));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_017_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_017 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_016.h"

typedef struct __winIVRCompositor_IVRCompositor_016 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_016;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_016_SetTrackingSpace(winIVRCompositor_IVRCompositor_016 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_016_GetTrackingSpace(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_WaitGetPoses(winIVRCompositor_IVRCompositor_016 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return ivrcompositor_wait_get_poses(cppIVRCompositor_IVRCompositor_016_WaitGetPoses, _this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 16, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_GetLastPoses(winIVRCompositor_IVRCompositor_016 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_016 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_Submit(winIVRCompositor_IVRCompositor_016 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_016_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 16, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_PostPresentHandoff(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_016_PostPresentHandoff, _this->linux_side, 16, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_016_GetFrameTiming(winIVRCompositor_IVRCompositor_016 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetCumulativeStats, 16)
void __thiscall winIVRCompositor_IVRCompositor_016_GetCumulativeStats(winIVRCompositor_IVRCompositor_016 *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_GetCumulativeStats(_this->linux_side, pStats, nStatsSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_016_FadeToColor(winIVRCompositor_IVRCompositor_016 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_016_FadeGrid(winIVRCompositor_IVRCompositor_016 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_SetSkyboxOverride(winIVRCompositor_IVRCompositor_016 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_CompositorBringToFront(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_CompositorGoToBack(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_CompositorQuit(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_016_IsFullscreen(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_016_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_016_CanRenderScene(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_ShowMirrorWindow(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_HideMirrorWindow(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_CompositorDumpImages(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_016 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_016_ForceReconnectProcess(winIVRCompositor_IVRCompositor_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_016_SuspendRendering(winIVRCompositor_IVRCompositor_016 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_SuspendRendering(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11(winIVRCompositor_IVRCompositor_016 *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11(_this->linux_side, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_GetMirrorTextureGL, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_GetMirrorTextureGL(winIVRCompositor_IVRCompositor_016 *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_GetMirrorTextureGL(_this->linux_side, eEye, pglTextureId, pglSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture, 16)
bool __thiscall winIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture(winIVRCompositor_IVRCompositor_016 *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture(_this->linux_side, glTextureId, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_016 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_016 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_016 *create_winIVRCompositor_IVRCompositor_016(void *linux_side)
{
    winIVRCompositor_IVRCompositor_016 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_016));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_016_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_016(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_016 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_016 *create_winIVRCompositor_IVRCompositor_016_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_016 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_016));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_016_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_016 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_015.h"

typedef struct __winIVRCompositor_IVRCompositor_015 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_015;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_015_SetTrackingSpace(winIVRCompositor_IVRCompositor_015 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_015_GetTrackingSpace(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_WaitGetPoses(winIVRCompositor_IVRCompositor_015 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_GetLastPoses(winIVRCompositor_IVRCompositor_015 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_015 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_Submit(winIVRCompositor_IVRCompositor_015 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_015_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 15, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_PostPresentHandoff(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_015_PostPresentHandoff, _this->linux_side, 15, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_015_GetFrameTiming(winIVRCompositor_IVRCompositor_015 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetCumulativeStats, 16)
void __thiscall winIVRCompositor_IVRCompositor_015_GetCumulativeStats(winIVRCompositor_IVRCompositor_015 *_this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_GetCumulativeStats(_this->linux_side, pStats, nStatsSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_015_FadeToColor(winIVRCompositor_IVRCompositor_015 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_015_FadeGrid(winIVRCompositor_IVRCompositor_015 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_SetSkyboxOverride(winIVRCompositor_IVRCompositor_015 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_CompositorBringToFront(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_CompositorGoToBack(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_CompositorQuit(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_015_IsFullscreen(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_015_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_015_CanRenderScene(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_ShowMirrorWindow(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_HideMirrorWindow(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_CompositorDumpImages(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_015 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_015_ForceReconnectProcess(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_015_SuspendRendering(winIVRCompositor_IVRCompositor_015 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_SuspendRendering(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_RequestScreenshot, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_RequestScreenshot(winIVRCompositor_IVRCompositor_015 *_this, EVRScreenshotType type, const char * pchDestinationFileName, const char * pchVRDestinationFileName)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_RequestScreenshot(_this->linux_side, type, pchDestinationFileName, pchVRDestinationFileName);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType, 4)
EVRScreenshotType __thiscall winIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType(winIVRCompositor_IVRCompositor_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11(winIVRCompositor_IVRCompositor_015 *_this, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11(_this->linux_side, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_GetMirrorTextureGL, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_GetMirrorTextureGL(winIVRCompositor_IVRCompositor_015 *_this, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_GetMirrorTextureGL(_this->linux_side, eEye, pglTextureId, pglSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture, 16)
bool __thiscall winIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture(winIVRCompositor_IVRCompositor_015 *_this, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture(_this->linux_side, glTextureId, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_015 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess, 12)
void __thiscall winIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess(winIVRCompositor_IVRCompositor_015 *_this, glSharedTextureHandle_t glSharedTextureHandle)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess(_this->linux_side, glSharedTextureHandle);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_015 *create_winIVRCompositor_IVRCompositor_015(void *linux_side)
{
    winIVRCompositor_IVRCompositor_015 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_015));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_015_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_015(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_015 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_015 *create_winIVRCompositor_IVRCompositor_015_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_015 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_015));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_015_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_015 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_014.h"

typedef struct __winIVRCompositor_IVRCompositor_014 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_014;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_014_SetTrackingSpace(winIVRCompositor_IVRCompositor_014 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_014_GetTrackingSpace(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_WaitGetPoses(winIVRCompositor_IVRCompositor_014 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_GetLastPoses(winIVRCompositor_IVRCompositor_014 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_014 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_Submit(winIVRCompositor_IVRCompositor_014 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_014_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 14, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_PostPresentHandoff(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_014_PostPresentHandoff, _this->linux_side, 14, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_014_GetFrameTiming(winIVRCompositor_IVRCompositor_014 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_014_FadeToColor(winIVRCompositor_IVRCompositor_014 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_014_FadeGrid(winIVRCompositor_IVRCompositor_014 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_SetSkyboxOverride(winIVRCompositor_IVRCompositor_014 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_CompositorBringToFront(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_CompositorGoToBack(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_CompositorQuit(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_014_IsFullscreen(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_014_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_014_CanRenderScene(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_ShowMirrorWindow(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_HideMirrorWindow(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_CompositorDumpImages(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_014 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_ForceReconnectProcess, 4)
void __thiscall winIVRCompositor_IVRCompositor_014_ForceReconnectProcess(winIVRCompositor_IVRCompositor_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_ForceReconnectProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_014_SuspendRendering, 5)
void __thiscall winIVRCompositor_IVRCompositor_014_SuspendRendering(winIVRCompositor_IVRCompositor_014 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_014_SuspendRendering(_this->linux_side, bSuspend);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_014 *create_winIVRCompositor_IVRCompositor_014(void *linux_side)
{
    winIVRCompositor_IVRCompositor_014 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_014));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_014_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_014(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_014 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_014 *create_winIVRCompositor_IVRCompositor_014_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_014 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_014));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_014_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_014 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_013.h"

typedef struct __winIVRCompositor_IVRCompositor_013 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_013;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_013_SetTrackingSpace(winIVRCompositor_IVRCompositor_013 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_013_GetTrackingSpace(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_WaitGetPoses(winIVRCompositor_IVRCompositor_013 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_GetLastPoses(winIVRCompositor_IVRCompositor_013 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_013 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_Submit(winIVRCompositor_IVRCompositor_013 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_013_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 13, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_PostPresentHandoff(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_013_PostPresentHandoff, _this->linux_side, 13, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_013_GetFrameTiming(winIVRCompositor_IVRCompositor_013 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_013_FadeToColor(winIVRCompositor_IVRCompositor_013 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_013_FadeGrid(winIVRCompositor_IVRCompositor_013 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_SetSkyboxOverride(winIVRCompositor_IVRCompositor_013 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_CompositorBringToFront(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_CompositorGoToBack(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_CompositorQuit(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_013_IsFullscreen(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_013_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_013_CanRenderScene(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_ShowMirrorWindow(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_HideMirrorWindow(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_013_CompositorDumpImages(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn, 5)
void __thiscall winIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn(winIVRCompositor_IVRCompositor_013 *_this, bool bOverride)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn(_this->linux_side, bOverride);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_013 *create_winIVRCompositor_IVRCompositor_013(void *linux_side)
{
    winIVRCompositor_IVRCompositor_013 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_013));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_013_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_013(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_013 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_013 *create_winIVRCompositor_IVRCompositor_013_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_013 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_013));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_013_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_013 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_012.h"

typedef struct __winIVRCompositor_IVRCompositor_012 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_012;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_012_SetTrackingSpace(winIVRCompositor_IVRCompositor_012 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_012_GetTrackingSpace(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_WaitGetPoses(winIVRCompositor_IVRCompositor_012 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_GetLastPoses(winIVRCompositor_IVRCompositor_012 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex, 24)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex(winIVRCompositor_IVRCompositor_012 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex(_this->linux_side, unDeviceIndex, pOutputPose, pOutputGamePose);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_Submit(winIVRCompositor_IVRCompositor_012 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_012_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 12, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_PostPresentHandoff(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_012_PostPresentHandoff, _this->linux_side, 12, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_012_GetFrameTiming(winIVRCompositor_IVRCompositor_012 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_012_FadeToColor(winIVRCompositor_IVRCompositor_012 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_012_FadeGrid(winIVRCompositor_IVRCompositor_012 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_SetSkyboxOverride(winIVRCompositor_IVRCompositor_012 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_CompositorBringToFront(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_CompositorGoToBack(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_CompositorQuit(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_012_IsFullscreen(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_012_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_012_CanRenderScene(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_ShowMirrorWindow(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_HideMirrorWindow(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_012_CompositorDumpImages(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_012_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources, 4)
bool __thiscall winIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources(winIVRCompositor_IVRCompositor_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_012 *create_winIVRCompositor_IVRCompositor_012(void *linux_side)
{
    winIVRCompositor_IVRCompositor_012 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_012));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_012_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_012(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_012 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_012 *create_winIVRCompositor_IVRCompositor_012_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_012 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_012));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_012_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_012 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_011.h"

typedef struct __winIVRCompositor_IVRCompositor_011 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_011;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_011_SetTrackingSpace(winIVRCompositor_IVRCompositor_011 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_011_GetTrackingSpace(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_011_WaitGetPoses(winIVRCompositor_IVRCompositor_011 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_011_GetLastPoses(winIVRCompositor_IVRCompositor_011 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_011_Submit(winIVRCompositor_IVRCompositor_011 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_011_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 11, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_PostPresentHandoff(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_011_PostPresentHandoff, _this->linux_side, 11, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_011_GetFrameTiming(winIVRCompositor_IVRCompositor_011 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_011_FadeToColor(winIVRCompositor_IVRCompositor_011 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_011_FadeGrid(winIVRCompositor_IVRCompositor_011 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_011_SetSkyboxOverride(winIVRCompositor_IVRCompositor_011 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_CompositorBringToFront(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_CompositorGoToBack(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_CompositorQuit(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_011_IsFullscreen(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_011_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_011_CanRenderScene(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_ShowMirrorWindow(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_HideMirrorWindow(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_011_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_011_CompositorDumpImages(winIVRCompositor_IVRCompositor_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_011_CompositorDumpImages(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_011 *create_winIVRCompositor_IVRCompositor_011(void *linux_side)
{
    winIVRCompositor_IVRCompositor_011 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_011));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_011_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_011(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_011 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_011 *create_winIVRCompositor_IVRCompositor_011_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_011 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_011));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_011_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_011 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_010.h"

typedef struct __winIVRCompositor_IVRCompositor_010 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_010;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_010_SetTrackingSpace(winIVRCompositor_IVRCompositor_010 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_010_GetTrackingSpace(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_010_WaitGetPoses(winIVRCompositor_IVRCompositor_010 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_010_GetLastPoses(winIVRCompositor_IVRCompositor_010 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_010_Submit(winIVRCompositor_IVRCompositor_010 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_010_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 10, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_PostPresentHandoff(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_010_PostPresentHandoff, _this->linux_side, 10, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_010_GetFrameTiming(winIVRCompositor_IVRCompositor_010 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_010_FadeToColor(winIVRCompositor_IVRCompositor_010 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_010_FadeGrid(winIVRCompositor_IVRCompositor_010 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_010_SetSkyboxOverride(winIVRCompositor_IVRCompositor_010 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_CompositorBringToFront(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_CompositorGoToBack(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_CompositorQuit(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_010_IsFullscreen(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_010_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_010_CanRenderScene(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_ShowMirrorWindow(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_HideMirrorWindow(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_010_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_010_CompositorDumpImages(winIVRCompositor_IVRCompositor_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_010_CompositorDumpImages(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_010 *create_winIVRCompositor_IVRCompositor_010(void *linux_side)
{
    winIVRCompositor_IVRCompositor_010 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_010));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_010_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_010(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_010 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_010 *create_winIVRCompositor_IVRCompositor_010_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_010 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_010));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_010_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_010 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_009.h"

typedef struct __winIVRCompositor_IVRCompositor_009 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_009;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_009_SetTrackingSpace(winIVRCompositor_IVRCompositor_009 *_this, ETrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetTrackingSpace, 4)
ETrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_009_GetTrackingSpace(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_WaitGetPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_009_WaitGetPoses(winIVRCompositor_IVRCompositor_009 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetLastPoses, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_009_GetLastPoses(winIVRCompositor_IVRCompositor_009 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_GetLastPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_Submit, 28)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_009_Submit(winIVRCompositor_IVRCompositor_009 *_this, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_submit(cppIVRCompositor_IVRCompositor_009_Submit, _this->linux_side, eEye, pTexture, pBounds, nSubmitFlags, 9, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_PostPresentHandoff, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_PostPresentHandoff(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    ivrcompositor_post_present_handoff(cppIVRCompositor_IVRCompositor_009_PostPresentHandoff, _this->linux_side, 9, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_009_GetFrameTiming(winIVRCompositor_IVRCompositor_009 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_009_FadeToColor(winIVRCompositor_IVRCompositor_009 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_009_FadeGrid(winIVRCompositor_IVRCompositor_009 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_SetSkyboxOverride, 16)
EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_009_SetSkyboxOverride(winIVRCompositor_IVRCompositor_009 *_this, Texture_t * pTextures, uint32_t unTextureCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride(_this->linux_side, pTextures, unTextureCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_CompositorBringToFront(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_CompositorGoToBack(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_CompositorQuit(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_009_IsFullscreen(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_009_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_GetLastFrameRenderer(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_009_CanRenderScene(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_ShowMirrorWindow(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_HideMirrorWindow(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible, 4)
bool __thiscall winIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_009_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_009_CompositorDumpImages(winIVRCompositor_IVRCompositor_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_009_CompositorDumpImages(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_009 *create_winIVRCompositor_IVRCompositor_009(void *linux_side)
{
    winIVRCompositor_IVRCompositor_009 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_009));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_009_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_009(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_009 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_009 *create_winIVRCompositor_IVRCompositor_009_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_009 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_009));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_009_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_009 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_008.h"

typedef struct __winIVRCompositor_IVRCompositor_008 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_008;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetLastError, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_008_GetLastError(winIVRCompositor_IVRCompositor_008 *_this, char * pchBuffer, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_GetLastError(_this->linux_side, pchBuffer, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_SetVSync, 5)
void __thiscall winIVRCompositor_IVRCompositor_008_SetVSync(winIVRCompositor_IVRCompositor_008 *_this, bool bVSync)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_SetVSync(_this->linux_side, bVSync);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetVSync, 4)
bool __thiscall winIVRCompositor_IVRCompositor_008_GetVSync(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_GetVSync(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_SetGamma, 8)
void __thiscall winIVRCompositor_IVRCompositor_008_SetGamma(winIVRCompositor_IVRCompositor_008 *_this, float fGamma)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_SetGamma(_this->linux_side, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetGamma, 4)
float __thiscall winIVRCompositor_IVRCompositor_008_GetGamma(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_GetGamma(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_WaitGetPoses, 28)
VRCompositorError __thiscall winIVRCompositor_IVRCompositor_008_WaitGetPoses(winIVRCompositor_IVRCompositor_008 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_Submit, 32)
VRCompositorError __thiscall winIVRCompositor_IVRCompositor_008_Submit(winIVRCompositor_IVRCompositor_008 *_this, Hmd_Eye eEye, GraphicsAPIConvention eTextureType, void * pTexture, VRTextureBounds_t * pBounds, VRSubmitFlags_t nSubmitFlags)
{
    TRACE("%p\n", _this);
    return ivrcompositor_008_submit(cppIVRCompositor_IVRCompositor_008_Submit, _this->linux_side, eEye, eTextureType, pTexture, pBounds, nSubmitFlags, 8, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_008_GetFrameTiming(winIVRCompositor_IVRCompositor_008 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_008_FadeToColor(winIVRCompositor_IVRCompositor_008 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_008_FadeGrid(winIVRCompositor_IVRCompositor_008 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_SetSkyboxOverride, 56)
void __thiscall winIVRCompositor_IVRCompositor_008_SetSkyboxOverride(winIVRCompositor_IVRCompositor_008 *_this, GraphicsAPIConvention eTextureType, void * pFront, void * pBack, void * pLeft, void * pRight, void * pTop, void * pBottom)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride(_this->linux_side, eTextureType, pFront, pBack, pLeft, pRight, pTop, pBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_ClearSkyboxOverride, 4)
void __thiscall winIVRCompositor_IVRCompositor_008_ClearSkyboxOverride(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_008_CompositorBringToFront(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_008_CompositorGoToBack(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_008_CompositorQuit(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_008_IsFullscreen(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_008_SetTrackingSpace(winIVRCompositor_IVRCompositor_008 *_this, TrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetTrackingSpace, 4)
TrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_008_GetTrackingSpace(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_008_CanRenderScene(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_CanRenderScene(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_ShowMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_008_ShowMirrorWindow(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_HideMirrorWindow, 4)
void __thiscall winIVRCompositor_IVRCompositor_008_HideMirrorWindow(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_HideMirrorWindow(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_CompositorDumpImages, 4)
void __thiscall winIVRCompositor_IVRCompositor_008_CompositorDumpImages(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_008_CompositorDumpImages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining, 4)
float __thiscall winIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_008_GetLastFrameRenderer, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_008_GetLastFrameRenderer(winIVRCompositor_IVRCompositor_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_008 *create_winIVRCompositor_IVRCompositor_008(void *linux_side)
{
    winIVRCompositor_IVRCompositor_008 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_008));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_008_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_008(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_008 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_008 *create_winIVRCompositor_IVRCompositor_008_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_008 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_008));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_008_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_008 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_007.h"

typedef struct __winIVRCompositor_IVRCompositor_007 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_007;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetLastError, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_007_GetLastError(winIVRCompositor_IVRCompositor_007 *_this, char * pchBuffer, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_GetLastError(_this->linux_side, pchBuffer, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_SetVSync, 5)
void __thiscall winIVRCompositor_IVRCompositor_007_SetVSync(winIVRCompositor_IVRCompositor_007 *_this, bool bVSync)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_SetVSync(_this->linux_side, bVSync);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetVSync, 4)
bool __thiscall winIVRCompositor_IVRCompositor_007_GetVSync(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_GetVSync(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_SetGamma, 8)
void __thiscall winIVRCompositor_IVRCompositor_007_SetGamma(winIVRCompositor_IVRCompositor_007 *_this, float fGamma)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_SetGamma(_this->linux_side, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetGamma, 4)
float __thiscall winIVRCompositor_IVRCompositor_007_GetGamma(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_GetGamma(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_WaitGetPoses, 28)
VRCompositorError __thiscall winIVRCompositor_IVRCompositor_007_WaitGetPoses(winIVRCompositor_IVRCompositor_007 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_Submit, 28)
VRCompositorError __thiscall winIVRCompositor_IVRCompositor_007_Submit(winIVRCompositor_IVRCompositor_007 *_this, Hmd_Eye eEye, GraphicsAPIConvention eTextureType, void * pTexture, VRTextureBounds_t * pBounds)
{
    TRACE("%p\n", _this);
    return ivrcompositor_007_submit(cppIVRCompositor_IVRCompositor_007_Submit, _this->linux_side, eEye, eTextureType, pTexture, pBounds, 7, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_007_GetFrameTiming(winIVRCompositor_IVRCompositor_007 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_007_FadeToColor(winIVRCompositor_IVRCompositor_007 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_007_FadeGrid(winIVRCompositor_IVRCompositor_007 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_007_CompositorBringToFront(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_007_CompositorGoToBack(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_007_CompositorQuit(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_007_IsFullscreen(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_007_SetTrackingSpace(winIVRCompositor_IVRCompositor_007 *_this, TrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_007_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetTrackingSpace, 4)
TrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_007_GetTrackingSpace(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_007_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_007_CanRenderScene(winIVRCompositor_IVRCompositor_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_007_CanRenderScene(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_007 *create_winIVRCompositor_IVRCompositor_007(void *linux_side)
{
    winIVRCompositor_IVRCompositor_007 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_007));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_007_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_007(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_007 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_007 *create_winIVRCompositor_IVRCompositor_007_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_007 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_007));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_007_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_007 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_006.h"

typedef struct __winIVRCompositor_IVRCompositor_006 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_006;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetLastError, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_006_GetLastError(winIVRCompositor_IVRCompositor_006 *_this, char * pchBuffer, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_GetLastError(_this->linux_side, pchBuffer, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_SetVSync, 5)
void __thiscall winIVRCompositor_IVRCompositor_006_SetVSync(winIVRCompositor_IVRCompositor_006 *_this, bool bVSync)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_SetVSync(_this->linux_side, bVSync);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetVSync, 4)
bool __thiscall winIVRCompositor_IVRCompositor_006_GetVSync(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_GetVSync(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_SetGamma, 8)
void __thiscall winIVRCompositor_IVRCompositor_006_SetGamma(winIVRCompositor_IVRCompositor_006 *_this, float fGamma)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_SetGamma(_this->linux_side, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetGamma, 4)
float __thiscall winIVRCompositor_IVRCompositor_006_GetGamma(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_GetGamma(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_SetGraphicsDevice, 16)
void __thiscall winIVRCompositor_IVRCompositor_006_SetGraphicsDevice(winIVRCompositor_IVRCompositor_006 *_this, Compositor_DeviceType eType, void * pDevice)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice(_this->linux_side, eType, pDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_WaitGetPoses, 28)
VRCompositorError __thiscall winIVRCompositor_IVRCompositor_006_WaitGetPoses(winIVRCompositor_IVRCompositor_006 *_this, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_WaitGetPoses(_this->linux_side, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_Submit, 24)
VRCompositorError __thiscall winIVRCompositor_IVRCompositor_006_Submit(winIVRCompositor_IVRCompositor_006 *_this, Hmd_Eye eEye, void * pTexture, VRTextureBounds_t * pBounds)
{
    TRACE("%p\n", _this);
    return ivrcompositor_006_submit(cppIVRCompositor_IVRCompositor_006_Submit, _this->linux_side, eEye, pTexture, pBounds, 6, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_006_GetFrameTiming(winIVRCompositor_IVRCompositor_006 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_006_FadeToColor(winIVRCompositor_IVRCompositor_006 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_006_FadeGrid(winIVRCompositor_IVRCompositor_006 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_006_CompositorBringToFront(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_006_CompositorGoToBack(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_006_CompositorQuit(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_006_IsFullscreen(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_006_SetTrackingSpace(winIVRCompositor_IVRCompositor_006 *_this, TrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_006_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetTrackingSpace, 4)
TrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_006_GetTrackingSpace(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_GetTrackingSpace(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess, 4)
uint32_t __thiscall winIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_006_CanRenderScene, 4)
bool __thiscall winIVRCompositor_IVRCompositor_006_CanRenderScene(winIVRCompositor_IVRCompositor_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_006_CanRenderScene(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_006 *create_winIVRCompositor_IVRCompositor_006(void *linux_side)
{
    winIVRCompositor_IVRCompositor_006 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_006));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_006_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_006(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_006 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_006 *create_winIVRCompositor_IVRCompositor_006_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_006 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_006));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_006_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_006 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRCompositor_IVRCompositor_005.h"

typedef struct __winIVRCompositor_IVRCompositor_005 {
    vtable_ptr *vtable;
    void *linux_side;
    struct compositor_data user_data;
} winIVRCompositor_IVRCompositor_005;

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetLastError, 16)
uint32_t __thiscall winIVRCompositor_IVRCompositor_005_GetLastError(winIVRCompositor_IVRCompositor_005 *_this, char * pchBuffer, uint32_t unBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_005_GetLastError(_this->linux_side, pchBuffer, unBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetVSync, 5)
void __thiscall winIVRCompositor_IVRCompositor_005_SetVSync(winIVRCompositor_IVRCompositor_005 *_this, bool bVSync)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_SetVSync(_this->linux_side, bVSync);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetVSync, 4)
bool __thiscall winIVRCompositor_IVRCompositor_005_GetVSync(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_005_GetVSync(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetGamma, 8)
void __thiscall winIVRCompositor_IVRCompositor_005_SetGamma(winIVRCompositor_IVRCompositor_005 *_this, float fGamma)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_SetGamma(_this->linux_side, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetGamma, 4)
float __thiscall winIVRCompositor_IVRCompositor_005_GetGamma(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_005_GetGamma(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetGraphicsDevice, 16)
void __thiscall winIVRCompositor_IVRCompositor_005_SetGraphicsDevice(winIVRCompositor_IVRCompositor_005 *_this, Compositor_DeviceType eType, void * pDevice)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice(_this->linux_side, eType, pDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_WaitGetPoses, 16)
void __thiscall winIVRCompositor_IVRCompositor_005_WaitGetPoses(winIVRCompositor_IVRCompositor_005 *_this, TrackedDevicePose_t * pPoseArray, uint32_t unPoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_WaitGetPoses(_this->linux_side, pPoseArray, unPoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_Submit, 24)
void __thiscall winIVRCompositor_IVRCompositor_005_Submit(winIVRCompositor_IVRCompositor_005 *_this, Hmd_Eye eEye, void * pTexture, Compositor_TextureBounds * pBounds)
{
    TRACE("%p\n", _this);
    ivrcompositor_005_submit(cppIVRCompositor_IVRCompositor_005_Submit, _this->linux_side, eEye, pTexture, pBounds, 5, &_this->user_data);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame, 4)
void __thiscall winIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetOverlayDefaults, 12)
void __thiscall winIVRCompositor_IVRCompositor_005_GetOverlayDefaults(winIVRCompositor_IVRCompositor_005 *_this, Compositor_OverlaySettings * pSettings)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults(_this->linux_side, pSettings);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetOverlay, 20)
void __thiscall winIVRCompositor_IVRCompositor_005_SetOverlay(winIVRCompositor_IVRCompositor_005 *_this, void * pTexture, Compositor_OverlaySettings * pSettings)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_SetOverlay(_this->linux_side, pTexture, pSettings);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetOverlayRaw, 32)
void __thiscall winIVRCompositor_IVRCompositor_005_SetOverlayRaw(winIVRCompositor_IVRCompositor_005 *_this, void * buffer, uint32_t width, uint32_t height, uint32_t depth, Compositor_OverlaySettings * pSettings)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_SetOverlayRaw(_this->linux_side, buffer, width, height, depth, pSettings);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetOverlayFromFile, 20)
void __thiscall winIVRCompositor_IVRCompositor_005_SetOverlayFromFile(winIVRCompositor_IVRCompositor_005 *_this, const char * pchFilePath, Compositor_OverlaySettings * pSettings)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile(_this->linux_side, pchFilePath, pSettings);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_ClearOverlay, 4)
void __thiscall winIVRCompositor_IVRCompositor_005_ClearOverlay(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_ClearOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetFrameTiming, 16)
bool __thiscall winIVRCompositor_IVRCompositor_005_GetFrameTiming(winIVRCompositor_IVRCompositor_005 *_this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_005_GetFrameTiming(_this->linux_side, pTiming, unFramesAgo);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_FadeToColor, 25)
void __thiscall winIVRCompositor_IVRCompositor_005_FadeToColor(winIVRCompositor_IVRCompositor_005 *_this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_FadeToColor(_this->linux_side, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_FadeGrid, 9)
void __thiscall winIVRCompositor_IVRCompositor_005_FadeGrid(winIVRCompositor_IVRCompositor_005 *_this, float fSeconds, bool bFadeIn)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_FadeGrid(_this->linux_side, fSeconds, bFadeIn);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_CompositorBringToFront, 4)
void __thiscall winIVRCompositor_IVRCompositor_005_CompositorBringToFront(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_CompositorBringToFront(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_CompositorGoToBack, 4)
void __thiscall winIVRCompositor_IVRCompositor_005_CompositorGoToBack(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_CompositorGoToBack(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_CompositorQuit, 4)
void __thiscall winIVRCompositor_IVRCompositor_005_CompositorQuit(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_CompositorQuit(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_IsFullscreen, 4)
bool __thiscall winIVRCompositor_IVRCompositor_005_IsFullscreen(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_005_IsFullscreen(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection, 60)
bool __thiscall winIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection(winIVRCompositor_IVRCompositor_005 *_this, Compositor_OverlaySettings * pSettings, float fAspectRatio, TrackingUniverseOrigin eOrigin, HmdVector3_t vSource, HmdVector3_t vDirection, HmdVector2_t * pvecIntersectionUV, HmdVector3_t * pvecIntersectionTrackingSpace)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection(_this->linux_side, pSettings, fAspectRatio, eOrigin, vSource, vDirection, pvecIntersectionUV, pvecIntersectionTrackingSpace);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_SetTrackingSpace, 8)
void __thiscall winIVRCompositor_IVRCompositor_005_SetTrackingSpace(winIVRCompositor_IVRCompositor_005 *_this, TrackingUniverseOrigin eOrigin)
{
    TRACE("%p\n", _this);
    cppIVRCompositor_IVRCompositor_005_SetTrackingSpace(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winIVRCompositor_IVRCompositor_005_GetTrackingSpace, 4)
TrackingUniverseOrigin __thiscall winIVRCompositor_IVRCompositor_005_GetTrackingSpace(winIVRCompositor_IVRCompositor_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRCompositor_IVRCompositor_005_GetTrackingSpace(_this->linux_side);
}

extern vtable_ptr winIVRCompositor_IVRCompositor_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

winIVRCompositor_IVRCompositor_005 *create_winIVRCompositor_IVRCompositor_005(void *linux_side)
{
    winIVRCompositor_IVRCompositor_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRCompositor_IVRCompositor_005_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_005(void *object)
{
    TRACE("%p\n", object);
    struct __winIVRCompositor_IVRCompositor_005 *win_object = object;
    destroy_compositor_data(&win_object->user_data);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRCompositor_IVRCompositor_005 *create_winIVRCompositor_IVRCompositor_005_FnTable(void *linux_side)
{
    winIVRCompositor_IVRCompositor_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRCompositor_IVRCompositor_005));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRCompositor_IVRCompositor_005_FnTable(void *object)
{
    winIVRCompositor_IVRCompositor_005 *win_object = object;
    TRACE("%p\n", win_object);
    destroy_compositor_data(&win_object->user_data);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

