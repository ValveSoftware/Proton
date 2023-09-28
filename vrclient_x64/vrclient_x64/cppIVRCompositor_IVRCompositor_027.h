#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_027;
struct cppIVRCompositor_IVRCompositor_027_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_027_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_027_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_027_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_027_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_027_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_027_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_027_GetLastPoses( struct cppIVRCompositor_IVRCompositor_027_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_027_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_027_Submit( struct cppIVRCompositor_IVRCompositor_027_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_027_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_027_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_027_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_027_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_027_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_027_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_027_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_027_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_027_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_027_FadeToColor( struct cppIVRCompositor_IVRCompositor_027_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor_params *params );

struct cppIVRCompositor_IVRCompositor_027_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeGridIn;
};
extern void cppIVRCompositor_IVRCompositor_027_FadeGrid( struct cppIVRCompositor_IVRCompositor_027_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha_params *params );

struct cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_027_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_027_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_027_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_027_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_027_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_CompositorQuit( struct cppIVRCompositor_IVRCompositor_027_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_027_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_IsFullscreen( struct cppIVRCompositor_IVRCompositor_027_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_027_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_CanRenderScene( struct cppIVRCompositor_IVRCompositor_027_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_027_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_027_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_027_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_027_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_027_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_027_SuspendRendering( struct cppIVRCompositor_IVRCompositor_027_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params
{
    void *linux_side;
    uint32_t eTimingMode;
};
extern void cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params *params );

struct cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData_params *params );

struct cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled( struct cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled_params *params );

struct cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported( struct cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported_params *params );

struct cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading( struct cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading_params *params );

struct cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelPath;
    const HmdMatrix34_t *pTransform;
    const Compositor_StageRenderSettings *pRenderSettings;
    uint32_t nSizeOfRenderSettings;
};
extern void cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async( struct cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async_params *params );

struct cppIVRCompositor_IVRCompositor_027_ClearStageOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_027_ClearStageOverride( struct cppIVRCompositor_IVRCompositor_027_ClearStageOverride_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults_params
{
    void *linux_side;
    bool _ret;
    Compositor_BenchmarkResults *pBenchmarkResults;
    uint32_t nSizeOfBenchmarkResults;
};
extern void cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults( struct cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pRenderPosePredictionID;
    uint32_t *pGamePosePredictionID;
};
extern void cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs( struct cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs_params *params );

struct cppIVRCompositor_IVRCompositor_027_GetPosesForFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unPosePredictionID;
    TrackedDevicePose_t *pPoseArray;
    uint32_t unPoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_027_GetPosesForFrame( struct cppIVRCompositor_IVRCompositor_027_GetPosesForFrame_params *params );

#ifdef __cplusplus
}
#endif
