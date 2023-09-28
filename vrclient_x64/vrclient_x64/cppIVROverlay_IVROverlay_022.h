#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_022;
struct cppIVROverlay_IVROverlay_022_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_FindOverlay( struct cppIVROverlay_IVROverlay_022_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_CreateOverlay( struct cppIVROverlay_IVROverlay_022_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_DestroyOverlay( struct cppIVROverlay_IVROverlay_022_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayKey( struct cppIVROverlay_IVROverlay_022_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayName( struct cppIVROverlay_IVROverlay_022_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayName( struct cppIVROverlay_IVROverlay_022_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayImageData( struct cppIVROverlay_IVROverlay_022_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_022_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_022_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayFlag( struct cppIVROverlay_IVROverlay_022_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayFlag( struct cppIVROverlay_IVROverlay_022_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayFlags( struct cppIVROverlay_IVROverlay_022_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayColor( struct cppIVROverlay_IVROverlay_022_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayColor( struct cppIVROverlay_IVROverlay_022_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_022_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_022_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_022_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_022_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_022_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_022_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_022_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_022_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_022_SetOverlayCurvature_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_022_GetOverlayCurvature_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_022_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_022_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_022_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_022_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_022_GetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_022_SetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_022_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_022_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_022_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulCursorOverlayHandle;
    const HmdVector2_t *pvHotspot;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_022_SetOverlayTransformCursor_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvHotspot;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_022_GetOverlayTransformCursor_params *params );

struct cppIVROverlay_IVROverlay_022_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_ShowOverlay( struct cppIVROverlay_IVROverlay_022_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_HideOverlay( struct cppIVROverlay_IVROverlay_022_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_IsOverlayVisible( struct cppIVROverlay_IVROverlay_022_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_022_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    winVREvent_t_1916 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_022_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_022_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_022_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_022_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_022_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_022_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_022_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_022_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_022_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_022_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_022_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *pvCenter;
    float fRadius;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_022_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};
extern void cppIVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration( struct cppIVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulCursorHandle;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayCursor( struct cppIVROverlay_IVROverlay_022_SetOverlayCursor_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvCursor;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride_params *params );

struct cppIVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayTexture( struct cppIVROverlay_IVROverlay_022_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_022_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_022_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unBytesPerPixel;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayRaw( struct cppIVROverlay_IVROverlay_022_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_022_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_022_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_022_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTexture_params
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
extern void cppIVROverlay_IVROverlay_022_GetOverlayTexture( struct cppIVROverlay_IVROverlay_022_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_022_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_022_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_022_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_022_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_022_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_022_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_022_IsDashboardVisible( struct cppIVROverlay_IVROverlay_022_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_022_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_022_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_022_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_022_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_022_ShowDashboard( struct cppIVROverlay_IVROverlay_022_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_022_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVROverlay_IVROverlay_022_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_022_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_022_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_022_ShowKeyboard( struct cppIVROverlay_IVROverlay_022_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_022_ShowKeyboardForOverlay_params
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
extern void cppIVROverlay_IVROverlay_022_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_022_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_022_GetKeyboardText( struct cppIVROverlay_IVROverlay_022_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_022_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_022_HideKeyboard( struct cppIVROverlay_IVROverlay_022_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_ShowMessageOverlay_params
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
extern void cppIVROverlay_IVROverlay_022_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_022_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_022_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_022_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_022_CloseMessageOverlay_params *params );

#ifdef __cplusplus
}
#endif
