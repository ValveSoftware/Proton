#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_021;
struct cppIVRCompositor_IVRCompositor_021_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_021_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_021_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_021_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_021_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_021_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_021_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_021_GetLastPoses( struct cppIVRCompositor_IVRCompositor_021_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_021_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_021_Submit( struct cppIVRCompositor_IVRCompositor_021_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_021_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_021_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_021_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_021_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_021_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_021_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_021_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_021_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_021_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_021_FadeToColor( struct cppIVRCompositor_IVRCompositor_021_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_021_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_021_GetCurrentFadeColor_params *params );

struct cppIVRCompositor_IVRCompositor_021_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_021_FadeGrid( struct cppIVRCompositor_IVRCompositor_021_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha_params *params );

struct cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_021_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_021_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_021_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_021_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_021_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_021_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_021_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_CompositorQuit( struct cppIVRCompositor_IVRCompositor_021_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_021_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_IsFullscreen( struct cppIVRCompositor_IVRCompositor_021_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_021_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_021_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_CanRenderScene( struct cppIVRCompositor_IVRCompositor_021_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_021_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_021_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_021_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_021_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_021_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_021_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_021_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_021_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_021_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_021_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_021_SuspendRendering( struct cppIVRCompositor_IVRCompositor_021_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_021_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_021_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode_params
{
    void *linux_side;
    bool bExplicitTimingMode;
};
extern void cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode_params *params );

struct cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData_params *params );

#ifdef __cplusplus
}
#endif
