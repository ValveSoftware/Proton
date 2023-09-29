/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRCompositor_IVRCompositor_007_GetLastError_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_007_GetLastError( struct cppIVRCompositor_IVRCompositor_007_GetLastError_params *params );

struct cppIVRCompositor_IVRCompositor_007_SetVSync_params
{
    void *linux_side;
    bool bVSync;
};
extern void cppIVRCompositor_IVRCompositor_007_SetVSync( struct cppIVRCompositor_IVRCompositor_007_SetVSync_params *params );

struct cppIVRCompositor_IVRCompositor_007_GetVSync_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_007_GetVSync( struct cppIVRCompositor_IVRCompositor_007_GetVSync_params *params );

struct cppIVRCompositor_IVRCompositor_007_SetGamma_params
{
    void *linux_side;
    float fGamma;
};
extern void cppIVRCompositor_IVRCompositor_007_SetGamma( struct cppIVRCompositor_IVRCompositor_007_SetGamma_params *params );

struct cppIVRCompositor_IVRCompositor_007_GetGamma_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_007_GetGamma( struct cppIVRCompositor_IVRCompositor_007_GetGamma_params *params );

struct cppIVRCompositor_IVRCompositor_007_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_007_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_007_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_007_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t eTextureType;
    void *pTexture;
    const VRTextureBounds_t *pBounds;
};
extern void cppIVRCompositor_IVRCompositor_007_Submit( struct cppIVRCompositor_IVRCompositor_007_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_007_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    w_Compositor_FrameTiming_093 *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_007_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_007_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_007_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_007_FadeToColor( struct cppIVRCompositor_IVRCompositor_007_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_007_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_007_FadeGrid( struct cppIVRCompositor_IVRCompositor_007_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_007_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_007_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_007_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_007_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_007_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_007_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_007_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_007_CompositorQuit( struct cppIVRCompositor_IVRCompositor_007_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_007_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_007_IsFullscreen( struct cppIVRCompositor_IVRCompositor_007_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_007_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_007_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_007_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_007_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_007_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_007_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_007_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_007_CanRenderScene( struct cppIVRCompositor_IVRCompositor_007_CanRenderScene_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
