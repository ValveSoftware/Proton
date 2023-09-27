#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_016_SetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_016_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_016_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin _ret;
};
extern void cppIVRCompositor_IVRCompositor_016_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_016_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_016_WaitGetPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_016_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_016_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetLastPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_016_GetLastPoses( struct cppIVRCompositor_IVRCompositor_016_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_016_Submit_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    EVRSubmitFlags nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_016_Submit( struct cppIVRCompositor_IVRCompositor_016_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_016_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_016_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    winCompositor_FrameTiming_103 *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_016_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_016_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_016_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_016_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_016_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_016_FadeToColor( struct cppIVRCompositor_IVRCompositor_016_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_016_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_016_FadeGrid( struct cppIVRCompositor_IVRCompositor_016_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride_params
{
    void *linux_side;
    EVRCompositorError _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_016_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_016_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_016_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_016_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_016_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_016_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_016_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_CompositorQuit( struct cppIVRCompositor_IVRCompositor_016_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_016_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_016_IsFullscreen( struct cppIVRCompositor_IVRCompositor_016_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_016_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_016_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_016_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_016_CanRenderScene( struct cppIVRCompositor_IVRCompositor_016_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_016_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_016_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_016_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_016_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_016_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_016_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_016_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_016_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_016_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_016_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_016_SuspendRendering( struct cppIVRCompositor_IVRCompositor_016_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_016_GetMirrorTextureGL_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    glUInt_t *pglTextureId;
    glSharedTextureHandle_t *pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_016_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_016_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    glUInt_t glTextureId;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess_params *params );

#ifdef __cplusplus
}
#endif
