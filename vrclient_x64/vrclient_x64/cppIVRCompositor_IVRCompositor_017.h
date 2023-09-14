#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_017_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_017_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_017_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_017_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_017_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_017_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_017_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_017_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_017_GetLastPoses( struct cppIVRCompositor_IVRCompositor_017_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_017_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_017_Submit( struct cppIVRCompositor_IVRCompositor_017_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_017_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_017_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_017_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_017_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetFrameTimings_params
{
    void *linux_side;
    uint32_t _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t nFrames;
};
extern void cppIVRCompositor_IVRCompositor_017_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_017_GetFrameTimings_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_017_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_017_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_017_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_017_FadeToColor( struct cppIVRCompositor_IVRCompositor_017_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_017_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_017_FadeGrid( struct cppIVRCompositor_IVRCompositor_017_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_017_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_017_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_017_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_017_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_017_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_017_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_017_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_CompositorQuit( struct cppIVRCompositor_IVRCompositor_017_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_017_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_017_IsFullscreen( struct cppIVRCompositor_IVRCompositor_017_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_017_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_017_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_017_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_017_CanRenderScene( struct cppIVRCompositor_IVRCompositor_017_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_017_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_017_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_017_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_017_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_017_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_017_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_017_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_017_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_017_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_017_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_017_SuspendRendering( struct cppIVRCompositor_IVRCompositor_017_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_017_GetMirrorTextureGL_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    glUInt_t *pglTextureId;
    glSharedTextureHandle_t *pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_017_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_017_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    glUInt_t glTextureId;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    glSharedTextureHandle_t glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess_params *params );

#ifdef __cplusplus
}
#endif
