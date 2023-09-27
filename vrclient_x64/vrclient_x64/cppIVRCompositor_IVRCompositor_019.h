#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_019_SetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_019_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_019_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_019_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_019_WaitGetPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_019_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_019_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetLastPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_019_GetLastPoses( struct cppIVRCompositor_IVRCompositor_019_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_019_Submit_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    EVRSubmitFlags nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_019_Submit( struct cppIVRCompositor_IVRCompositor_019_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_019_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_019_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_019_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_019_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_019_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_019_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_019_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_019_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_019_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_019_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_019_FadeToColor( struct cppIVRCompositor_IVRCompositor_019_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_019_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_019_GetCurrentFadeColor_params *params );

struct cppIVRCompositor_IVRCompositor_019_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_019_FadeGrid( struct cppIVRCompositor_IVRCompositor_019_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_019_GetCurrentGridAlpha_params *params );

struct cppIVRCompositor_IVRCompositor_019_SetSkyboxOverride_params
{
    void *linux_side;
    EVRCompositorError _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_019_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_019_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_019_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_019_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_019_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_019_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_019_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_019_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_019_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_CompositorQuit( struct cppIVRCompositor_IVRCompositor_019_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_019_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_IsFullscreen( struct cppIVRCompositor_IVRCompositor_019_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_019_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_019_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_CanRenderScene( struct cppIVRCompositor_IVRCompositor_019_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_019_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_019_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_019_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_019_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_019_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_019_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_019_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_019_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_019_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_019_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_019_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_019_SuspendRendering( struct cppIVRCompositor_IVRCompositor_019_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetMirrorTextureGL_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    glUInt_t *pglTextureId;
    glSharedTextureHandle_t *pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_019_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_019_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    glUInt_t glTextureId;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired_params *params );

#ifdef __cplusplus
}
#endif
