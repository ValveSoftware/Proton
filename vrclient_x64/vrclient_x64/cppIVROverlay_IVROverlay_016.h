#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_016_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_FindOverlay( struct cppIVROverlay_IVROverlay_016_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_CreateOverlay( struct cppIVROverlay_IVROverlay_016_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_DestroyOverlay( struct cppIVROverlay_IVROverlay_016_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_016_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_016_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_016_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayKey( struct cppIVROverlay_IVROverlay_016_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayName( struct cppIVROverlay_IVROverlay_016_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayName( struct cppIVROverlay_IVROverlay_016_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayImageData( struct cppIVROverlay_IVROverlay_016_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_016_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_016_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayFlag( struct cppIVROverlay_IVROverlay_016_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayFlag( struct cppIVROverlay_IVROverlay_016_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayColor( struct cppIVROverlay_IVROverlay_016_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayColor( struct cppIVROverlay_IVROverlay_016_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_016_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_016_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_016_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_016_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_016_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_016_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_016_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_016_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_016_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_016_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_016_GetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_016_SetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_016_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_016_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_ShowOverlay( struct cppIVROverlay_IVROverlay_016_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_HideOverlay( struct cppIVROverlay_IVROverlay_016_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_IsOverlayVisible( struct cppIVROverlay_IVROverlay_016_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_016_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    winVREvent_t_1010 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_016_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_016_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_016_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_016_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_016_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_016_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_016_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_016_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_016_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_016_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_016_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_016_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_016_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_016_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_016_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_016_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayTexture( struct cppIVROverlay_IVROverlay_016_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_016_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_016_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayRaw( struct cppIVROverlay_IVROverlay_016_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_016_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTexture_params
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
extern void cppIVROverlay_IVROverlay_016_GetOverlayTexture( struct cppIVROverlay_IVROverlay_016_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_016_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_016_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_016_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_016_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_016_IsDashboardVisible( struct cppIVROverlay_IVROverlay_016_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_016_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_016_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_016_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_016_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_016_ShowDashboard( struct cppIVROverlay_IVROverlay_016_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_016_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_016_ShowKeyboard( struct cppIVROverlay_IVROverlay_016_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_016_ShowKeyboardForOverlay_params
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
extern void cppIVROverlay_IVROverlay_016_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_016_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_016_GetKeyboardText( struct cppIVROverlay_IVROverlay_016_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_016_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_016_HideKeyboard( struct cppIVROverlay_IVROverlay_016_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_016_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_016_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_016_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_016_GetOverlayFlags( struct cppIVROverlay_IVROverlay_016_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_016_ShowMessageOverlay_params
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
extern void cppIVROverlay_IVROverlay_016_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_016_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_016_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_016_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_016_CloseMessageOverlay_params *params );

#ifdef __cplusplus
}
#endif
