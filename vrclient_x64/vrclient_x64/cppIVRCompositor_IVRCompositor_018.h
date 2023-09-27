#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_018_SetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_018_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_018_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_018_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_018_WaitGetPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_018_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_018_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetLastPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_018_GetLastPoses( struct cppIVRCompositor_IVRCompositor_018_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_018_Submit_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    EVRSubmitFlags nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_018_Submit( struct cppIVRCompositor_IVRCompositor_018_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_018_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_018_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_018_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_018_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_018_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_018_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_018_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_018_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_018_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_018_FadeToColor( struct cppIVRCompositor_IVRCompositor_018_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_018_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_018_GetCurrentFadeColor_params *params );

struct cppIVRCompositor_IVRCompositor_018_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_018_FadeGrid( struct cppIVRCompositor_IVRCompositor_018_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha_params *params );

struct cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride_params
{
    void *linux_side;
    EVRCompositorError _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_018_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_018_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_018_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_018_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_018_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_018_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_018_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_CompositorQuit( struct cppIVRCompositor_IVRCompositor_018_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_018_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_IsFullscreen( struct cppIVRCompositor_IVRCompositor_018_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_018_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_018_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_CanRenderScene( struct cppIVRCompositor_IVRCompositor_018_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_018_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_018_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_018_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_018_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_018_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_018_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_018_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_018_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_018_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_018_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_018_SuspendRendering( struct cppIVRCompositor_IVRCompositor_018_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_018_GetMirrorTextureGL_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    glUInt_t *pglTextureId;
    glSharedTextureHandle_t *pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_018_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_018_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    glUInt_t glTextureId;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess_params *params );

#ifdef __cplusplus
}
#endif
