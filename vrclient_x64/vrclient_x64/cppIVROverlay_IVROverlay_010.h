#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_010_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_FindOverlay( struct cppIVROverlay_IVROverlay_010_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_CreateOverlay( struct cppIVROverlay_IVROverlay_010_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_DestroyOverlay( struct cppIVROverlay_IVROverlay_010_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_010_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_010_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_010_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayKey( struct cppIVROverlay_IVROverlay_010_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayName( struct cppIVROverlay_IVROverlay_010_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayImageData( struct cppIVROverlay_IVROverlay_010_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayFlag( struct cppIVROverlay_IVROverlay_010_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayFlag( struct cppIVROverlay_IVROverlay_010_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayColor( struct cppIVROverlay_IVROverlay_010_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayColor( struct cppIVROverlay_IVROverlay_010_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_010_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_010_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_010_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_010_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_010_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_010_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_010_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_010_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_ShowOverlay( struct cppIVROverlay_IVROverlay_010_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_HideOverlay( struct cppIVROverlay_IVROverlay_010_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_IsOverlayVisible( struct cppIVROverlay_IVROverlay_010_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_010_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    winVREvent_t_0918 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_010_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_010_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_010_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_010_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_010_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_010_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_010_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_010_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_010_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_010_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_010_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_010_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_010_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_010_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_010_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_010_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_010_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_010_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayTexture( struct cppIVROverlay_IVROverlay_010_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_010_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_010_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayRaw( struct cppIVROverlay_IVROverlay_010_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_010_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_010_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_010_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_010_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_010_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_010_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_010_IsDashboardVisible( struct cppIVROverlay_IVROverlay_010_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_010_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_010_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_010_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_010_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_010_ShowDashboard( struct cppIVROverlay_IVROverlay_010_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_010_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_010_ShowKeyboard( struct cppIVROverlay_IVROverlay_010_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_010_ShowKeyboardForOverlay_params
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
extern void cppIVROverlay_IVROverlay_010_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_010_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_010_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_010_GetKeyboardText( struct cppIVROverlay_IVROverlay_010_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_010_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_010_HideKeyboard( struct cppIVROverlay_IVROverlay_010_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay_params *params );

#ifdef __cplusplus
}
#endif
