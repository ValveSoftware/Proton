#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_012_SetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_012_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_012_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_012_GetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin _ret;
};
extern void cppIVRCompositor_IVRCompositor_012_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_012_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_012_WaitGetPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_012_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_012_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_012_GetLastPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_012_GetLastPoses( struct cppIVRCompositor_IVRCompositor_012_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_012_Submit_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    EVRSubmitFlags nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_012_Submit( struct cppIVRCompositor_IVRCompositor_012_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_012_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_012_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_012_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_012_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_012_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_012_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_012_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_012_FadeToColor( struct cppIVRCompositor_IVRCompositor_012_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_012_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_012_FadeGrid( struct cppIVRCompositor_IVRCompositor_012_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride_params
{
    void *linux_side;
    EVRCompositorError _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_012_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_012_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_012_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_012_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_012_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_012_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_012_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_CompositorQuit( struct cppIVRCompositor_IVRCompositor_012_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_012_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_012_IsFullscreen( struct cppIVRCompositor_IVRCompositor_012_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_012_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_012_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_012_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_012_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_012_CanRenderScene( struct cppIVRCompositor_IVRCompositor_012_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_012_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_012_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_012_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_012_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_012_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_012_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_012_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_012_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources_params *params );

#ifdef __cplusplus
}
#endif
