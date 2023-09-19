#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_007_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_FindOverlay( struct cppIVROverlay_IVROverlay_007_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_CreateOverlay( struct cppIVROverlay_IVROverlay_007_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_DestroyOverlay( struct cppIVROverlay_IVROverlay_007_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_007_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_007_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_007_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayKey( struct cppIVROverlay_IVROverlay_007_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayName( struct cppIVROverlay_IVROverlay_007_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayImageData( struct cppIVROverlay_IVROverlay_007_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayFlag( struct cppIVROverlay_IVROverlay_007_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayFlag( struct cppIVROverlay_IVROverlay_007_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayColor( struct cppIVROverlay_IVROverlay_007_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayColor( struct cppIVROverlay_IVROverlay_007_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_007_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_007_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_007_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_ShowOverlay( struct cppIVROverlay_IVROverlay_007_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_HideOverlay( struct cppIVROverlay_IVROverlay_007_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_IsOverlayVisible( struct cppIVROverlay_IVROverlay_007_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_007_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    VREvent_t *pEvent;
};
extern void cppIVROverlay_IVROverlay_007_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_007_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_007_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_007_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_007_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_007_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_007_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_007_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_007_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayTexture( struct cppIVROverlay_IVROverlay_007_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_007_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_007_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayRaw( struct cppIVROverlay_IVROverlay_007_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_007_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_007_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_007_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_007_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_007_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_007_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_007_IsDashboardVisible( struct cppIVROverlay_IVROverlay_007_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_007_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_007_ShowDashboard( struct cppIVROverlay_IVROverlay_007_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_007_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    bool bUseMinimalMode;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_007_ShowKeyboard( struct cppIVROverlay_IVROverlay_007_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    bool bUseMinimalMode;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_007_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_007_GetKeyboardText( struct cppIVROverlay_IVROverlay_007_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_007_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_007_HideKeyboard( struct cppIVROverlay_IVROverlay_007_HideKeyboard_params *params );

#ifdef __cplusplus
}
#endif
