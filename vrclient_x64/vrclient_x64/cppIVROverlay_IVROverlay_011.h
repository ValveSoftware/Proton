#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_011_FindOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_FindOverlay( struct cppIVROverlay_IVROverlay_011_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_CreateOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_CreateOverlay( struct cppIVROverlay_IVROverlay_011_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_DestroyOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_DestroyOverlay( struct cppIVROverlay_IVROverlay_011_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_SetHighQualityOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_011_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_GetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_011_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_011_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayKey( struct cppIVROverlay_IVROverlay_011_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayName( struct cppIVROverlay_IVROverlay_011_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayImageData_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayImageData( struct cppIVROverlay_IVROverlay_011_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVROverlayError error;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayRenderingPid_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_011_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_011_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayFlag_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayFlag( struct cppIVROverlay_IVROverlay_011_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayFlag_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayFlag( struct cppIVROverlay_IVROverlay_011_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayColor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayColor( struct cppIVROverlay_IVROverlay_011_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayColor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayColor( struct cppIVROverlay_IVROverlay_011_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayAlpha_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_011_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayAlpha_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_011_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayWidthInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_011_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayWidthInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_011_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EColorSpace eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EColorSpace *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayTextureBounds_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_011_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayTextureBounds_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_011_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayTransformType_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayTransformType *peTransformType;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_011_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_011_ShowOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_ShowOverlay( struct cppIVROverlay_IVROverlay_011_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_HideOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_HideOverlay( struct cppIVROverlay_IVROverlay_011_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_IsOverlayVisible( struct cppIVROverlay_IVROverlay_011_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_011_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    winVREvent_t_0920 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_011_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_011_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayInputMethod_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_011_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayInputMethod_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod eInputMethod;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_011_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayMouseScale_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_011_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayMouseScale_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_011_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_011_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_011_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_011_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_011_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_011_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_GetGamepadFocusOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_011_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_011_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_SetGamepadFocusOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_011_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_011_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayNeighbor_params
{
    void *linux_side;
    EVROverlayError _ret;
    EOverlayDirection eDirection;
    VROverlayHandle_t ulFrom;
    VROverlayHandle_t ulTo;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_011_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    EVROverlayError _ret;
    EOverlayDirection eDirection;
    VROverlayHandle_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayTexture( struct cppIVROverlay_IVROverlay_011_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_011_ClearOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_011_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayRaw_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayRaw( struct cppIVROverlay_IVROverlay_011_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_011_SetOverlayFromFile_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_011_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_011_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_011_GetOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    EGraphicsAPIConvention *pAPI;
    EColorSpace *pColorSpace;
};
extern void cppIVROverlay_IVROverlay_011_GetOverlayTexture( struct cppIVROverlay_IVROverlay_011_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_011_CreateDashboardOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pMainHandle;
    VROverlayHandle_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_011_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_011_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_011_IsDashboardVisible( struct cppIVROverlay_IVROverlay_011_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_011_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_011_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_011_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_011_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_011_ShowDashboard( struct cppIVROverlay_IVROverlay_011_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
};
extern void cppIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_011_ShowKeyboard_params
{
    void *linux_side;
    EVROverlayError _ret;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    bool bUseMinimalMode;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_011_ShowKeyboard( struct cppIVROverlay_IVROverlay_011_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_011_ShowKeyboardForOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    bool bUseMinimalMode;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_011_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_011_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_011_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_011_GetKeyboardText( struct cppIVROverlay_IVROverlay_011_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_011_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_011_HideKeyboard( struct cppIVROverlay_IVROverlay_011_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    VROverlayHandle_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay_params *params );

#ifdef __cplusplus
}
#endif
