#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_005_FindOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_FindOverlay( struct cppIVROverlay_IVROverlay_005_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_CreateOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_CreateOverlay( struct cppIVROverlay_IVROverlay_005_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_DestroyOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_DestroyOverlay( struct cppIVROverlay_IVROverlay_005_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_SetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_005_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_GetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_005_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_005_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    VROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayKey( struct cppIVROverlay_IVROverlay_005_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    VROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayName( struct cppIVROverlay_IVROverlay_005_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayImageData_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayImageData( struct cppIVROverlay_IVROverlay_005_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    VROverlayError error;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayFlag_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayFlag( struct cppIVROverlay_IVROverlay_005_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayFlag_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayFlag( struct cppIVROverlay_IVROverlay_005_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayColor_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayColor( struct cppIVROverlay_IVROverlay_005_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayColor_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayColor( struct cppIVROverlay_IVROverlay_005_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayAlpha_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_005_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayAlpha_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_005_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayGamma_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fGamma;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayGamma( struct cppIVROverlay_IVROverlay_005_SetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayGamma_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfGamma;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayGamma( struct cppIVROverlay_IVROverlay_005_GetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayTransformType_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayTransformType *peTransformType;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackingUniverseOrigin *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_005_ShowOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_ShowOverlay( struct cppIVROverlay_IVROverlay_005_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_HideOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_HideOverlay( struct cppIVROverlay_IVROverlay_005_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_IsOverlayVisible( struct cppIVROverlay_IVROverlay_005_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_005_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    VREvent_t *pEvent;
};
extern void cppIVROverlay_IVROverlay_005_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_005_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayInputMethod_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_005_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayInputMethod_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod eInputMethod;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_005_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_005_GetOverlayMouseScale_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_005_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_005_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayMouseScale_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_005_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_005_IsFocusOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_IsFocusOverlay( struct cppIVROverlay_IVROverlay_005_IsFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayTexture_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    GraphicsAPIConvention eTextureType;
    void *pTexture;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayTexture( struct cppIVROverlay_IVROverlay_005_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_005_ClearOverlayTexture_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_005_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayRaw_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayRaw( struct cppIVROverlay_IVROverlay_005_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_005_SetOverlayFromFile_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_005_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_005_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_005_CreateDashboardOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pMainHandle;
    VROverlayHandle_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_005_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_005_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_005_IsDashboardVisible( struct cppIVROverlay_IVROverlay_005_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_005_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_005_ShowDashboard( struct cppIVROverlay_IVROverlay_005_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_005_ShowKeyboard_params
{
    void *linux_side;
    VROverlayError _ret;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    bool bUseMinimalMode;
};
extern void cppIVROverlay_IVROverlay_005_ShowKeyboard( struct cppIVROverlay_IVROverlay_005_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_005_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_005_GetKeyboardText( struct cppIVROverlay_IVROverlay_005_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_005_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_005_HideKeyboard( struct cppIVROverlay_IVROverlay_005_HideKeyboard_params *params );

#ifdef __cplusplus
}
#endif
