#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_024_SetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_024_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_024_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_024_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_024_WaitGetPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_024_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_024_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetLastPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_024_GetLastPoses( struct cppIVRCompositor_IVRCompositor_024_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_024_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_024_Submit_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    EVRSubmitFlags nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_024_Submit( struct cppIVRCompositor_IVRCompositor_024_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_024_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_024_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_024_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_024_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_024_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_024_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_024_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_024_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_024_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_024_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_024_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_024_FadeToColor( struct cppIVRCompositor_IVRCompositor_024_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_024_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_024_GetCurrentFadeColor_params *params );

struct cppIVRCompositor_IVRCompositor_024_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_024_FadeGrid( struct cppIVRCompositor_IVRCompositor_024_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_024_GetCurrentGridAlpha_params *params );

struct cppIVRCompositor_IVRCompositor_024_SetSkyboxOverride_params
{
    void *linux_side;
    EVRCompositorError _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_024_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_024_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_024_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_024_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_024_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_024_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_024_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_024_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_024_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_CompositorQuit( struct cppIVRCompositor_IVRCompositor_024_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_024_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_IsFullscreen( struct cppIVRCompositor_IVRCompositor_024_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_024_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_024_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_024_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_CanRenderScene( struct cppIVRCompositor_IVRCompositor_024_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_024_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_024_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_024_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_024_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_024_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_024_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_024_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_024_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_024_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_024_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_024_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_024_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_024_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_024_SuspendRendering( struct cppIVRCompositor_IVRCompositor_024_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_024_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_024_ReleaseMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetMirrorTextureGL_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    glUInt_t *pglTextureId;
    glSharedTextureHandle_t *pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_024_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_024_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    glUInt_t glTextureId;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_024_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_024_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_024_UnlockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_024_GetVulkanInstanceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_024_SetExplicitTimingMode_params
{
    void *linux_side;
    EVRCompositorTimingMode eTimingMode;
};
extern void cppIVRCompositor_IVRCompositor_024_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_024_SetExplicitTimingMode_params *params );

struct cppIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData_params
{
    void *linux_side;
    EVRCompositorError _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData_params *params );

struct cppIVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled( struct cppIVRCompositor_IVRCompositor_024_IsMotionSmoothingEnabled_params *params );

struct cppIVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported( struct cppIVRCompositor_IVRCompositor_024_IsMotionSmoothingSupported_params *params );

struct cppIVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading( struct cppIVRCompositor_IVRCompositor_024_IsCurrentSceneFocusAppLoading_params *params );

struct cppIVRCompositor_IVRCompositor_024_SetStageOverride_Async_params
{
    void *linux_side;
    EVRCompositorError _ret;
    const char *pchRenderModelPath;
    const HmdMatrix34_t *pTransform;
    const Compositor_StageRenderSettings *pRenderSettings;
    uint32_t nSizeOfRenderSettings;
};
extern void cppIVRCompositor_IVRCompositor_024_SetStageOverride_Async( struct cppIVRCompositor_IVRCompositor_024_SetStageOverride_Async_params *params );

struct cppIVRCompositor_IVRCompositor_024_ClearStageOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_024_ClearStageOverride( struct cppIVRCompositor_IVRCompositor_024_ClearStageOverride_params *params );

#ifdef __cplusplus
}
#endif
