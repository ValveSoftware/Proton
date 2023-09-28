#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.16.8/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_025.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVROverlay_IVROverlay_025
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
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
    virtual uint32_t SetOverlayCurvature( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayCurvature( uint64_t, float * ) = 0;
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
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformCursor( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t GetOverlayTransformCursor( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayTransformProjection( uint64_t, uint32_t, const HmdMatrix34_t *, const VROverlayProjection_t *, uint32_t ) = 0;
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
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t TriggerLaserMouseHapticVibration( uint64_t, float, float, float ) = 0;
    virtual uint32_t SetOverlayCursor( uint64_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayCursorPositionOverride( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t ClearOverlayCursorPositionOverride( uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_025_FindOverlay( struct cppIVROverlay_IVROverlay_025_FindOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_CreateOverlay( struct cppIVROverlay_IVROverlay_025_CreateOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_DestroyOverlay( struct cppIVROverlay_IVROverlay_025_DestroyOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_GetOverlayKey( struct cppIVROverlay_IVROverlay_025_GetOverlayKey_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_025_GetOverlayName( struct cppIVROverlay_IVROverlay_025_GetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_025_SetOverlayName( struct cppIVROverlay_IVROverlay_025_SetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
}

void cppIVROverlay_IVROverlay_025_GetOverlayImageData( struct cppIVROverlay_IVROverlay_025_GetOverlayImageData_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_025_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_025_SetOverlayRenderingPid_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_025_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_025_GetOverlayRenderingPid_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayFlag( struct cppIVROverlay_IVROverlay_025_SetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_025_GetOverlayFlag( struct cppIVROverlay_IVROverlay_025_GetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_025_GetOverlayFlags( struct cppIVROverlay_IVROverlay_025_GetOverlayFlags_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
}

void cppIVROverlay_IVROverlay_025_SetOverlayColor( struct cppIVROverlay_IVROverlay_025_SetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_025_GetOverlayColor( struct cppIVROverlay_IVROverlay_025_GetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_025_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_025_SetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_025_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_025_GetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_025_SetOverlayTexelAspect_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_025_GetOverlayTexelAspect_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_025_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_025_SetOverlaySortOrder_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_025_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_025_GetOverlaySortOrder_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_025_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_025_SetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_025_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_025_GetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_025_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_025_SetOverlayCurvature_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayCurvature( params->ulOverlayHandle, params->fCurvature );
}

void cppIVROverlay_IVROverlay_025_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_025_GetOverlayCurvature_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayCurvature( params->ulOverlayHandle, params->pfCurvature );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_025_SetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformType_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformCursor_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformCursor( params->ulCursorOverlayHandle, params->pvHotspot );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformCursor_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformCursor( params->ulOverlayHandle, params->pvHotspot );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformProjection( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformProjection_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformProjection( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform, params->pProjection, params->eEye );
}

void cppIVROverlay_IVROverlay_025_ShowOverlay( struct cppIVROverlay_IVROverlay_025_ShowOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_HideOverlay( struct cppIVROverlay_IVROverlay_025_HideOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_IsOverlayVisible( struct cppIVROverlay_IVROverlay_025_IsOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_025_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_025_PollNextOverlayEvent_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_1168_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent );
    if (params->pEvent)
        struct_VREvent_t_1168_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVROverlay_IVROverlay_025_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_025_GetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_025_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_025_SetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_025_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_025_GetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_025_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_025_SetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_025_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_025_ComputeOverlayIntersection_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_025_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_025_IsHoverTargetOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_025_SetOverlayIntersectionMask_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

void cppIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration( struct cppIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->TriggerLaserMouseHapticVibration( params->ulOverlayHandle, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
}

void cppIVROverlay_IVROverlay_025_SetOverlayCursor( struct cppIVROverlay_IVROverlay_025_SetOverlayCursor_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayCursor( params->ulOverlayHandle, params->ulCursorHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayCursorPositionOverride( params->ulOverlayHandle, params->pvCursor );
}

void cppIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->ClearOverlayCursorPositionOverride( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTexture( struct cppIVROverlay_IVROverlay_025_SetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_025_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_025_ClearOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayRaw( struct cppIVROverlay_IVROverlay_025_SetOverlayRaw_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unBytesPerPixel );
}

void cppIVROverlay_IVROverlay_025_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_025_SetOverlayFromFile_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTexture( struct cppIVROverlay_IVROverlay_025_GetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
}

void cppIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureSize_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_025_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_025_CreateDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_025_IsDashboardVisible( struct cppIVROverlay_IVROverlay_025_IsDashboardVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_025_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_025_IsActiveDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_025_ShowDashboard( struct cppIVROverlay_IVROverlay_025_ShowDashboard_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_025_ShowKeyboard( struct cppIVROverlay_IVROverlay_025_ShowKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
}

void cppIVROverlay_IVROverlay_025_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_025_ShowKeyboardForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
}

void cppIVROverlay_IVROverlay_025_GetKeyboardText( struct cppIVROverlay_IVROverlay_025_GetKeyboardText_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_025_HideKeyboard( struct cppIVROverlay_IVROverlay_025_HideKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_025_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_025_ShowMessageOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
}

void cppIVROverlay_IVROverlay_025_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_025_CloseMessageOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_025 *iface = (struct cppIVROverlay_IVROverlay_025 *)params->linux_side;
    iface->CloseMessageOverlay(  );
}

#ifdef __cplusplus
}
#endif
