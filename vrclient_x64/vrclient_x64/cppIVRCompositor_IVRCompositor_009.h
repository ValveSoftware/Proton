/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRCompositor_IVRCompositor_009_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_009_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_009_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_009_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_009_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_009_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_009_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_009_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_009_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_009_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_009_GetLastPoses( struct cppIVRCompositor_IVRCompositor_009_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_009_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_009_Submit( struct cppIVRCompositor_IVRCompositor_009_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_009_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_009_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_009_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    w_Compositor_FrameTiming_0913 *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_009_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_009_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_009_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_009_FadeToColor( struct cppIVRCompositor_IVRCompositor_009_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_009_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_009_FadeGrid( struct cppIVRCompositor_IVRCompositor_009_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_009_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_009_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_009_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_009_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_009_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_009_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_009_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_CompositorQuit( struct cppIVRCompositor_IVRCompositor_009_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_009_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_009_IsFullscreen( struct cppIVRCompositor_IVRCompositor_009_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_009_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_009_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_009_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_009_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_009_CanRenderScene( struct cppIVRCompositor_IVRCompositor_009_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_009_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_009_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_009_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_009_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_009_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_009_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_009_CompositorDumpImages_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
