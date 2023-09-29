/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVROverlay_IVROverlay_012_FindOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_FindOverlay( struct cppIVROverlay_IVROverlay_012_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_CreateOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_CreateOverlay( struct cppIVROverlay_IVROverlay_012_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_DestroyOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_DestroyOverlay( struct cppIVROverlay_IVROverlay_012_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_SetHighQualityOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_012_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_GetHighQualityOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_012_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_012_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayKey( struct cppIVROverlay_IVROverlay_012_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayName( struct cppIVROverlay_IVROverlay_012_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayImageData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayImageData( struct cppIVROverlay_IVROverlay_012_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayFlag( struct cppIVROverlay_IVROverlay_012_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayFlag_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayFlag( struct cppIVROverlay_IVROverlay_012_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayColor( struct cppIVROverlay_IVROverlay_012_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayColor_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayColor( struct cppIVROverlay_IVROverlay_012_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_012_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayAlpha_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_012_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayTransformType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTransformType;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_012_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_012_ShowOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_ShowOverlay( struct cppIVROverlay_IVROverlay_012_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_HideOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_HideOverlay( struct cppIVROverlay_IVROverlay_012_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_IsOverlayVisible( struct cppIVROverlay_IVROverlay_012_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_012_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    w_VREvent_t_101 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_012_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_012_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_012_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayInputMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t eInputMethod;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_012_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_012_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayMouseScale_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_012_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
    uint32_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
    uint64_t ulTo;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_012_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDirection;
    uint64_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const w_Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayTexture( struct cppIVROverlay_IVROverlay_012_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_012_ClearOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_012_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayRaw_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayRaw( struct cppIVROverlay_IVROverlay_012_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_012_SetOverlayFromFile_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_012_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_012_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayTexture_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    uint32_t *pAPI;
    uint32_t *pColorSpace;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayTexture( struct cppIVROverlay_IVROverlay_012_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_012_GetOverlayTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_012_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_012_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_012_CreateDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    uint64_t *pMainHandle;
    uint64_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_012_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_012_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_012_IsDashboardVisible( struct cppIVROverlay_IVROverlay_012_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_012_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_012_ShowDashboard( struct cppIVROverlay_IVROverlay_012_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_012_ShowKeyboard_params
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
extern void cppIVROverlay_IVROverlay_012_ShowKeyboard( struct cppIVROverlay_IVROverlay_012_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay_params
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
extern void cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_012_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_012_GetKeyboardText( struct cppIVROverlay_IVROverlay_012_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_012_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_012_HideKeyboard( struct cppIVROverlay_IVROverlay_012_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    uint32_t eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
