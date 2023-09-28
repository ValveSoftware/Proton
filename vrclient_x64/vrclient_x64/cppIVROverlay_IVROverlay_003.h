#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_003;
struct cppIVROverlay_IVROverlay_003_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_FindOverlay( struct cppIVROverlay_IVROverlay_003_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_CreateOverlay( struct cppIVROverlay_IVROverlay_003_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_DestroyOverlay( struct cppIVROverlay_IVROverlay_003_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_003_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_003_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_003_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayKey( struct cppIVROverlay_IVROverlay_003_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayName( struct cppIVROverlay_IVROverlay_003_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayImageData( struct cppIVROverlay_IVROverlay_003_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayFlag( struct cppIVROverlay_IVROverlay_003_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayFlag( struct cppIVROverlay_IVROverlay_003_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayColor( struct cppIVROverlay_IVROverlay_003_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayColor( struct cppIVROverlay_IVROverlay_003_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_003_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_003_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fGamma;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayGamma( struct cppIVROverlay_IVROverlay_003_SetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayGamma_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfGamma;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayGamma( struct cppIVROverlay_IVROverlay_003_GetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_003_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_003_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_003_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_003_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_003_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_003_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_ShowOverlay( struct cppIVROverlay_IVROverlay_003_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_HideOverlay( struct cppIVROverlay_IVROverlay_003_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_IsOverlayVisible( struct cppIVROverlay_IVROverlay_003_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_003_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    VREvent_t *pEvent;
};
extern void cppIVROverlay_IVROverlay_003_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_003_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_003_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_003_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_003_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_003_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_003_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_003_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_003_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_003_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_003_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureType;
    void *pTexture;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayTexture( struct cppIVROverlay_IVROverlay_003_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_003_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_003_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayRaw( struct cppIVROverlay_IVROverlay_003_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_003_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_003_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_003_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_003_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_003_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_003_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_003_IsDashboardVisible( struct cppIVROverlay_IVROverlay_003_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_003_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_003_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_003_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_003_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_003_ShowDashboard( struct cppIVROverlay_IVROverlay_003_ShowDashboard_params *params );

#ifdef __cplusplus
}
#endif
