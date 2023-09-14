#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_026_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_026_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_026_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_026_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_026_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_026_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_026_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_026_GetLastPoses( struct cppIVRCompositor_IVRCompositor_026_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_026_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_026_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_026_Submit( struct cppIVRCompositor_IVRCompositor_026_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_026_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_026_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_026_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_026_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_026_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_026_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_026_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_026_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_026_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_026_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_026_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_026_FadeToColor( struct cppIVRCompositor_IVRCompositor_026_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_026_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_026_GetCurrentFadeColor_params *params );

struct cppIVRCompositor_IVRCompositor_026_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_026_FadeGrid( struct cppIVRCompositor_IVRCompositor_026_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_026_GetCurrentGridAlpha_params *params );

struct cppIVRCompositor_IVRCompositor_026_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_026_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_026_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_026_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_026_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_026_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_026_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_026_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_026_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_026_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_CompositorQuit( struct cppIVRCompositor_IVRCompositor_026_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_026_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_IsFullscreen( struct cppIVRCompositor_IVRCompositor_026_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_026_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_026_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_026_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_CanRenderScene( struct cppIVRCompositor_IVRCompositor_026_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_026_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_026_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_026_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_026_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_026_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_026_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_026_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_026_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_026_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_026_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_026_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_026_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_026_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_026_SuspendRendering( struct cppIVRCompositor_IVRCompositor_026_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_026_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_026_ReleaseMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetMirrorTextureGL_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    glUInt_t *pglTextureId;
    glSharedTextureHandle_t *pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_026_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_026_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    glUInt_t glTextureId;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_026_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_026_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_026_UnlockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_026_GetVulkanInstanceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_026_SetExplicitTimingMode_params
{
    void *linux_side;
    uint32_t eTimingMode;
};
extern void cppIVRCompositor_IVRCompositor_026_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_026_SetExplicitTimingMode_params *params );

struct cppIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData_params *params );

struct cppIVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled( struct cppIVRCompositor_IVRCompositor_026_IsMotionSmoothingEnabled_params *params );

struct cppIVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported( struct cppIVRCompositor_IVRCompositor_026_IsMotionSmoothingSupported_params *params );

struct cppIVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading( struct cppIVRCompositor_IVRCompositor_026_IsCurrentSceneFocusAppLoading_params *params );

struct cppIVRCompositor_IVRCompositor_026_SetStageOverride_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelPath;
    const HmdMatrix34_t *pTransform;
    const Compositor_StageRenderSettings *pRenderSettings;
    uint32_t nSizeOfRenderSettings;
};
extern void cppIVRCompositor_IVRCompositor_026_SetStageOverride_Async( struct cppIVRCompositor_IVRCompositor_026_SetStageOverride_Async_params *params );

struct cppIVRCompositor_IVRCompositor_026_ClearStageOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_026_ClearStageOverride( struct cppIVRCompositor_IVRCompositor_026_ClearStageOverride_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults_params
{
    void *linux_side;
    bool _ret;
    Compositor_BenchmarkResults *pBenchmarkResults;
    uint32_t nSizeOfBenchmarkResults;
};
extern void cppIVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults( struct cppIVRCompositor_IVRCompositor_026_GetCompositorBenchmarkResults_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pRenderPosePredictionID;
    uint32_t *pGamePosePredictionID;
};
extern void cppIVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs( struct cppIVRCompositor_IVRCompositor_026_GetLastPosePredictionIDs_params *params );

struct cppIVRCompositor_IVRCompositor_026_GetPosesForFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unPosePredictionID;
    TrackedDevicePose_t *pPoseArray;
    uint32_t unPoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_026_GetPosesForFrame( struct cppIVRCompositor_IVRCompositor_026_GetPosesForFrame_params *params );

#ifdef __cplusplus
}
#endif
