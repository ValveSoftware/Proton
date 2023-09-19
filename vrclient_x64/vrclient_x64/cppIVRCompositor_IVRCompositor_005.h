#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_005_GetLastError_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};
extern void cppIVRCompositor_IVRCompositor_005_GetLastError( struct cppIVRCompositor_IVRCompositor_005_GetLastError_params *params );

struct cppIVRCompositor_IVRCompositor_005_SetVSync_params
{
    void *linux_side;
    bool bVSync;
};
extern void cppIVRCompositor_IVRCompositor_005_SetVSync( struct cppIVRCompositor_IVRCompositor_005_SetVSync_params *params );

struct cppIVRCompositor_IVRCompositor_005_GetVSync_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_005_GetVSync( struct cppIVRCompositor_IVRCompositor_005_GetVSync_params *params );

struct cppIVRCompositor_IVRCompositor_005_SetGamma_params
{
    void *linux_side;
    float fGamma;
};
extern void cppIVRCompositor_IVRCompositor_005_SetGamma( struct cppIVRCompositor_IVRCompositor_005_SetGamma_params *params );

struct cppIVRCompositor_IVRCompositor_005_GetGamma_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_005_GetGamma( struct cppIVRCompositor_IVRCompositor_005_GetGamma_params *params );

struct cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice_params
{
    void *linux_side;
    uint32_t eType;
    void *pDevice;
};
extern void cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice( struct cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice_params *params );

struct cppIVRCompositor_IVRCompositor_005_WaitGetPoses_params
{
    void *linux_side;
    TrackedDevicePose_t *pPoseArray;
    uint32_t unPoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_005_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_005_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_005_Submit_params
{
    void *linux_side;
    uint32_t eEye;
    void *pTexture;
    Compositor_TextureBounds *pBounds;
};
extern void cppIVRCompositor_IVRCompositor_005_Submit( struct cppIVRCompositor_IVRCompositor_005_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults_params
{
    void *linux_side;
    Compositor_OverlaySettings *pSettings;
};
extern void cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults( struct cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults_params *params );

struct cppIVRCompositor_IVRCompositor_005_SetOverlay_params
{
    void *linux_side;
    void *pTexture;
    Compositor_OverlaySettings *pSettings;
};
extern void cppIVRCompositor_IVRCompositor_005_SetOverlay( struct cppIVRCompositor_IVRCompositor_005_SetOverlay_params *params );

struct cppIVRCompositor_IVRCompositor_005_SetOverlayRaw_params
{
    void *linux_side;
    void *buffer;
    uint32_t width;
    uint32_t height;
    uint32_t depth;
    Compositor_OverlaySettings *pSettings;
};
extern void cppIVRCompositor_IVRCompositor_005_SetOverlayRaw( struct cppIVRCompositor_IVRCompositor_005_SetOverlayRaw_params *params );

struct cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile_params
{
    void *linux_side;
    const char *pchFilePath;
    Compositor_OverlaySettings *pSettings;
};
extern void cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile( struct cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile_params *params );

struct cppIVRCompositor_IVRCompositor_005_ClearOverlay_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_005_ClearOverlay( struct cppIVRCompositor_IVRCompositor_005_ClearOverlay_params *params );

struct cppIVRCompositor_IVRCompositor_005_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    winCompositor_FrameTiming_091 *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_005_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_005_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_005_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_005_FadeToColor( struct cppIVRCompositor_IVRCompositor_005_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_005_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_005_FadeGrid( struct cppIVRCompositor_IVRCompositor_005_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_005_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_005_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_005_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_005_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_005_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_005_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_005_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_005_CompositorQuit( struct cppIVRCompositor_IVRCompositor_005_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_005_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_005_IsFullscreen( struct cppIVRCompositor_IVRCompositor_005_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    const Compositor_OverlaySettings *pSettings;
    float fAspectRatio;
    uint32_t eOrigin;
    HmdVector3_t vSource;
    HmdVector3_t vDirection;
    HmdVector2_t *pvecIntersectionUV;
    HmdVector3_t *pvecIntersectionTrackingSpace;
};
extern void cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection( struct cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection_params *params );

struct cppIVRCompositor_IVRCompositor_005_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_005_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_005_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_005_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_005_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_005_GetTrackingSpace_params *params );

#ifdef __cplusplus
}
#endif
