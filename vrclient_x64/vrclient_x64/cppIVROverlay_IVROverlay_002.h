#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_002_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_FindOverlay( struct cppIVROverlay_IVROverlay_002_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_CreateOverlay( struct cppIVROverlay_IVROverlay_002_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_DestroyOverlay( struct cppIVROverlay_IVROverlay_002_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_002_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_GetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_002_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_002_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayFlag( struct cppIVROverlay_IVROverlay_002_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayFlag( struct cppIVROverlay_IVROverlay_002_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayColor( struct cppIVROverlay_IVROverlay_002_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayColor( struct cppIVROverlay_IVROverlay_002_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_002_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_002_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fGamma;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayGamma( struct cppIVROverlay_IVROverlay_002_SetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfGamma;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayGamma( struct cppIVROverlay_IVROverlay_002_GetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_002_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_002_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_002_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_002_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_002_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_002_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_ShowOverlay( struct cppIVROverlay_IVROverlay_002_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_HideOverlay( struct cppIVROverlay_IVROverlay_002_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_IsOverlayVisible( struct cppIVROverlay_IVROverlay_002_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_002_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    VREvent_t *pEvent;
};
extern void cppIVROverlay_IVROverlay_002_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_002_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_002_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_002_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_002_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_002_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_002_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_002_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_002_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_002_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_002_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eTextureType;
    void *pTexture;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayTexture( struct cppIVROverlay_IVROverlay_002_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_002_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_002_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayRaw( struct cppIVROverlay_IVROverlay_002_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_002_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_002_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_002_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_002_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pMainHandle;
    VROverlayHandle_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_002_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_002_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_002_IsDashboardVisible( struct cppIVROverlay_IVROverlay_002_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_002_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_002_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_002_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess_params *params );

#ifdef __cplusplus
}
#endif
