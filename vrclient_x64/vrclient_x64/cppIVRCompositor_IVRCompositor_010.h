#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_010_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_010_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_010_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_010_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_010_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_010_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_010_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_010_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_010_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_010_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_010_GetLastPoses( struct cppIVRCompositor_IVRCompositor_010_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_010_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_010_Submit( struct cppIVRCompositor_IVRCompositor_010_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_010_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_010_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_010_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    winCompositor_FrameTiming_0914 *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_010_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_010_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_010_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_010_FadeToColor( struct cppIVRCompositor_IVRCompositor_010_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_010_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_010_FadeGrid( struct cppIVRCompositor_IVRCompositor_010_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_010_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_010_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_010_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_010_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_010_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_CompositorQuit( struct cppIVRCompositor_IVRCompositor_010_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_010_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_010_IsFullscreen( struct cppIVRCompositor_IVRCompositor_010_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_010_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_010_CanRenderScene( struct cppIVRCompositor_IVRCompositor_010_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_010_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_010_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_010_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_010_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_010_CompositorDumpImages_params *params );

#ifdef __cplusplus
}
#endif
