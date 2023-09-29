/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRCompositor_IVRCompositor_006_GetLastError_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_006_GetLastError( struct cppIVRCompositor_IVRCompositor_006_GetLastError_params *params );

struct cppIVRCompositor_IVRCompositor_006_SetVSync_params
{
    void *linux_side;
    bool bVSync;
};
extern void cppIVRCompositor_IVRCompositor_006_SetVSync( struct cppIVRCompositor_IVRCompositor_006_SetVSync_params *params );

struct cppIVRCompositor_IVRCompositor_006_GetVSync_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_006_GetVSync( struct cppIVRCompositor_IVRCompositor_006_GetVSync_params *params );

struct cppIVRCompositor_IVRCompositor_006_SetGamma_params
{
    void *linux_side;
    float fGamma;
};
extern void cppIVRCompositor_IVRCompositor_006_SetGamma( struct cppIVRCompositor_IVRCompositor_006_SetGamma_params *params );

struct cppIVRCompositor_IVRCompositor_006_GetGamma_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_006_GetGamma( struct cppIVRCompositor_IVRCompositor_006_GetGamma_params *params );

struct cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice_params
{
    void *linux_side;
    uint32_t eType;
    void *pDevice;
};
extern void cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice( struct cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice_params *params );

struct cppIVRCompositor_IVRCompositor_006_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_006_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_006_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_006_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pTexture;
    VRTextureBounds_t *pBounds;
};
extern void cppIVRCompositor_IVRCompositor_006_Submit( struct cppIVRCompositor_IVRCompositor_006_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_006_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    w_Compositor_FrameTiming_090 *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_006_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_006_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_006_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_006_FadeToColor( struct cppIVRCompositor_IVRCompositor_006_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_006_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_006_FadeGrid( struct cppIVRCompositor_IVRCompositor_006_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_006_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_006_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_006_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_006_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_006_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_006_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_006_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_006_CompositorQuit( struct cppIVRCompositor_IVRCompositor_006_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_006_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_006_IsFullscreen( struct cppIVRCompositor_IVRCompositor_006_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_006_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_006_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_006_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_006_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_006_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_006_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_006_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_006_CanRenderScene( struct cppIVRCompositor_IVRCompositor_006_CanRenderScene_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
