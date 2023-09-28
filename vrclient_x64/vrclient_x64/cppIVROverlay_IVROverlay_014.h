#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_014;
struct cppIVROverlay_IVROverlay_014_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_FindOverlay( struct cppIVROverlay_IVROverlay_014_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_CreateOverlay( struct cppIVROverlay_IVROverlay_014_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_DestroyOverlay( struct cppIVROverlay_IVROverlay_014_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_014_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_014_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_014_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayKey( struct cppIVROverlay_IVROverlay_014_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayName( struct cppIVROverlay_IVROverlay_014_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayImageData( struct cppIVROverlay_IVROverlay_014_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_014_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_014_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayFlag( struct cppIVROverlay_IVROverlay_014_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayFlag( struct cppIVROverlay_IVROverlay_014_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayColor( struct cppIVROverlay_IVROverlay_014_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayColor( struct cppIVROverlay_IVROverlay_014_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_014_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_014_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_014_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_014_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_014_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_014_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_014_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_014_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_014_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_014_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_014_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_014_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_ShowOverlay( struct cppIVROverlay_IVROverlay_014_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_HideOverlay( struct cppIVROverlay_IVROverlay_014_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_IsOverlayVisible( struct cppIVROverlay_IVROverlay_014_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_014_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    winVREvent_t_106 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_014_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_014_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_014_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_014_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_014_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_014_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_014_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_014_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_014_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_014_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_014_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_014_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_014_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_014_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_014_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_014_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayTexture( struct cppIVROverlay_IVROverlay_014_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_014_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_014_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayRaw( struct cppIVROverlay_IVROverlay_014_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_014_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTexture( struct cppIVROverlay_IVROverlay_014_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_014_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_014_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_014_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_014_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_014_IsDashboardVisible( struct cppIVROverlay_IVROverlay_014_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_014_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_014_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_014_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_014_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_014_ShowDashboard( struct cppIVROverlay_IVROverlay_014_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_014_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_014_ShowKeyboard( struct cppIVROverlay_IVROverlay_014_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_014_ShowKeyboardForOverlay_params
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
extern void cppIVROverlay_IVROverlay_014_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_014_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_014_GetKeyboardText( struct cppIVROverlay_IVROverlay_014_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_014_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_014_HideKeyboard( struct cppIVROverlay_IVROverlay_014_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_014_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_014_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_014_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_014_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_014_GetOverlayFlags( struct cppIVROverlay_IVROverlay_014_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_014_ShowMessageOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};
extern void cppIVROverlay_IVROverlay_014_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_014_ShowMessageOverlay_params *params );

#ifdef __cplusplus
}
#endif
