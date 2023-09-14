#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_017_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_FindOverlay( struct cppIVROverlay_IVROverlay_017_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_CreateOverlay( struct cppIVROverlay_IVROverlay_017_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_DestroyOverlay( struct cppIVROverlay_IVROverlay_017_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_017_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_GetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_017_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_017_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayKey( struct cppIVROverlay_IVROverlay_017_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayName( struct cppIVROverlay_IVROverlay_017_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayName( struct cppIVROverlay_IVROverlay_017_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayImageData( struct cppIVROverlay_IVROverlay_017_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_017_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_017_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayFlag( struct cppIVROverlay_IVROverlay_017_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayFlag( struct cppIVROverlay_IVROverlay_017_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayColor( struct cppIVROverlay_IVROverlay_017_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayColor( struct cppIVROverlay_IVROverlay_017_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_017_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_017_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_017_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_017_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_017_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_017_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_017_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_017_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_017_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_017_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_017_GetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayRenderModel_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_017_SetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_017_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_017_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_ShowOverlay( struct cppIVROverlay_IVROverlay_017_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_HideOverlay( struct cppIVROverlay_IVROverlay_017_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_IsOverlayVisible( struct cppIVROverlay_IVROverlay_017_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_017_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    winVREvent_t_1011 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_017_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_017_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_017_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_017_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_017_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_017_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_017_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_017_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_017_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_017_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_017_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_GetGamepadFocusOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_017_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_017_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_017_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_017_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    VROverlayHandle_t ulFrom;
    VROverlayHandle_t ulTo;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_017_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    VROverlayHandle_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *vCenter;
    float fRadius;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayTexture( struct cppIVROverlay_IVROverlay_017_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_017_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_017_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayRaw( struct cppIVROverlay_IVROverlay_017_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_017_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPIType;
    uint32_t *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTexture( struct cppIVROverlay_IVROverlay_017_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_017_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_017_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pMainHandle;
    VROverlayHandle_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_017_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_017_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_017_IsDashboardVisible( struct cppIVROverlay_IVROverlay_017_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_017_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_017_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_017_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_017_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_017_ShowDashboard( struct cppIVROverlay_IVROverlay_017_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
};
extern void cppIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_017_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_017_ShowKeyboard( struct cppIVROverlay_IVROverlay_017_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_017_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    bool bUseMinimalMode;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_017_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_017_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_017_GetKeyboardText( struct cppIVROverlay_IVROverlay_017_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_017_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_017_HideKeyboard( struct cppIVROverlay_IVROverlay_017_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    VROverlayHandle_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_017_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_017_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_017_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_017_GetOverlayFlags( struct cppIVROverlay_IVROverlay_017_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_017_ShowMessageOverlay_params
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
extern void cppIVROverlay_IVROverlay_017_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_017_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_017_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_017_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_017_CloseMessageOverlay_params *params );

#ifdef __cplusplus
}
#endif
