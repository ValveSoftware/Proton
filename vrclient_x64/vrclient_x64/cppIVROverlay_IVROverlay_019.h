/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVROverlay_IVROverlay_019_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_FindOverlay( struct cppIVROverlay_IVROverlay_019_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_CreateOverlay( struct cppIVROverlay_IVROverlay_019_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_DestroyOverlay( struct cppIVROverlay_IVROverlay_019_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_019_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_019_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_019_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayKey( struct cppIVROverlay_IVROverlay_019_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayName( struct cppIVROverlay_IVROverlay_019_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayName( struct cppIVROverlay_IVROverlay_019_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayImageData( struct cppIVROverlay_IVROverlay_019_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_019_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_019_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayFlag( struct cppIVROverlay_IVROverlay_019_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayFlag( struct cppIVROverlay_IVROverlay_019_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayColor( struct cppIVROverlay_IVROverlay_019_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayColor( struct cppIVROverlay_IVROverlay_019_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_019_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_019_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_019_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_019_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_019_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_019_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_019_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_019_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_019_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_019_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_019_GetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_019_SetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_019_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_019_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_ShowOverlay( struct cppIVROverlay_IVROverlay_019_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_HideOverlay( struct cppIVROverlay_IVROverlay_019_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_IsOverlayVisible( struct cppIVROverlay_IVROverlay_019_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_019_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_019_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_019_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_019_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_019_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_019_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_019_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_019_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_019_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_019_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_019_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_019_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_019_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_019_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_019_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_019_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_019_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *pvCenter;
    float fRadius;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayTexture( struct cppIVROverlay_IVROverlay_019_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_019_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_019_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayRaw( struct cppIVROverlay_IVROverlay_019_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_019_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTexture_params
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
extern void cppIVROverlay_IVROverlay_019_GetOverlayTexture( struct cppIVROverlay_IVROverlay_019_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_019_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_019_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_019_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_019_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_019_IsDashboardVisible( struct cppIVROverlay_IVROverlay_019_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_019_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_019_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_019_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_019_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_019_ShowDashboard( struct cppIVROverlay_IVROverlay_019_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_019_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_019_ShowKeyboard( struct cppIVROverlay_IVROverlay_019_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_019_ShowKeyboardForOverlay_params
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
extern void cppIVROverlay_IVROverlay_019_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_019_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_019_GetKeyboardText( struct cppIVROverlay_IVROverlay_019_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_019_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_019_HideKeyboard( struct cppIVROverlay_IVROverlay_019_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_019_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_019_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_019_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_019_GetOverlayFlags( struct cppIVROverlay_IVROverlay_019_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_019_ShowMessageOverlay_params
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
extern void cppIVROverlay_IVROverlay_019_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_019_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_019_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_019_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_019_CloseMessageOverlay_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
