#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_008;
struct cppIVRCompositor_IVRCompositor_008_GetLastError_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_008_GetLastError( struct cppIVRCompositor_IVRCompositor_008_GetLastError_params *params );

struct cppIVRCompositor_IVRCompositor_008_SetVSync_params
{
    void *linux_side;
    bool bVSync;
};
extern void cppIVRCompositor_IVRCompositor_008_SetVSync( struct cppIVRCompositor_IVRCompositor_008_SetVSync_params *params );

struct cppIVRCompositor_IVRCompositor_008_GetVSync_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_008_GetVSync( struct cppIVRCompositor_IVRCompositor_008_GetVSync_params *params );

struct cppIVRCompositor_IVRCompositor_008_SetGamma_params
{
    void *linux_side;
    float fGamma;
};
extern void cppIVRCompositor_IVRCompositor_008_SetGamma( struct cppIVRCompositor_IVRCompositor_008_SetGamma_params *params );

struct cppIVRCompositor_IVRCompositor_008_GetGamma_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_008_GetGamma( struct cppIVRCompositor_IVRCompositor_008_GetGamma_params *params );

struct cppIVRCompositor_IVRCompositor_008_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_008_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_008_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_008_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t eTextureType;
    void *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_008_Submit( struct cppIVRCompositor_IVRCompositor_008_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_008_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    winCompositor_FrameTiming_0910 *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_008_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_008_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_008_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_008_FadeToColor( struct cppIVRCompositor_IVRCompositor_008_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_008_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_008_FadeGrid( struct cppIVRCompositor_IVRCompositor_008_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t eTextureType;
    void *pFront;
    void *pBack;
    void *pLeft;
    void *pRight;
    void *pTop;
    void *pBottom;
};
extern void cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_008_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_008_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_008_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_008_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_008_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_008_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_008_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_008_CompositorQuit( struct cppIVRCompositor_IVRCompositor_008_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_008_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_008_IsFullscreen( struct cppIVRCompositor_IVRCompositor_008_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_008_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_008_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_008_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_008_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_008_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_008_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_008_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_008_CanRenderScene( struct cppIVRCompositor_IVRCompositor_008_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_008_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_008_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_008_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_008_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_008_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_008_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params *params );

#ifdef __cplusplus
}
#endif
