/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVROverlay_IVROverlay_026_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_FindOverlay( struct cppIVROverlay_IVROverlay_026_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_CreateOverlay( struct cppIVROverlay_IVROverlay_026_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_DestroyOverlay( struct cppIVROverlay_IVROverlay_026_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayKey( struct cppIVROverlay_IVROverlay_026_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayName( struct cppIVROverlay_IVROverlay_026_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayName( struct cppIVROverlay_IVROverlay_026_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayImageData( struct cppIVROverlay_IVROverlay_026_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_026_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_026_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayFlag( struct cppIVROverlay_IVROverlay_026_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayFlag( struct cppIVROverlay_IVROverlay_026_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayFlags( struct cppIVROverlay_IVROverlay_026_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayColor( struct cppIVROverlay_IVROverlay_026_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayColor( struct cppIVROverlay_IVROverlay_026_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_026_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_026_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_026_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_026_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_026_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_026_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_026_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_026_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_026_SetOverlayCurvature_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_026_GetOverlayCurvature_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRadians;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch( struct cppIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRadians;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch( struct cppIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_026_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_026_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_026_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulCursorOverlayHandle;
    const HmdVector2_t *pvHotspot;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_026_SetOverlayTransformCursor_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTransformCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvHotspot;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_026_GetOverlayTransformCursor_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTransformProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
    const VROverlayProjection_t *pProjection;
    uint32_t eEye;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTransformProjection( struct cppIVROverlay_IVROverlay_026_SetOverlayTransformProjection_params *params );

struct cppIVROverlay_IVROverlay_026_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_ShowOverlay( struct cppIVROverlay_IVROverlay_026_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_HideOverlay( struct cppIVROverlay_IVROverlay_026_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_IsOverlayVisible( struct cppIVROverlay_IVROverlay_026_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_026_WaitFrameSync_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nTimeoutMs;
};
extern void cppIVROverlay_IVROverlay_026_WaitFrameSync( struct cppIVROverlay_IVROverlay_026_WaitFrameSync_params *params );

struct cppIVROverlay_IVROverlay_026_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1168 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_026_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_026_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_026_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_026_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_026_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_026_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_026_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_026_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_026_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_026_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_026_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_026_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
};
extern void cppIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration( struct cppIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayCursor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulCursorHandle;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayCursor( struct cppIVROverlay_IVROverlay_026_SetOverlayCursor_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvCursor;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride_params *params );

struct cppIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayTexture( struct cppIVROverlay_IVROverlay_026_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_026_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_026_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unBytesPerPixel;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayRaw( struct cppIVROverlay_IVROverlay_026_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_026_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_026_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_026_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTexture_params
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
extern void cppIVROverlay_IVROverlay_026_GetOverlayTexture( struct cppIVROverlay_IVROverlay_026_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_026_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_026_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_026_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_026_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_026_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_026_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_026_IsDashboardVisible( struct cppIVROverlay_IVROverlay_026_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_026_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_026_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_026_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_026_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_026_ShowDashboard( struct cppIVROverlay_IVROverlay_026_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_026_ShowKeyboard_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_026_ShowKeyboard( struct cppIVROverlay_IVROverlay_026_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_026_ShowKeyboardForOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    uint32_t unFlags;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_026_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_026_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_026_GetKeyboardText( struct cppIVROverlay_IVROverlay_026_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_026_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_026_HideKeyboard( struct cppIVROverlay_IVROverlay_026_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_ShowMessageOverlay_params
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
extern void cppIVROverlay_IVROverlay_026_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_026_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_026_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_026_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_026_CloseMessageOverlay_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
