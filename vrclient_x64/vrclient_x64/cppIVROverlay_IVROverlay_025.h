#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_025_FindOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_FindOverlay( struct cppIVROverlay_IVROverlay_025_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_CreateOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_CreateOverlay( struct cppIVROverlay_IVROverlay_025_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_DestroyOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_DestroyOverlay( struct cppIVROverlay_IVROverlay_025_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayKey( struct cppIVROverlay_IVROverlay_025_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayName( struct cppIVROverlay_IVROverlay_025_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayName_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayName( struct cppIVROverlay_IVROverlay_025_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayImageData_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayImageData( struct cppIVROverlay_IVROverlay_025_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVROverlayError error;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayRenderingPid_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_025_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_025_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayFlag_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayFlag( struct cppIVROverlay_IVROverlay_025_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayFlag_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayFlag( struct cppIVROverlay_IVROverlay_025_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayFlags_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayFlags( struct cppIVROverlay_IVROverlay_025_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayColor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayColor( struct cppIVROverlay_IVROverlay_025_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayColor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayColor( struct cppIVROverlay_IVROverlay_025_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayAlpha_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_025_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayAlpha_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_025_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTexelAspect_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_025_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTexelAspect_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_025_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlaySortOrder_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_025_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlaySortOrder_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_025_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayWidthInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_025_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayWidthInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_025_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayCurvature_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fCurvature;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_025_SetOverlayCurvature_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayCurvature_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfCurvature;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_025_GetOverlayCurvature_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EColorSpace eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EColorSpace *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTextureBounds_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_025_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTextureBounds_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTransformType_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayTransformType *peTransformType;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTransformCursor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulCursorOverlayHandle;
    const HmdVector2_t *pvHotspot;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformCursor_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTransformCursor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvHotspot;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformCursor_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTransformProjection_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
    const VROverlayProjection_t *pProjection;
    EVREye eEye;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTransformProjection( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformProjection_params *params );

struct cppIVROverlay_IVROverlay_025_ShowOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_ShowOverlay( struct cppIVROverlay_IVROverlay_025_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_HideOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_HideOverlay( struct cppIVROverlay_IVROverlay_025_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_IsOverlayVisible( struct cppIVROverlay_IVROverlay_025_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_025_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    winVREvent_t_1168 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_025_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_025_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayInputMethod_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_025_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayInputMethod_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod eInputMethod;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_025_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayMouseScale_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_025_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayMouseScale_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_025_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_025_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_025_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_025_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_025_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_025_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayIntersectionMask_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_025_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};
extern void cppIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration( struct cppIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayCursor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t ulCursorHandle;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayCursor( struct cppIVROverlay_IVROverlay_025_SetOverlayCursor_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvCursor;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride_params *params );

struct cppIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayTexture( struct cppIVROverlay_IVROverlay_025_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_025_ClearOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_025_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayRaw_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unBytesPerPixel;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayRaw( struct cppIVROverlay_IVROverlay_025_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_025_SetOverlayFromFile_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_025_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_025_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTexture_params
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
extern void cppIVROverlay_IVROverlay_025_GetOverlayTexture( struct cppIVROverlay_IVROverlay_025_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_025_GetOverlayTextureSize_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_025_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_025_CreateDashboardOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pMainHandle;
    VROverlayHandle_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_025_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_025_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_025_IsDashboardVisible( struct cppIVROverlay_IVROverlay_025_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_025_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_025_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_025_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_025_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_025_ShowDashboard( struct cppIVROverlay_IVROverlay_025_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
};
extern void cppIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_025_ShowKeyboard_params
{
    void *linux_side;
    EVROverlayError _ret;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_025_ShowKeyboard( struct cppIVROverlay_IVROverlay_025_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_025_ShowKeyboardForOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_025_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_025_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_025_GetKeyboardText( struct cppIVROverlay_IVROverlay_025_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_025_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_025_HideKeyboard( struct cppIVROverlay_IVROverlay_025_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    VROverlayHandle_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_ShowMessageOverlay_params
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
extern void cppIVROverlay_IVROverlay_025_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_025_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_025_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_025_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_025_CloseMessageOverlay_params *params );

#ifdef __cplusplus
}
#endif
