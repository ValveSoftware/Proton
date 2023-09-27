#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_020_FindOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_FindOverlay( struct cppIVROverlay_IVROverlay_020_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_CreateOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_CreateOverlay( struct cppIVROverlay_IVROverlay_020_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_DestroyOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_DestroyOverlay( struct cppIVROverlay_IVROverlay_020_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayKey( struct cppIVROverlay_IVROverlay_020_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayName( struct cppIVROverlay_IVROverlay_020_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayName_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayName( struct cppIVROverlay_IVROverlay_020_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayImageData_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayImageData( struct cppIVROverlay_IVROverlay_020_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVROverlayError error;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayRenderingPid_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_020_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_020_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayFlag_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayFlag( struct cppIVROverlay_IVROverlay_020_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayFlag_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayFlag( struct cppIVROverlay_IVROverlay_020_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayColor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayColor( struct cppIVROverlay_IVROverlay_020_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayColor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayColor( struct cppIVROverlay_IVROverlay_020_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayAlpha_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_020_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayAlpha_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_020_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayTexelAspect_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_020_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTexelAspect_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_020_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlaySortOrder_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_020_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlaySortOrder_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_020_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayWidthInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_020_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayWidthInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_020_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EColorSpace eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EColorSpace *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayTextureBounds_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_020_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTextureBounds_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_020_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_020_GetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayRenderModel_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_020_SetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTransformType_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayTransformType *peTransformType;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_020_ShowOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_ShowOverlay( struct cppIVROverlay_IVROverlay_020_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_HideOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_HideOverlay( struct cppIVROverlay_IVROverlay_020_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_IsOverlayVisible( struct cppIVROverlay_IVROverlay_020_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_020_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    winVREvent_t_1715 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_020_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_020_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayInputMethod_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_020_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayInputMethod_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod eInputMethod;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_020_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayMouseScale_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_020_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayMouseScale_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_020_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_020_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_020_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_020_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_020_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_020_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_GetGamepadFocusOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_020_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_020_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_SetGamepadFocusOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_020_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_020_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayNeighbor_params
{
    void *linux_side;
    EVROverlayError _ret;
    EOverlayDirection eDirection;
    VROverlayHandle_t ulFrom;
    VROverlayHandle_t ulTo;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_020_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    EVROverlayError _ret;
    EOverlayDirection eDirection;
    VROverlayHandle_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlay;
    EDualAnalogWhich eWhich;
    const HmdVector2_t *pvCenter;
    float fRadius;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlay;
    EDualAnalogWhich eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayTexture( struct cppIVROverlay_IVROverlay_020_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_020_ClearOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_020_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayRaw_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayRaw( struct cppIVROverlay_IVROverlay_020_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayFromFile_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_020_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    ETextureType *pAPIType;
    EColorSpace *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTexture( struct cppIVROverlay_IVROverlay_020_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayTextureSize_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_020_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_020_CreateDashboardOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pMainHandle;
    VROverlayHandle_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_020_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_020_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_020_IsDashboardVisible( struct cppIVROverlay_IVROverlay_020_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_020_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_020_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_020_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_020_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_020_ShowDashboard( struct cppIVROverlay_IVROverlay_020_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
};
extern void cppIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_020_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_020_ShowKeyboard( struct cppIVROverlay_IVROverlay_020_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_020_ShowKeyboardForOverlay_params
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
extern void cppIVROverlay_IVROverlay_020_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_020_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_020_GetKeyboardText( struct cppIVROverlay_IVROverlay_020_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_020_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_020_HideKeyboard( struct cppIVROverlay_IVROverlay_020_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    VROverlayHandle_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_SetOverlayIntersectionMask_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_020_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_020_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_020_GetOverlayFlags_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_020_GetOverlayFlags( struct cppIVROverlay_IVROverlay_020_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_020_ShowMessageOverlay_params
{
    void *linux_side;
    VRMessageOverlayResponse _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};
extern void cppIVROverlay_IVROverlay_020_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_020_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_020_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_020_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_020_CloseMessageOverlay_params *params );

#ifdef __cplusplus
}
#endif
