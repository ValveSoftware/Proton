/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVROverlay_IVROverlay_021_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_FindOverlay( struct cppIVROverlay_IVROverlay_021_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_CreateOverlay( struct cppIVROverlay_IVROverlay_021_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_DestroyOverlay( struct cppIVROverlay_IVROverlay_021_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayKey( struct cppIVROverlay_IVROverlay_021_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayName( struct cppIVROverlay_IVROverlay_021_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayName( struct cppIVROverlay_IVROverlay_021_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayImageData( struct cppIVROverlay_IVROverlay_021_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_021_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_021_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayFlag( struct cppIVROverlay_IVROverlay_021_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayFlag( struct cppIVROverlay_IVROverlay_021_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayColor( struct cppIVROverlay_IVROverlay_021_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayColor( struct cppIVROverlay_IVROverlay_021_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_021_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_021_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_021_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTexelAspect_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_021_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_021_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlaySortOrder_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_021_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_021_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_021_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fCurvature;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_021_SetOverlayCurvature_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayCurvature_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfCurvature;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_021_GetOverlayCurvature_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_021_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_021_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_021_GetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_021_SetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint64_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_021_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_ShowOverlay( struct cppIVROverlay_IVROverlay_021_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_HideOverlay( struct cppIVROverlay_IVROverlay_021_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_IsOverlayVisible( struct cppIVROverlay_IVROverlay_021_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_021_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_1322 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_021_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_021_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_021_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_021_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_021_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_021_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_021_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_021_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_021_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_021_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_021_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    const HmdVector2_t *pvCenter;
    float fRadius;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlay;
    uint32_t eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayTexture( struct cppIVROverlay_IVROverlay_021_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_021_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_021_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayRaw( struct cppIVROverlay_IVROverlay_021_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_021_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTexture_params
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
extern void cppIVROverlay_IVROverlay_021_GetOverlayTexture( struct cppIVROverlay_IVROverlay_021_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_021_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_021_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_021_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_021_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_021_IsDashboardVisible( struct cppIVROverlay_IVROverlay_021_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_021_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_021_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_021_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_021_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_021_ShowDashboard( struct cppIVROverlay_IVROverlay_021_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_021_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_021_ShowKeyboard( struct cppIVROverlay_IVROverlay_021_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_021_ShowKeyboardForOverlay_params
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
extern void cppIVROverlay_IVROverlay_021_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_021_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_021_GetKeyboardText( struct cppIVROverlay_IVROverlay_021_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_021_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_021_HideKeyboard( struct cppIVROverlay_IVROverlay_021_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_SetOverlayIntersectionMask_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_021_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_021_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_021_GetOverlayFlags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_021_GetOverlayFlags( struct cppIVROverlay_IVROverlay_021_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_021_ShowMessageOverlay_params
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
extern void cppIVROverlay_IVROverlay_021_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_021_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_021_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_021_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_021_CloseMessageOverlay_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
