#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_022_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_022_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_022_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_022_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_022_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_022_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_022_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_022_GetLastPoses( struct cppIVRCompositor_IVRCompositor_022_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_022_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_022_Submit( struct cppIVRCompositor_IVRCompositor_022_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_022_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_022_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_022_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_022_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_022_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_022_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_022_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_022_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_022_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_022_FadeToColor( struct cppIVRCompositor_IVRCompositor_022_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_022_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_022_GetCurrentFadeColor_params *params );

struct cppIVRCompositor_IVRCompositor_022_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_022_FadeGrid( struct cppIVRCompositor_IVRCompositor_022_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha_params *params );

struct cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_022_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_022_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_022_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_022_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_022_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_022_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_022_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_CompositorQuit( struct cppIVRCompositor_IVRCompositor_022_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_022_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_IsFullscreen( struct cppIVRCompositor_IVRCompositor_022_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_022_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_022_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_CanRenderScene( struct cppIVRCompositor_IVRCompositor_022_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_022_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_022_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_022_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_022_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_022_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_022_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_022_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_022_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_022_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_022_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_022_SuspendRendering( struct cppIVRCompositor_IVRCompositor_022_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_022_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_022_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params
{
    void *linux_side;
    uint32_t eTimingMode;
};
extern void cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params *params );

struct cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params *params );

struct cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled( struct cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled_params *params );

struct cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported( struct cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported_params *params );

struct cppIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading( struct cppIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading_params *params );

#ifdef __cplusplus
}
#endif
