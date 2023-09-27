#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_020_SetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_020_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_020_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_020_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_020_WaitGetPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_020_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_020_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetLastPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_020_GetLastPoses( struct cppIVRCompositor_IVRCompositor_020_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_020_Submit_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    EVRSubmitFlags nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_020_Submit( struct cppIVRCompositor_IVRCompositor_020_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_020_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_020_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_020_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_020_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_020_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_020_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_020_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_020_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_020_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_020_FadeToColor( struct cppIVRCompositor_IVRCompositor_020_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetCurrentFadeColor_params
{
    void *linux_side;
    HmdColor_t *_ret;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_020_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_020_GetCurrentFadeColor_params *params );

struct cppIVRCompositor_IVRCompositor_020_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_020_FadeGrid( struct cppIVRCompositor_IVRCompositor_020_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha_params *params );

struct cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride_params
{
    void *linux_side;
    EVRCompositorError _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_020_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_020_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_020_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_020_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_020_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_020_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_020_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_CompositorQuit( struct cppIVRCompositor_IVRCompositor_020_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_020_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_IsFullscreen( struct cppIVRCompositor_IVRCompositor_020_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_020_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_020_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_CanRenderScene( struct cppIVRCompositor_IVRCompositor_020_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_020_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_020_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_020_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_020_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_020_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_020_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_020_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_020_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_020_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_020_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_020_SuspendRendering( struct cppIVRCompositor_IVRCompositor_020_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11_params
{
    void *linux_side;
    void *pD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetMirrorTextureGL_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    glUInt_t *pglTextureId;
    glSharedTextureHandle_t *pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_020_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_020_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    glUInt_t glTextureId;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired_params *params );

struct cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired_params
{
    void *linux_side;
    uint32_t _ret;
    VkPhysicalDevice_T *pPhysicalDevice;
    char *pchValue;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired_params *params );

#ifdef __cplusplus
}
#endif
