#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.4/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_013.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVROverlay_IVROverlay_013
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, VREvent_t *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_013_FindOverlay( struct cppIVROverlay_IVROverlay_013_FindOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_CreateOverlay( struct cppIVROverlay_IVROverlay_013_CreateOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_DestroyOverlay( struct cppIVROverlay_IVROverlay_013_DestroyOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_013_SetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_013_GetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_013_GetOverlayKey( struct cppIVROverlay_IVROverlay_013_GetOverlayKey_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_013_GetOverlayName( struct cppIVROverlay_IVROverlay_013_GetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_013_GetOverlayImageData( struct cppIVROverlay_IVROverlay_013_GetOverlayImageData_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_013_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_013_SetOverlayRenderingPid_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_013_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_013_GetOverlayRenderingPid_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_SetOverlayFlag( struct cppIVROverlay_IVROverlay_013_SetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_013_GetOverlayFlag( struct cppIVROverlay_IVROverlay_013_GetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_013_SetOverlayColor( struct cppIVROverlay_IVROverlay_013_SetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_013_GetOverlayColor( struct cppIVROverlay_IVROverlay_013_GetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_013_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_013_SetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_013_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_013_GetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_013_SetOverlayTexelAspect_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_013_GetOverlayTexelAspect_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_013_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_013_SetOverlaySortOrder_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_013_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_013_GetOverlaySortOrder_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_013_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_013_SetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_013_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_013_GetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_013_SetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformType_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_013_ShowOverlay( struct cppIVROverlay_IVROverlay_013_ShowOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_HideOverlay( struct cppIVROverlay_IVROverlay_013_HideOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_IsOverlayVisible( struct cppIVROverlay_IVROverlay_013_IsOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_013_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_013_PollNextOverlayEvent_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_104_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent );
    if (params->pEvent)
        struct_VREvent_t_104_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVROverlay_IVROverlay_013_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_013_GetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_013_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_013_SetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_013_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_013_GetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_013_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_013_SetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_013_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_013_ComputeOverlayIntersection_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_013_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_013_IsHoverTargetOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_013_GetGamepadFocusOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_013_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_013_SetGamepadFocusOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_013_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_013_SetOverlayNeighbor_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTexture( struct cppIVROverlay_IVROverlay_013_SetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_013_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_013_ClearOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_SetOverlayRaw( struct cppIVROverlay_IVROverlay_013_SetOverlayRaw_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_013_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_013_SetOverlayFromFile_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTexture( struct cppIVROverlay_IVROverlay_013_GetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPI, params->pColorSpace );
}

void cppIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureSize_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_013_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_013_CreateDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_013_IsDashboardVisible( struct cppIVROverlay_IVROverlay_013_IsDashboardVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_013_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_013_IsActiveDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_013_ShowDashboard( struct cppIVROverlay_IVROverlay_013_ShowDashboard_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_013_ShowKeyboard( struct cppIVROverlay_IVROverlay_013_ShowKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_013_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_013_ShowKeyboardForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_013_GetKeyboardText( struct cppIVROverlay_IVROverlay_013_GetKeyboardText_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_013_HideKeyboard( struct cppIVROverlay_IVROverlay_013_HideKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_013_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_013_SetOverlayIntersectionMask_params *params )
{
    struct cppIVROverlay_IVROverlay_013 *iface = (struct cppIVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

#ifdef __cplusplus
}
#endif
